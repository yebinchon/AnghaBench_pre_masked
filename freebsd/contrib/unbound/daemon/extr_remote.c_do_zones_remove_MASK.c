
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
typedef int buf ;
typedef int RES ;


 int FUNC_0 (int *,struct local_zones*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(RES* VAR_0, struct local_zones* VAR_1)
{
 char VAR_2[2048];
 int VAR_3 = 0;
 while(FUNC_2(VAR_0, VAR_2, sizeof(VAR_2))) {
  if(VAR_2[0] == 0x04 && VAR_2[1] == 0)
   break;
  if(!FUNC_0(VAR_0, VAR_1, VAR_2)) {
   if(!FUNC_1(VAR_0, "error for input line: %s\n", VAR_2))
    return;
  }
  else
   VAR_3++;
 }
 (void)FUNC_1(VAR_0, "removed %d zones\n", VAR_3);
}
