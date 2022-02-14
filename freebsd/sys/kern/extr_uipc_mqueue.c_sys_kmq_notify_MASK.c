
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigevent {int dummy; } ;
struct kmq_notify_args {int mqd; int * sigev; } ;
typedef int ev ;


 int FUNC_0 (int *,struct sigevent*,int) ;
 int FUNC_1 (struct thread*,int ,struct sigevent*) ;

int
FUNC_2(struct thread *VAR_0, struct kmq_notify_args *VAR_1)
{
 struct sigevent VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_1->sigev == ((void*)0)) {
  VAR_3 = ((void*)0);
 } else {
  VAR_4 = FUNC_0(VAR_1->sigev, &VAR_2, sizeof(VAR_2));
  if (VAR_4 != 0)
   return (VAR_4);
  VAR_3 = &VAR_2;
 }
 return (FUNC_1(VAR_0, VAR_1->mqd, VAR_3));
}
