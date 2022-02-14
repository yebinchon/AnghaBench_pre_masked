
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long obj_id; int* cstat; } ;
typedef TYPE_1__ ses_objstat ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_5 (char*,char**,int ) ;

int
FUNC_6(int VAR_4, char **VAR_5)
{
 int VAR_6;
 int VAR_7;
 ses_objstat VAR_8;
 long VAR_9;
 char *VAR_10;

 if (VAR_4 != 3) {
usage:
  FUNC_1(VAR_2, "usage: %s device objectid\n", *VAR_5);
  return (1);
 }
 VAR_6 = FUNC_3(VAR_5[1], VAR_0);
 if (VAR_6 < 0) {
  FUNC_4(VAR_5[1]);
  return (1);
 }
 VAR_10 = VAR_5[2];
 VAR_9 = FUNC_5(VAR_5[2], &VAR_10, 0);
 if (VAR_10 == VAR_5[2]) {
  goto usage;
 }
 VAR_8.obj_id = VAR_9;
 if (FUNC_2(VAR_6, VAR_1, (caddr_t) &VAR_8) < 0) {
  FUNC_4("SESIOC_GETOBJSTAT");
  return (1);
 }
 FUNC_1(VAR_3, "Object 0x%lx: 0x%x 0x%x 0x%x 0x%x\n", VAR_8.obj_id,
     VAR_8.cstat[0], VAR_8.cstat[1], VAR_8.cstat[2], VAR_8.cstat[3]);
 (void) FUNC_0(VAR_6);
 return (0);
}
