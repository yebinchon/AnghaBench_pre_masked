
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int sigset_t ;
typedef int siginfo_t ;


 int FUNC_0 (int ,int *,struct timespec const*) ;
 int FUNC_1 (int const*,int *) ;

int
FUNC_2(const sigset_t *VAR_0, siginfo_t *VAR_1,
 const struct timespec * VAR_2)
{
 sigset_t VAR_3;

 return (FUNC_0(FUNC_1(VAR_0, &VAR_3), VAR_1,
     VAR_2));
}
