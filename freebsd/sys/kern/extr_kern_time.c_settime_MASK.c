
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct thread {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct timespec*) ;
 int FUNC_5 (struct timeval*,struct timeval*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_1, struct timeval *VAR_2)
{
 struct timeval VAR_3, VAR_4, VAR_5;
 static struct timeval VAR_6, VAR_7;
 struct timespec VAR_8;

 FUNC_0(&VAR_4);
 VAR_3 = *VAR_2;
 FUNC_5(&VAR_3, &VAR_4);
 if (FUNC_3(VAR_1->td_ucred, 1) != 0) {
  if (VAR_3.tv_sec < 0 || VAR_3.tv_usec < 0) {



   if (VAR_4 > VAR_6.tv_sec)
    VAR_6 = VAR_4;
   VAR_5 = *VAR_2;
   FUNC_5(&VAR_5, &VAR_6);
   if (VAR_5 < -1) {
    VAR_2->tv_sec = VAR_6.tv_sec - 1;
    FUNC_1("Time adjustment clamped to -1 second\n");
   }
  } else {
   if (VAR_4 == VAR_7.tv_sec)
    return (VAR_0);
   if (VAR_3.tv_sec > 1) {
    VAR_2->tv_sec = VAR_4 + 1;
    FUNC_1("Time adjustment clamped to +1 second\n");
   }
   VAR_7 = *VAR_2;
  }
 }

 VAR_8.tv_sec = VAR_2->tv_sec;
 VAR_8.tv_nsec = VAR_2->tv_usec * 1000;
 FUNC_4(&VAR_8);
 FUNC_2();
 return (0);
}
