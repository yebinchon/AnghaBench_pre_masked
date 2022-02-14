
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct sigaction*,int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int VAR_3 ;

void
FUNC_6 (sigset_t *VAR_4)
{
  struct sigaction VAR_5;
  int VAR_6, VAR_7;

  FUNC_4 (VAR_4);

  VAR_6 = FUNC_0 ("__pthread_sig_restart");
  if (VAR_6 == 0)
    return;

  VAR_7 = FUNC_0 ("__pthread_sig_cancel");
  if (VAR_7 == 0)
    return;

  FUNC_2 (VAR_4, VAR_6);
  FUNC_2 (VAR_4, VAR_7);







  VAR_5.sa_handler = VAR_2;
  FUNC_4 (&VAR_5.sa_mask);
  VAR_5.sa_flags = 0;
  FUNC_1 (VAR_7, &VAR_5, ((void*)0));


  FUNC_2 (&VAR_1, VAR_7);
  FUNC_5 (VAR_0, &VAR_1, ((void*)0));


  FUNC_3 (&VAR_3, VAR_7);
}
