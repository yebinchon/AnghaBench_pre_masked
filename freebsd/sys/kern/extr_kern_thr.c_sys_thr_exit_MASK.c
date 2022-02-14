
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct thr_exit_args {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(struct thread *VAR_1, struct thr_exit_args *VAR_2)

{

 FUNC_3(VAR_1);


 if ((void *)VAR_2->state != ((void*)0)) {
  FUNC_2(VAR_2->state, 1);
  FUNC_1(VAR_1, VAR_2->state, VAR_0, 0);
 }

 return (FUNC_0(VAR_1));
}
