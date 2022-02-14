
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

int
FUNC_1(int VAR_0)
{
 struct timeval VAR_1;

 VAR_1.tv_sec = VAR_0 / 1000;
 VAR_1.tv_usec = 1000 * (VAR_0 % 1000);

 return FUNC_0(&VAR_1);
}
