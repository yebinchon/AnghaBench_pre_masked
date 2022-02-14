
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

void
FUNC_6(char *VAR_1, char *VAR_2)
{
 struct stat VAR_3;

 FUNC_0("rename", VAR_1, VAR_2);

 if (VAR_0 && (FUNC_5(VAR_2, &VAR_3) == 0)) {
  FUNC_4(550, "%s: permission denied.", VAR_2);
  return;
 }

 if (FUNC_3(VAR_1, VAR_2) < 0)
  FUNC_2(550, "rename");
 else
  FUNC_1("RNTO");
}
