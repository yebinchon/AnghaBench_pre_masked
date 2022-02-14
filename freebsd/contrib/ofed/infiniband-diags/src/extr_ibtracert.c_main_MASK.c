
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct ibdiag_opt {char* member_0; float member_1; int member_2; char* member_3; char* member_4; } ;
struct TYPE_9__ {scalar_t__ lid; int member_0; } ;
typedef TYPE_1__ ib_portid_t ;
typedef int Node ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int * FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,char const**) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_15 (int ,int ,TYPE_1__*,char*,scalar_t__,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;

int FUNC_17(int VAR_22, char **VAR_23)
{
 int VAR_24[3] =
     { VAR_2, VAR_3, VAR_1 };
 ib_portid_t VAR_25 = { 0 };
 ib_portid_t VAR_26 = { 0 };
 ib_portid_t VAR_27 = { 0 };
 Node *VAR_28;

 const struct ibdiag_opt VAR_29[] = {
  {"force", 'f', 0, ((void*)0), "force"},
  {"no_info", 'n', 0, ((void*)0), "simple format"},
  {"mlid", 'm', 1, "<mlid>", "multicast trace of the mlid"},
  {"node-name-map", 1, 1, "<file>", "node name map file"},
  {0}
 };
 char VAR_30[] = "<src-addr> <dest-addr>";
 const char *VAR_31[] = {
  "- Unicast examples:",
  "4 16\t\t\t# show path between lids 4 and 16",
  "-n 4 16\t\t# same, but using simple output format",
  "-G 0x8f1040396522d 0x002c9000100d051\t# use guid addresses",

  " - Multicast examples:",
  "-m 0xc000 4 16\t# show multicast path of mlid 0xc000 between lids 4 and 16",
  ((void*)0),
 };

 FUNC_8(VAR_22, VAR_23, ((void*)0), "DK", VAR_29, VAR_17,
       VAR_30, VAR_31);

 VAR_5 = VAR_19;
 VAR_22 -= VAR_16;
 VAR_23 += VAR_16;

 if (VAR_22 < 2)
  FUNC_9();

 if (VAR_11)
  VAR_21 = VAR_11;

 VAR_18 = FUNC_11(VAR_6, VAR_7, VAR_24, 3);
 if (!VAR_18)
  FUNC_0("Failed to open '%s' port '%d'", VAR_6, VAR_7);

 FUNC_16(VAR_18, VAR_9);

 VAR_14 = FUNC_12(VAR_15);

 if (FUNC_15(VAR_6, VAR_7, &VAR_26, VAR_23[0],
          VAR_8, VAR_10, VAR_18) < 0)
  FUNC_0("can't resolve source port %s", VAR_23[0]);

 if (FUNC_15(VAR_6, VAR_7, &VAR_27, VAR_23[1],
          VAR_8, VAR_10, VAR_18) < 0)
  FUNC_0("can't resolve destination port %s", VAR_23[1]);

 if (VAR_8 == VAR_0) {
  if (FUNC_14(&VAR_26, ((void*)0)) < 0)
   FUNC_0("cannot resolve lid for port \'%s\'",
    FUNC_13(&VAR_26));
  if (FUNC_14(&VAR_27, ((void*)0)) < 0)
   FUNC_0("cannot resolve lid for port \'%s\'",
    FUNC_13(&VAR_27));
 }

 if (VAR_27.lid == 0 || VAR_26.lid == 0) {
  FUNC_1("bad src/dest lid");
  FUNC_9();
 }

 if (VAR_8 != VAR_0) {

  if (FUNC_6(&VAR_25, &VAR_26, 0) < 0)
   FUNC_0("can't find a route to the src port");

  VAR_26 = VAR_25;
 }

 if (!VAR_13) {
  if (FUNC_6(&VAR_26, &VAR_27, VAR_4) < 0)
   FUNC_0("can't find a route from src to dest");
  FUNC_4(0);
 } else {
  if (VAR_12 < 0xc000)
   FUNC_1("invalid MLID; must be 0xc000 or larger");
 }

 if (!(VAR_20 = FUNC_7(&VAR_27)))
  FUNC_0("can't reach target lid %d", VAR_27.lid);

 if (!(VAR_28 = FUNC_5(&VAR_26, VAR_12)))
  FUNC_0("can't find a multicast route from src to dest");


 FUNC_3(VAR_28, VAR_4);

 FUNC_2(VAR_14);

 FUNC_10(VAR_18);

 FUNC_4(0);
}
