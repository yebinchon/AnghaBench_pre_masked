
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;

void
FUNC_8(char *VAR_2)
{
 struct stat VAR_3;

 FUNC_0("delete", VAR_2);
 if (FUNC_3(VAR_2, &VAR_3) < 0) {
  FUNC_4(550, VAR_2);
  return;
 }
 if (FUNC_1(VAR_3.st_mode)) {
  if (FUNC_6(VAR_2) < 0) {
   FUNC_4(550, VAR_2);
   return;
  }
  goto done;
 }
 if (VAR_0 && VAR_1) {
  FUNC_5(550, "Operation not permitted.");
  return;
 }
 if (FUNC_7(VAR_2) < 0) {
  FUNC_4(550, VAR_2);
  return;
 }
done:
 FUNC_2("DELE");
}
