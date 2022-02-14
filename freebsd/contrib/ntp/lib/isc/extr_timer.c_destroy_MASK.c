
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mctx; int lock; int timers; } ;
typedef TYPE_2__ isc__timermgr_t ;
struct TYPE_9__ {scalar_t__ magic; scalar_t__ impmagic; } ;
struct TYPE_11__ {TYPE_1__ common; int lock; int task; TYPE_2__* manager; } ;
typedef TYPE_3__ isc__timer_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_3__*,int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(isc__timer_t *VAR_3) {
 isc__timermgr_t *VAR_4 = VAR_3->manager;





 FUNC_1(&VAR_4->lock);

 (void)FUNC_7(VAR_3->task,
      VAR_3,
      VAR_0,
      VAR_1,
      ((void*)0));
 FUNC_4(VAR_3);
 FUNC_2(VAR_4->timers, VAR_3, VAR_2);

 FUNC_3(&VAR_4->lock);

 FUNC_6(&VAR_3->task);
 FUNC_0(&VAR_3->lock);
 VAR_3->common.impmagic = 0;
 VAR_3->common.magic = 0;
 FUNC_5(VAR_4->mctx, VAR_3, sizeof(*VAR_3));
}
