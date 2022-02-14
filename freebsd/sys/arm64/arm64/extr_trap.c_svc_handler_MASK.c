
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_esr; scalar_t__ tf_elr; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int ,void*) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*,struct trapframe*) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_3, struct trapframe *VAR_4)
{

 if ((VAR_4->tf_esr & VAR_0) == 0) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 } else {
  FUNC_0(VAR_3, VAR_2, VAR_1, (void *)VAR_4->tf_elr);
  FUNC_3(VAR_3, VAR_4);
 }
}
