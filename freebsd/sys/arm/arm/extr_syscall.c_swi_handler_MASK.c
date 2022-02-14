
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_spsr; } ;
struct TYPE_2__ {scalar_t__ md_spinlock_count; } ;
struct thread {TYPE_1__ td_md; scalar_t__ td_pticks; struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct thread* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct thread*,struct trapframe*) ;

void
FUNC_3(struct trapframe *VAR_3)
{
 struct thread *VAR_4 = VAR_2;

 VAR_4->td_frame = VAR_3;

 VAR_4->td_pticks = 0;






 if (VAR_4->td_md.md_spinlock_count == 0) {
  if (FUNC_0(VAR_3->tf_spsr & VAR_1) == 0)
   FUNC_1(VAR_1);
  if (FUNC_0(VAR_3->tf_spsr & VAR_0) == 0)
   FUNC_1(VAR_0);
 }

 FUNC_2(VAR_4, VAR_3);
}
