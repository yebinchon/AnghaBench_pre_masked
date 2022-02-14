
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void* sa_sigaction; } ;
typedef int ssize_t ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,char*,int,...) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *,struct sigaction*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;
 int VAR_5 ;

int
FUNC_9(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9 = VAR_1;
 sigset_t VAR_10;
 struct sigaction VAR_11;
 ssize_t VAR_12;
 char VAR_13;

 FUNC_6(&VAR_10);
 if (FUNC_8(0, ((void*)0), &VAR_10) < 0) {
  FUNC_1(VAR_5, "%s: sigprocmask error\n", FUNC_2());
  VAR_9 = VAR_0;
 }
 if (!FUNC_7(&VAR_10, VAR_2)) {
  FUNC_1(VAR_5, "%s: SIGUSR not in procmask\n", FUNC_2());
  VAR_9 = VAR_0;
 }
 if (FUNC_5(VAR_2, ((void*)0), &VAR_11) < 0) {
  FUNC_1(VAR_5, "%s: sigaction error\n", FUNC_2());
  VAR_9 = VAR_0;
 }
 if (VAR_11.sa_sigaction != (void *)VAR_3) {
  FUNC_1(VAR_5, "%s: SIGUSR1 action != SIG_DFL\n",
      FUNC_2());
  VAR_9 = VAR_0;
 }

 if (VAR_6 >= 2) {
  VAR_8 = FUNC_0(VAR_7[1]);
  if (VAR_8 > 2) {
   FUNC_3("%s: waiting for command from parent on pipe "
       "%d\n", FUNC_2(), VAR_8);
   VAR_12 = FUNC_4(VAR_8, &VAR_13, 1);
   if (VAR_12 == 1) {
    FUNC_3("%s: got command %c from parent\n",
        FUNC_2(), VAR_13);
   } else if (VAR_12 == -1) {
    FUNC_3("%s: %d is no pipe, errno %d\n",
        FUNC_2(), VAR_8, VAR_4);
    VAR_9 = VAR_0;
   }
  }
 }

 return VAR_9;
}
