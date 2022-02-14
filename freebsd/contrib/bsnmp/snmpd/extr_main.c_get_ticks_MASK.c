
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;

uint64_t
FUNC_2(void)
{
 struct timeval VAR_0;
 uint64_t VAR_1;

 if (FUNC_1(&VAR_0, ((void*)0)))
  FUNC_0();
 VAR_1 = VAR_0.tv_sec * 100ULL + VAR_0.tv_usec / 10000ULL;
 return (VAR_1);
}
