
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ibdiag_opt {char* member_0; char member_1; int member_2; char* member_3; char* member_4; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ ib_portid_t ;


 int FUNC_0 (char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_1__*,unsigned int,unsigned int) ;
 char* FUNC_3 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,char const**) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int*,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_1__*,char*,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_13 ;
 unsigned int FUNC_12 (char*,int ,int ) ;

int FUNC_13(int VAR_14, char **VAR_15)
{
 int VAR_16[3] =
     { VAR_1, VAR_2, VAR_0 };
 ib_portid_t VAR_17 = { 0 };
 unsigned VAR_18 = 0, VAR_19 = 0;
 char *VAR_20;

 const struct ibdiag_opt VAR_21[] = {
  {"all", 'a', 0, ((void*)0), "show all lids, even invalid entries"},
  {"no_dests", 'n', 0, ((void*)0),
   "do not try to resolve destinations"},
  {"Multicast", 'M', 0, ((void*)0), "show multicast forwarding tables"},
  {"node-name-map", 1, 1, "<file>", "node name map file"},
  {0}
 };
 char VAR_22[] = "[<dest dr_path|lid|guid> [<startlid> [<endlid>]]]";
 const char *VAR_23[] = {
  " -- Unicast examples:",
  "4\t# dump all lids with valid out ports of switch with lid 4",
  "-a 4\t# same, but dump all lids, even with invalid out ports",
  "-n 4\t# simple dump format - no destination resolving",
  "4 10\t# dump lids starting from 10",
  "4 0x10 0x20\t# dump lid range",
  "-G 0x08f1040023\t# resolve switch by GUID",
  "-D 0,1\t# resolve switch by direct path",
  " -- Multicast examples:",
  "-M 4\t# dump all non empty mlids of switch with lid 4",
  "-M 4 0xc010 0xc020\t# same, but with range",
  "-M -n 4\t# simple dump format",
  ((void*)0),
 };

 FUNC_5(VAR_14, VAR_15, ((void*)0), "K", VAR_21, VAR_12,
       VAR_22, VAR_23);

 VAR_14 -= VAR_11;
 VAR_15 += VAR_11;

 if (!VAR_14)
  FUNC_6();

 if (VAR_14 > 1)
  VAR_18 = FUNC_12(VAR_15[1], 0, 0);
 if (VAR_14 > 2)
  VAR_19 = FUNC_12(VAR_15[2], 0, 0);

 VAR_9 = FUNC_9(VAR_10);

 VAR_13 = FUNC_8(VAR_3, VAR_4, VAR_16, 3);
 if (!VAR_13)
  FUNC_0("Failed to open '%s' port '%d'", VAR_3, VAR_4);

 FUNC_11(VAR_13, VAR_6);

 if (FUNC_10(VAR_3, VAR_4, &VAR_17, VAR_15[0],
          VAR_5, VAR_7, VAR_13) < 0)
  FUNC_0("can't resolve destination port %s", VAR_15[0]);

 if (VAR_8)
  VAR_20 = FUNC_2(&VAR_17, VAR_18, VAR_19);
 else
  VAR_20 = FUNC_3(&VAR_17, VAR_18, VAR_19);

 if (VAR_20)
  FUNC_0("dump tables: %s", VAR_20);

 FUNC_7(VAR_13);
 FUNC_1(VAR_9);
 FUNC_4(0);
}
