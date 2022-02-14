
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*) ;

void
FUNC_7(char *VAR_0)
{
 struct stat VAR_1;

 FUNC_0("delete", VAR_0);
 if (FUNC_5(VAR_0, &VAR_1) < 0) {
  FUNC_3(550, VAR_0);
  return;
 }
 if (FUNC_1(VAR_1.st_mode)) {
  if (FUNC_4(VAR_0) < 0) {
   FUNC_3(550, VAR_0);
   return;
  }
  goto done;
 }
 if (FUNC_6(VAR_0) < 0) {
  FUNC_3(550, VAR_0);
  return;
 }
done:
 FUNC_2("DELE");
}
