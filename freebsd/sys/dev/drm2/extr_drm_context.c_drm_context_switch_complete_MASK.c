
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {TYPE_3__* master; } ;
struct drm_device {int last_context; int context_wait; int context_flag; int last_switch; } ;
struct TYPE_5__ {TYPE_1__* hw_lock; } ;
struct TYPE_6__ {TYPE_2__ lock; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1,
           struct drm_file *VAR_2, int VAR_3)
{
 VAR_1->last_context = VAR_3;
 VAR_1->last_switch = VAR_0;

 if (!FUNC_1(VAR_2->master->lock.hw_lock->lock)) {
  FUNC_0("Lock isn't held after context switch\n");
 }




 FUNC_2(0, &VAR_1->context_flag);
 FUNC_3(&VAR_1->context_wait);

 return 0;
}
