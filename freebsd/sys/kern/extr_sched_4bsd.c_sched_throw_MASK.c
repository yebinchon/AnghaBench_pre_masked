
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int td_oncpu; int td_lastcpu; TYPE_2__* td_lock; } ;
struct TYPE_6__ {int md_spinlock_count; } ;
struct TYPE_8__ {TYPE_1__ td_md; } ;
struct TYPE_7__ {int lock_object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 () ;
 TYPE_5__* VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_10(struct thread *VAR_7)
{
 if (VAR_7 == ((void*)0)) {
  FUNC_8(&VAR_3);
  FUNC_9();
  FUNC_2(VAR_5, FUNC_5());
  FUNC_2(VAR_4, VAR_6);
 } else {
  FUNC_6(&VAR_3.lock_object);
  FUNC_1(VAR_7->td_lock == &VAR_3);
  VAR_7->td_lastcpu = VAR_7->td_oncpu;
  VAR_7->td_oncpu = VAR_1;
 }
 FUNC_7(&VAR_3, VAR_0);
 FUNC_0(VAR_2->td_md.md_spinlock_count == 1, ("invalid count"));
 FUNC_4(VAR_7, FUNC_3());
}
