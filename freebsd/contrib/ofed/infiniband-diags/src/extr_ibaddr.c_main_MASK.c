
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ibdiag_opt {char* member_0; char member_1; char* member_4; int * member_3; int member_2; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ ib_portid_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,char const**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*,int*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int VAR_12 ;
 int FUNC_9 (char*,int ,int ) ;

int FUNC_10(int VAR_13, char **VAR_14)
{
 int VAR_15[3] =
     { VAR_1, VAR_2, VAR_0 };
 ib_portid_t VAR_16 = { 0 };
 int VAR_17 = 0;

 const struct ibdiag_opt VAR_18[] = {
  {"gid_show", 'g', 0, ((void*)0), "show gid address only"},
  {"lid_show", 'l', 0, ((void*)0), "show lid range only"},
  {"Lid_show", 'L', 0, ((void*)0), "show lid range (in decimal) only"},
  {0}
 };
 char VAR_19[] = "[<lid|dr_path|guid>]";
 const char *VAR_20[] = {
  "\t\t# local port's address",
  "32\t\t# show lid range and gid of lid 32",
  "-G 0x8f1040023\t# same but using guid address",
  "-l 32\t\t# show lid range only",
  "-L 32\t\t# show decimal lid range only",
  "-g 32\t\t# show gid address only",
  ((void*)0)
 };

 FUNC_3(VAR_13, VAR_14, ((void*)0), "KL", VAR_18, VAR_9,
       VAR_19, VAR_20);

 VAR_13 -= VAR_8;
 VAR_14 += VAR_8;

 if (VAR_13 > 1)
  VAR_17 = FUNC_9(VAR_14[1], 0, 0);

 if (!VAR_11 && !VAR_10)
  VAR_11 = VAR_10 = 1;

 VAR_12 = FUNC_5(VAR_3, VAR_4, VAR_15, 3);
 if (!VAR_12)
  FUNC_0("Failed to open '%s' port '%d'", VAR_3, VAR_4);

 FUNC_8(VAR_12, VAR_6);

 if (VAR_13) {
  if (FUNC_6(VAR_3, VAR_4, &VAR_16, VAR_14[0],
           VAR_5, VAR_7, VAR_12) < 0)
   FUNC_0("can't resolve destination port %s", VAR_14[0]);
 } else {
  if (FUNC_7(VAR_3, VAR_4, &VAR_16, &VAR_17, ((void*)0)) < 0)
   FUNC_0("can't resolve self port %s", VAR_14[0]);
 }

 if (FUNC_2(&VAR_16, VAR_17, VAR_11, VAR_10) < 0)
  FUNC_0("can't resolve requested address");

 FUNC_4(VAR_12);
 FUNC_1(0);
}
