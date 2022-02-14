
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*,char const*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int*,int ) ;

int
FUNC_7(pid_t VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7)
{
 int VAR_8;

 while (FUNC_6(VAR_4, &VAR_8, 0) == -1) {
  if (VAR_3 != VAR_0) {
   FUNC_4("%s: waitpid: %s", VAR_5, FUNC_5(VAR_3));
   return -1;
  }
 }
 if (FUNC_1(VAR_8)) {
  FUNC_4("%s %s exited on signal %d", VAR_5, VAR_6, FUNC_2(VAR_8));
  return -1;
 } else if (FUNC_0(VAR_8) != 0) {
  FUNC_3(VAR_7 ? VAR_1 : VAR_2,
      "%s %s failed, status %d", VAR_5, VAR_6, FUNC_0(VAR_8));
  return -1;
 }
 return 0;
}
