
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct timespec {int dummy; } ;
typedef scalar_t__ seconds ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*,int ,int *) ;

void
FUNC_1(struct timespec *VAR_1, int VAR_2, int64_t *VAR_3)
{
 u_long VAR_4;

 FUNC_0(VAR_1, 0, &VAR_4);
 *VAR_3 = (((int64_t)(VAR_4) & ~1) + VAR_0) * (int64_t)10000000;
}
