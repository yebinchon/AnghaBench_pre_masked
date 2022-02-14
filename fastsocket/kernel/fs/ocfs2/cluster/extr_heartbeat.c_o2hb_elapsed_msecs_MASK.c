
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,struct timeval*) ;

__attribute__((used)) static unsigned int FUNC_1(struct timeval *VAR_0,
           struct timeval *VAR_1)
{
 struct timeval VAR_2 = *VAR_1;

 FUNC_0(&VAR_2, VAR_0);

 return VAR_2.tv_sec * 1000 + VAR_2.tv_usec / 1000;
}
