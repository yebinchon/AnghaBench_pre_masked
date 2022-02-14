
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int md_spinlock_count; int md_saved_cspr; } ;
struct thread {TYPE_1__ td_md; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct thread* VAR_2 ;
 int FUNC_1 (int) ;

void
FUNC_2(void)
{
 struct thread *VAR_3;
 register_t VAR_4;

 VAR_3 = VAR_2;
 if (VAR_3->td_md.md_spinlock_count == 0) {
  VAR_4 = FUNC_1(VAR_1 | VAR_0);
  VAR_3->td_md.md_spinlock_count = 1;
  VAR_3->td_md.md_saved_cspr = VAR_4;
 } else
  VAR_3->td_md.md_spinlock_count++;
 FUNC_0();
}
