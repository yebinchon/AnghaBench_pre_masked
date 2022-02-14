
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; } ;
struct rusage {int dummy; } ;
typedef int sigset_t ;
typedef int pid_t ;
typedef int ign ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*,int ,struct rusage*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,char*,char*,char const*,char*) ;
 int FUNC_6 (struct sigaction*,int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

int
FUNC_10(const char *VAR_9)
{
 pid_t VAR_10, VAR_11;
 int VAR_12;
 struct sigaction VAR_13, VAR_14, VAR_15;
 sigset_t VAR_16, VAR_17;

 if (!VAR_9)
  return(1);

 (void)FUNC_8(&VAR_16);
 (void)FUNC_7(&VAR_16, VAR_1);
 (void)FUNC_7(&VAR_16, VAR_2);
 (void)FUNC_7(&VAR_16, VAR_3);
 (void)FUNC_1(VAR_4, &VAR_16, &VAR_17);
 switch(VAR_10 = FUNC_9()) {




 case -1:
  (void)FUNC_1(VAR_6, &VAR_17, ((void*)0));
  return (-1);
 case 0:



  (void)FUNC_2(VAR_6, &VAR_17, ((void*)0));
  FUNC_5(VAR_7, "sh", "-c", VAR_9, (char *)((void*)0));
  FUNC_3(127);
 }






 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.sa_handler = VAR_5;
 (void)FUNC_8(&VAR_13.sa_mask);
 (void)FUNC_0(VAR_2, &VAR_13, &VAR_14);
 (void)FUNC_0(VAR_3, &VAR_13, &VAR_15);
 VAR_11 = VAR_10;
 do {
  VAR_10 = FUNC_4(VAR_11, &VAR_12, 0, (struct rusage *)0);
 } while (VAR_10 == -1 && VAR_8 == VAR_0);
 (void)FUNC_0(VAR_2, &VAR_14, ((void*)0));
 (void)FUNC_0(VAR_3, &VAR_15, ((void*)0));
 (void)FUNC_1(VAR_6, &VAR_17, ((void*)0));
 return (VAR_10 == -1 ? -1 : VAR_12);
}
