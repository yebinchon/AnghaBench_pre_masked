
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {scalar_t__ tf_elr; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct thread*,struct trapframe*) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_2, struct trapframe *VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, int VAR_6)
{
 if (!VAR_6)
  FUNC_1("Misaligned access from kernel space!");

 FUNC_0(VAR_2, VAR_1, VAR_0, (void *)VAR_3->tf_elr);
 FUNC_2(VAR_2, VAR_3);
}
