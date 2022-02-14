
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {unsigned long tv_sec; scalar_t__ tv_nsec; } ;


 int FUNC_0 (struct timespec*) ;

uint64_t
FUNC_1(void)
{
 struct timespec VAR_0;

 FUNC_0(&VAR_0);

 return (VAR_0.tv_sec * 1000000000UL + VAR_0.tv_nsec);
}
