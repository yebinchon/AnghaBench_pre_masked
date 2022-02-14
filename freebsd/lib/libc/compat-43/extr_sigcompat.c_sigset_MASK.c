
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;} ;
typedef int sigset_t ;
typedef int sa ;
typedef void (* __sighandler_t ) (int) ;


 int VAR_0 ;
 void FUNC_0 (int) ;
 void FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct sigaction*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;

void
(*FUNC_8(int VAR_2, void (*VAR_3)(int)))(int)
{
 sigset_t VAR_4, VAR_5;
 struct sigaction VAR_6, VAR_7;

 FUNC_6(&VAR_4);
 if (FUNC_5(&VAR_4, VAR_2) == -1)
  return (FUNC_0);
 if (FUNC_3(VAR_0, ((void*)0), &VAR_5) == -1)
  return (FUNC_0);
 if ((__sighandler_t *)VAR_3 == FUNC_1) {
  if (FUNC_3(VAR_0, &VAR_4, &VAR_5) == -1)
   return (FUNC_0);
  if (FUNC_7(&VAR_5, VAR_2))
   return (FUNC_1);
  else {
   if (FUNC_2(VAR_2, ((void*)0), &VAR_7) == -1)
    return (FUNC_0);
   return (VAR_7.sa_handler);
  }
 } else {
  if (FUNC_3(VAR_1, &VAR_4, &VAR_5) == -1)
   return (FUNC_0);
 }

 FUNC_4(&VAR_6, sizeof(VAR_6));
 VAR_6.sa_handler = VAR_3;
 if (FUNC_2(VAR_2, &VAR_6, &VAR_7) == -1)
  return (FUNC_0);
 if (FUNC_7(&VAR_5, VAR_2))
  return (FUNC_1);
 else
  return (VAR_7.sa_handler);
}
