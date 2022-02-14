
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ md_spinlock_count; int md_saved_flags; } ;
struct thread {TYPE_1__ td_md; } ;
typedef int register_t ;


 int FUNC_0 () ;
 struct thread* VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2(void)
{
 struct thread *VAR_1;
 register_t VAR_2;

 VAR_1 = VAR_0;
 FUNC_0();
 VAR_2 = VAR_1->td_md.md_saved_flags;
 VAR_1->td_md.md_spinlock_count--;
 if (VAR_1->td_md.md_spinlock_count == 0)
  FUNC_1(VAR_2);
}
