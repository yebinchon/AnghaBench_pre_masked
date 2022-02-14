
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int sigset_t ;
typedef int siginfo_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int const*,int *,struct timespec const*) ;

int
FUNC_1(const sigset_t * __restrict VAR_2, siginfo_t * __restrict VAR_3,
    const struct timespec * __restrict VAR_4)
{

 return (((int (*)(const sigset_t *, siginfo_t *,
     const struct timespec *))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
