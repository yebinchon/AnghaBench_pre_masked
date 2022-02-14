
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;
typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,struct sigaction*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

sig_t
FUNC_3(int VAR_3, sig_t VAR_4)
{
 struct sigaction VAR_5, VAR_6;

 VAR_5.sa_handler = VAR_4;
 FUNC_1(&VAR_5.sa_mask);
 VAR_5.sa_flags = 0;
 if (!FUNC_2(&VAR_2, VAR_3))
  VAR_5.sa_flags |= VAR_0;
 if (FUNC_0(VAR_3, &VAR_5, &VAR_6) < 0)
  return (VAR_1);
 return (VAR_6.sa_handler);
}
