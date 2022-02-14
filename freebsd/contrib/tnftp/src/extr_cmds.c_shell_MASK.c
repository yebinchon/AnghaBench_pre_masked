
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigfunc ;
typedef int shellnam ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (char const*,char*,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ VAR_7 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (char*,char const*,int) ;
 char* FUNC_9 (char const*,char) ;
 int VAR_8 ;
 int FUNC_10 (int*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(int VAR_9, char *VAR_10[])
{
 pid_t VAR_11;
 sigfunc VAR_12;
 char VAR_13[VAR_0];
 const char *VAR_14, *VAR_15;
 int VAR_16;

 if (VAR_9 == 0) {
  FUNC_0("usage: %s [command [args]]\n", VAR_10[0]);
  VAR_6 = -1;
  return;
 }
 VAR_12 = FUNC_12(VAR_1, VAR_3);
 if ((VAR_11 = FUNC_4()) == 0) {
  (void)FUNC_1(3);
  (void)FUNC_12(VAR_1, VAR_2);
  VAR_14 = FUNC_6("SHELL");
  if (VAR_14 == ((void*)0))
   VAR_14 = VAR_4;
  VAR_15 = FUNC_9(VAR_14, '/');
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_14;
  else
   VAR_15++;
  (void)FUNC_8(VAR_13, VAR_15, sizeof(VAR_13));
  if (VAR_7) {
   FUNC_5(VAR_14, VAR_8);
   FUNC_7('\n', VAR_8);
  }
  if (VAR_9 > 1) {
   FUNC_2(VAR_14, VAR_13, "-c", VAR_5, (char *)0);
  }
  else {
   FUNC_2(VAR_14, VAR_13, (char *)0);
  }
  FUNC_11("Can't execute `%s'", VAR_14);
  VAR_6 = -1;
  FUNC_3(1);
 }
 if (VAR_11 > 0)
  while (FUNC_10(&VAR_16) != VAR_11)
   ;
 (void)FUNC_12(VAR_1, VAR_12);
 if (VAR_11 == -1) {
  FUNC_11("Can't fork a subshell; try again later");
  VAR_6 = -1;
 } else
  VAR_6 = 0;
}
