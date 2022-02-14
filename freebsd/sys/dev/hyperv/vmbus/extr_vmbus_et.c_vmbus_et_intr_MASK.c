
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {int td_intr_nesting_level; struct trapframe* td_intr_frame; } ;
struct TYPE_3__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_1 ;

void
FUNC_1(struct trapframe *VAR_2)
{
 struct trapframe *VAR_3;
 struct thread *VAR_4;

 if (VAR_1.et_active) {
  VAR_4 = VAR_0;
  VAR_4->td_intr_nesting_level++;
  VAR_3 = VAR_4->td_intr_frame;
  VAR_4->td_intr_frame = VAR_2;
  VAR_1.et_event_cb(&VAR_1, VAR_1.et_arg);
  VAR_4->td_intr_frame = VAR_3;
  VAR_4->td_intr_nesting_level--;
 }
}
