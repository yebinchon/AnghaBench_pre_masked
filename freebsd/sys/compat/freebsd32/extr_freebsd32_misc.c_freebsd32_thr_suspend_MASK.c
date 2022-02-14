
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec32 {int tv_nsec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct thread {int dummy; } ;
struct freebsd32_thr_suspend_args {int * timeout; } ;


 int FUNC_0 (void const*,void*,int) ;
 int FUNC_1 (struct thread*,struct timespec*) ;

int
FUNC_2(struct thread *VAR_0, struct freebsd32_thr_suspend_args *VAR_1)
{
 struct timespec32 VAR_2;
 struct timespec VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_4 = ((void*)0);
 if (VAR_1->timeout != ((void*)0)) {
  VAR_5 = FUNC_0((const void *)VAR_1->timeout, (void *)&VAR_2,
      sizeof(struct timespec32));
  if (VAR_5 != 0)
   return (VAR_5);
  VAR_3.tv_sec = VAR_2;
  VAR_3.tv_nsec = VAR_2;
  VAR_4 = &VAR_3;
 }
 return (FUNC_1(VAR_0, VAR_4));
}
