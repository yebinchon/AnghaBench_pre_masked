
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int tv_nsec; unsigned long long tv_sec; } ;
struct thread {int dummy; } ;
typedef scalar_t__ clockid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int VAR_3 ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct thread*,struct timeval*) ;
 unsigned long long FUNC_3 () ;

int
FUNC_4(struct thread *VAR_4, clockid_t VAR_5, struct timespec *VAR_6)
{
 struct timeval VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_1(VAR_4, VAR_2)) != 0)
  return (VAR_8);
 if (VAR_5 != VAR_0)
  return (VAR_1);
 if (VAR_6->tv_nsec < 0 || VAR_6->tv_nsec >= 1000000000 ||
     VAR_6->tv_sec < 0)
  return (VAR_1);
 if (!VAR_3 &&
     (VAR_6->tv_sec > 8000ULL * 365 * 24 * 60 * 60 ||
     VAR_6->tv_sec < FUNC_3()))
  return (VAR_1);

 FUNC_0(&VAR_7, VAR_6);
 VAR_8 = FUNC_2(VAR_4, &VAR_7);
 return (VAR_8);
}
