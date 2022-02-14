
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct thr_suspend_args {int * timeout; } ;


 int FUNC_0 (struct thread*,struct timespec*) ;
 int FUNC_1 (int *,struct timespec*) ;

int
FUNC_2(struct thread *VAR_0, struct thr_suspend_args *VAR_1)

{
 struct timespec VAR_2, *VAR_3;
 int VAR_4;

 VAR_3 = ((void*)0);
 if (VAR_1->timeout != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_1->timeout, &VAR_2);
  if (VAR_4 != 0)
   return (VAR_4);
  VAR_3 = &VAR_2;
 }

 return (FUNC_0(VAR_0, VAR_3));
}
