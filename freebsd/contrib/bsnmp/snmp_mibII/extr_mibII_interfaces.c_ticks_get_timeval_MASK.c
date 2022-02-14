
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;


 unsigned long long VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(struct timeval *VAR_1)
{
 uint64_t VAR_2;

 if (VAR_1->tv_sec != 0 || VAR_1->tv_usec != 0) {
  VAR_2 = 100ULL * VAR_1->tv_sec + VAR_1->tv_usec / 10000ULL;
  if (VAR_2 > VAR_0)
   return (VAR_2 - VAR_0);
 }
 return (0);
}
