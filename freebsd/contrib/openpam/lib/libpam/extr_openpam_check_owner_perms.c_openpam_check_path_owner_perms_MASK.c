
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(const char *VAR_8)
{
 uid_t VAR_9, VAR_10;
 char VAR_11[VAR_4];
 struct stat VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_15 = 1;
 VAR_9 = 0;
 VAR_10 = FUNC_1();
 if (FUNC_3(VAR_8, VAR_11) == ((void*)0))
  return (-1);
 VAR_13 = FUNC_5(VAR_11);
 while (VAR_13 > 0) {
  if (FUNC_4(VAR_11, &VAR_12) != 0) {
   if (VAR_7 != VAR_1) {
    VAR_14 = VAR_7;
    FUNC_2(VAR_3, "%s: %m", VAR_11);
    VAR_7 = VAR_14;
   }
   return (-1);
  }
  if (VAR_15 && !FUNC_0(VAR_12.st_mode)) {
   FUNC_2(VAR_3,
       "%s: not a regular file", VAR_11);
   VAR_7 = VAR_0;
   return (-1);
  }
  if ((VAR_12.st_uid != VAR_9 && VAR_12.st_uid != VAR_10) ||
      (VAR_12.st_mode & (VAR_5|VAR_6)) != 0) {
   FUNC_2(VAR_3,
       "%s: insecure ownership or permissions", VAR_11);
   VAR_7 = VAR_2;
   return (-1);
  }
  while (--VAR_13 > 0 && VAR_11[VAR_13] != '/')
   VAR_11[VAR_13] = '\0';
  VAR_15 = 0;
 }
 return (0);
}
