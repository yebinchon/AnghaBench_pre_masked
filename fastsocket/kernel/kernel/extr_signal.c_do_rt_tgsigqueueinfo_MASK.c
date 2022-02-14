
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ si_code; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 long FUNC_1 (scalar_t__,scalar_t__,int,TYPE_1__*) ;

long FUNC_2(pid_t VAR_3, pid_t VAR_4, int VAR_5, siginfo_t *VAR_6)
{

 if (VAR_4 <= 0 || VAR_3 <= 0)
  return -VAR_0;




 if (VAR_6->si_code >= 0 || VAR_6->si_code == VAR_2) {

  FUNC_0(VAR_6->si_code < 0);
  return -VAR_1;
 }
 VAR_6->si_signo = VAR_5;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
