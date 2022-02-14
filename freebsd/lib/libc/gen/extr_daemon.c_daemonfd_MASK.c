
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_handler; int sa_mask; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

int
FUNC_7(int VAR_6, int VAR_7)
{
 struct sigaction VAR_8, VAR_9;
 pid_t VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_6(&VAR_9.sa_mask);
 VAR_9.sa_handler = VAR_1;
 VAR_9.sa_flags = 0;
 VAR_12 = FUNC_0(VAR_0, &VAR_9, &VAR_8);

 switch (FUNC_4()) {
 case -1:
  return (-1);
 case 0:
  break;
 default:




  FUNC_2(0);
 }

 VAR_10 = FUNC_5();
 VAR_11 = VAR_5;
 if (VAR_12 != -1)
  FUNC_0(VAR_0, &VAR_8, ((void*)0));

 if (VAR_10 == -1) {
  VAR_5 = VAR_11;
  return (-1);
 }

 if (VAR_6 != -1)
  (void)FUNC_3(VAR_6);

 if (VAR_7 != -1) {
  (void)FUNC_1(VAR_7, VAR_3);
  (void)FUNC_1(VAR_7, VAR_4);
  (void)FUNC_1(VAR_7, VAR_2);
 }
 return (0);
}
