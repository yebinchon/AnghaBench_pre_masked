
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stat {scalar_t__ st_uid; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(int VAR_2, const char *VAR_3)
{
 struct stat VAR_4;

 if (FUNC_2(VAR_2, &VAR_4) < 0)
  return VAR_1;
 if ((VAR_4.st_uid == FUNC_3()) && (VAR_4.st_mode & 077) != 0) {
  FUNC_1("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  FUNC_1("@         WARNING: UNPROTECTED PRIVATE KEY FILE!          @");
  FUNC_1("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
  FUNC_1("Permissions 0%3.3o for '%s' are too open.",
      (u_int)VAR_4.st_mode & 0777, VAR_3);
  FUNC_1("It is required that your private key files are NOT accessible by others.");
  FUNC_1("This private key will be ignored.");
  return VAR_0;
 }
 return 0;
}
