
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;


 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct timespec *VAR_0, struct timespec *VAR_1)
{
 struct timeval VAR_2;

 FUNC_0(&VAR_2, VAR_0);
 VAR_1->tv_sec = FUNC_1(VAR_0->tv_sec);
 VAR_1->tv_nsec = 0;

 return 0;
}
