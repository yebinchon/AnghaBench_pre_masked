
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ td_priority; } ;
struct TYPE_2__ {scalar_t__ td_priority; int td_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_3)
{

 FUNC_0(VAR_3, VAR_0);
 if (VAR_3->td_priority < VAR_2->td_priority)
  VAR_2->td_flags |= VAR_1;
}
