
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ md_stack_base; } ;
struct thread {int td_kstack_pages; scalar_t__ td_kstack; TYPE_1__ td_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

void
FUNC_1(struct thread *VAR_3)
{
 VAR_3->td_md.md_stack_base = VAR_3->td_kstack +
     VAR_3->td_kstack_pages * VAR_0 -
     FUNC_0(VAR_2, VAR_1);
}
