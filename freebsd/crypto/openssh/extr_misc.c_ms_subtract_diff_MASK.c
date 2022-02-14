
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct timeval*,struct timeval*,struct timeval*) ;

void
FUNC_2(struct timeval *VAR_0, int *VAR_1)
{
 struct timeval VAR_2, VAR_3;

 FUNC_0(&VAR_3);
 FUNC_1(&VAR_3, VAR_0, &VAR_2);
 *VAR_1 -= (VAR_2.tv_sec * 1000) + (VAR_2.tv_usec / 1000);
}
