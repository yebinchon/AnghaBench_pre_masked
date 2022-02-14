
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_7__ {int ms_lock; int ms_selected_txg; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
struct TYPE_6__ {int mg_lock; TYPE_1__* mg_vd; } ;
struct TYPE_5__ {int * vdev_spa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0)
{
 metaslab_t *VAR_1 = VAR_0;
 spa_t *VAR_2 = VAR_1->ms_group->mg_vd->vdev_spa;

 FUNC_0(!FUNC_1(&VAR_1->ms_group->mg_lock));

 FUNC_3(&VAR_1->ms_lock);
 (void) FUNC_2(VAR_1);
 VAR_1->ms_selected_txg = FUNC_5(VAR_2);
 FUNC_4(&VAR_1->ms_lock);
}
