
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int td_oncpu; int td_lastcpu; TYPE_3__* td_lock; } ;
struct tdq {int dummy; } ;
struct TYPE_6__ {uintptr_t mtx_lock; int lock_object; } ;
struct TYPE_4__ {int md_spinlock_count; } ;
struct TYPE_5__ {TYPE_1__ td_md; } ;


 int FUNC_0 (struct tdq*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tdq*) ;
 TYPE_3__* FUNC_5 (struct tdq*) ;
 struct tdq* FUNC_6 () ;
 struct thread* FUNC_7 () ;
 int FUNC_8 (struct thread*,struct thread*) ;
 int FUNC_9 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct tdq*,struct thread*) ;
 int VAR_5 ;

void
FUNC_13(struct thread *VAR_6)
{
 struct thread *VAR_7;
 struct tdq *VAR_8;

 if (VAR_6 == ((void*)0)) {




  VAR_8 = FUNC_6();
  FUNC_4(VAR_8);
  FUNC_11();
  FUNC_3(VAR_4, FUNC_9());
  FUNC_3(VAR_3, VAR_5);
 } else {
  VAR_8 = FUNC_6();
  FUNC_2(VAR_6->td_lock == FUNC_5(VAR_8));
  FUNC_12(VAR_8, VAR_6);
  FUNC_10(&FUNC_5(VAR_8)->lock_object);
  VAR_6->td_lastcpu = VAR_6->td_oncpu;
  VAR_6->td_oncpu = VAR_0;
 }
 FUNC_1(VAR_1->td_md.md_spinlock_count == 1, ("invalid count"));
 VAR_7 = FUNC_7();
 FUNC_5(VAR_8)->mtx_lock = (uintptr_t)VAR_7;
 FUNC_8(VAR_6, VAR_7);
}
