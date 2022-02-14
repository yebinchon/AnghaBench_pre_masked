
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; } ;
typedef scalar_t__ sig_t ;


 int FUNC_0 (int,struct sigaction*,struct sigaction*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, sig_t *VAR_1)
{
 struct sigaction VAR_2;

 if (FUNC_0(VAR_0, (struct sigaction *)0, &VAR_2) == -1)
  return 0;
 *VAR_1 = (sig_t) VAR_2.sa_handler;
 return 1;
}
