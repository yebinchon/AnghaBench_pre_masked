
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct thread {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct thread*,int ) ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2, struct timeval *VAR_3, struct timeval *VAR_4)
{
 struct timeval VAR_5;
 int64_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3 != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_2, VAR_0);
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_7 = (int64_t)VAR_3->tv_sec * 1000000 + VAR_3->tv_usec;
 }
 FUNC_0();
 VAR_6 = VAR_1;
 if (VAR_3 != ((void*)0))
  VAR_1 = VAR_7;
 FUNC_1();
 if (VAR_4 != ((void*)0)) {
  VAR_5.tv_sec = VAR_6 / 1000000;
  VAR_5.tv_usec = VAR_6 % 1000000;
  if (VAR_5.tv_usec < 0) {
   VAR_5.tv_usec += 1000000;
   VAR_5.tv_sec--;
  }
  *VAR_4 = VAR_5;
 }
 return (0);
}
