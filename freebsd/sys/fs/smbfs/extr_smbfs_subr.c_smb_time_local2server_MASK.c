
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct timespec {scalar_t__ tv_sec; } ;



void
FUNC_0(struct timespec *VAR_0, int VAR_1, u_long *VAR_2)
{
 *VAR_2 = VAR_0->tv_sec - VAR_1 * 60 ;

}
