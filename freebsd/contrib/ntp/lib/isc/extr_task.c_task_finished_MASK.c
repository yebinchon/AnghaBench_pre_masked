
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mctx; int lock; int work_available; int tasks; } ;
typedef TYPE_2__ isc__taskmgr_t ;
struct TYPE_8__ {scalar_t__ magic; scalar_t__ impmagic; } ;
struct TYPE_10__ {scalar_t__ references; scalar_t__ state; TYPE_1__ common; int lock; int on_shutdown; int events; TYPE_2__* manager; } ;
typedef TYPE_3__ isc__task_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,TYPE_3__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_10(isc__task_t *VAR_2) {
 isc__taskmgr_t *VAR_3 = VAR_2->manager;

 FUNC_5(FUNC_2(VAR_2->events));
 FUNC_5(FUNC_2(VAR_2->on_shutdown));
 FUNC_5(VAR_2->references == 0);
 FUNC_5(VAR_2->state == VAR_1);

 FUNC_8("task_finished");

 FUNC_4(&VAR_3->lock);
 FUNC_6(VAR_3->tasks, VAR_2, VAR_0);
 FUNC_7(&VAR_3->lock);

 FUNC_1(&VAR_2->lock);
 VAR_2->common.impmagic = 0;
 VAR_2->common.magic = 0;
 FUNC_9(VAR_3->mctx, VAR_2, sizeof(*VAR_2));
}
