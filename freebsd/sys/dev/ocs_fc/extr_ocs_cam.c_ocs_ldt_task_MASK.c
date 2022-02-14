
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ attached; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {int ldt; TYPE_3__* tgt; TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_fcport ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ gone_timer; scalar_t__ is_target; } ;
typedef TYPE_3__ ocs_fc_target_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, int VAR_6)
{
 ocs_fcport *VAR_7 = VAR_5;
 ocs_t *VAR_8 = VAR_7->ocs;
 int VAR_9, VAR_10 = 0;
 ocs_fc_target_t *VAR_11 = ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_11 = &VAR_7->tgt[VAR_9];

  if (VAR_11->state != VAR_1) {
   continue;
  }

  if ((VAR_11->gone_timer != 0) && (VAR_8->attached)){
   VAR_11->gone_timer -= 1;
   VAR_10++;
   continue;
  }

  if (VAR_11->is_target) {
   VAR_11->is_target = 0;
   FUNC_2(VAR_8, VAR_7, VAR_9);
  }

  VAR_11->state = VAR_2;
 }

 if (VAR_10) {
  FUNC_1(&VAR_7->ldt, VAR_3, VAR_4, VAR_7);
 } else {
  FUNC_0(&VAR_7->ldt);
 }

}
