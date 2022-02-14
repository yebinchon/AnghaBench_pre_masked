
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_critnest; scalar_t__ td_oncpu; } ;
struct pcpu {int pc_spinlocks; } ;
struct lock_object {int dummy; } ;
struct lock_instance {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct lock_instance* FUNC_0 (int ,struct lock_object*) ;
 struct pcpu* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct lock_instance*,int (*) (char const*)) ;

void
FUNC_3(struct lock_object *VAR_1, struct thread *VAR_2,
    int (*VAR_3)(const char *VAR_4, ...))
{
 struct lock_instance *VAR_5;
 struct pcpu *VAR_6;

 if (VAR_2->td_critnest == 0 || VAR_2->td_oncpu == VAR_0)
  return;
 VAR_6 = FUNC_1(VAR_2->td_oncpu);
 VAR_5 = FUNC_0(VAR_6->pc_spinlocks, VAR_1);
 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5, VAR_3);
}
