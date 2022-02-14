
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; } ;
struct thread {int dummy; } ;
struct ksem_timedwait_args {int id; int * abstime; } ;
typedef int abstime ;


 int VAR_0 ;
 int FUNC_0 (int *,struct timespec*,int) ;
 int FUNC_1 (struct thread*,int ,int ,struct timespec*) ;

int
FUNC_2(struct thread *VAR_1, struct ksem_timedwait_args *VAR_2)
{
 struct timespec VAR_3;
 struct timespec *VAR_4;
 int VAR_5;




 if (VAR_2->abstime == ((void*)0))
  VAR_4 = ((void*)0);
 else {
  VAR_5 = FUNC_0(VAR_2->abstime, &VAR_3, sizeof(VAR_3));
  if (VAR_5 != 0)
   return (VAR_5);
  if (VAR_3.tv_nsec >= 1000000000 || VAR_3.tv_nsec < 0)
   return (VAR_0);
  VAR_4 = &VAR_3;
 }
 return (FUNC_1(VAR_1, VAR_2->id, 0, VAR_4));
}
