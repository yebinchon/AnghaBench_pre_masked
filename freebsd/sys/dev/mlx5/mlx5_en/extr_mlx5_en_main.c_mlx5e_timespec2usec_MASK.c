
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;



__attribute__((used)) static uint64_t
FUNC_0(const struct timespec *VAR_0)
{

 return ((uint64_t)VAR_0->tv_sec * 1000000000 + VAR_0->tv_nsec);
}
