
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,char*,char const*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,struct stat*) ;

int
FUNC_6(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 struct stat VAR_4;
 int VAR_5;




 FUNC_1(VAR_0, VAR_1);
 VAR_5 = FUNC_5(VAR_2, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_3(VAR_0, VAR_1, "Dir should exist: %s", VAR_2);
  FUNC_2(((void*)0));
  return (0);
 }
 if (!FUNC_0(VAR_4.st_mode)) {
  FUNC_3(VAR_0, VAR_1, "%s is not a dir", VAR_2);
  FUNC_2(((void*)0));
  return (0);
 }




 if (VAR_3 >= 0 && (mode_t)VAR_3 != (VAR_4.st_mode & 07777)) {
  FUNC_3(VAR_0, VAR_1, "Dir %s has wrong mode", VAR_2);
  FUNC_4("  Expected: 0%3o\n", VAR_3);
  FUNC_4("  Found: 0%3o\n", VAR_4.st_mode & 07777);
  FUNC_2(((void*)0));
  return (0);
 }

 return (1);
}
