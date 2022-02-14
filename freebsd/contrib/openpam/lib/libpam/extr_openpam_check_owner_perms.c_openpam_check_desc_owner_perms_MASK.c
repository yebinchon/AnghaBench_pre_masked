
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,char const*) ;

int
FUNC_4(const char *VAR_6, int VAR_7)
{
 uid_t VAR_8, VAR_9;
 struct stat VAR_10;
 int VAR_11;

 VAR_8 = 0;
 VAR_9 = FUNC_2();
 if (FUNC_1(VAR_7, &VAR_10) != 0) {
  VAR_11 = VAR_5;
  FUNC_3(VAR_2, "%s: %m", VAR_6);
  VAR_5 = VAR_11;
  return (-1);
 }
 if (!FUNC_0(VAR_10.st_mode)) {
  FUNC_3(VAR_2,
      "%s: not a regular file", VAR_6);
  VAR_5 = VAR_0;
  return (-1);
 }
 if ((VAR_10.st_uid != VAR_8 && VAR_10.st_uid != VAR_9) ||
     (VAR_10.st_mode & (VAR_3|VAR_4)) != 0) {
  FUNC_3(VAR_2,
      "%s: insecure ownership or permissions", VAR_6);
  VAR_5 = VAR_1;
  return (-1);
 }
 return (0);
}
