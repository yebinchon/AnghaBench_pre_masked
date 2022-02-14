
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int siginfo_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int const*,int *) ;

int
FUNC_1(const sigset_t * __restrict VAR_2, siginfo_t * __restrict VAR_3)
{

 return (((int (*)(const sigset_t *, siginfo_t *))
     VAR_1[VAR_0])(VAR_2, VAR_3));
}
