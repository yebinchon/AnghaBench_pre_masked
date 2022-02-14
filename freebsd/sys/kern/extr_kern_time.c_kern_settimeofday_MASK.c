
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct thread*,struct timeval*) ;

int
FUNC_2(struct thread *VAR_2, struct timeval *VAR_3, struct timezone *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1);
 if (VAR_5)
  return (VAR_5);

 if (VAR_3) {
  if (VAR_3->tv_usec < 0 || VAR_3->tv_usec >= 1000000 ||
      VAR_3->tv_sec < 0)
   return (VAR_0);
  VAR_5 = FUNC_1(VAR_2, VAR_3);
 }
 return (VAR_5);
}
