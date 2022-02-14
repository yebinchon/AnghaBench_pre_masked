
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_tid; } ;
struct thr_self_args {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

int
FUNC_1(struct thread *VAR_1, struct thr_self_args *VAR_2)

{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->id, (unsigned)VAR_1->td_tid);
 if (VAR_3 == -1)
  return (VAR_0);
 return (0);
}
