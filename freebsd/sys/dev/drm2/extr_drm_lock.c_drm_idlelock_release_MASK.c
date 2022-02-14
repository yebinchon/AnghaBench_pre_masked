
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_lock_data {scalar_t__ kernel_waiters; int spinlock; scalar_t__ idle_has_lock; int lock_queue; TYPE_1__* hw_lock; } ;
struct TYPE_2__ {unsigned int lock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int volatile*,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_lock_data *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 volatile unsigned int *VAR_4 = &VAR_1->hw_lock->lock;

 FUNC_1(&VAR_1->spinlock);
 if (--VAR_1->kernel_waiters == 0) {
  if (VAR_1->idle_has_lock) {
   do {
    VAR_2 = *VAR_4;
    VAR_3 = FUNC_0(VAR_4, VAR_2, VAR_0);
   } while (VAR_3 != VAR_2);
   FUNC_3(&VAR_1->lock_queue);
   VAR_1->idle_has_lock = 0;
  }
 }
 FUNC_2(&VAR_1->spinlock);
}
