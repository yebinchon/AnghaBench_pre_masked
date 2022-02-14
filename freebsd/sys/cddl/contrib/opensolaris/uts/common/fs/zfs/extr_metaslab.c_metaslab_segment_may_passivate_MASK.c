
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_9__ {int ms_activation_weight; int ms_weight; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
struct TYPE_8__ {TYPE_1__* mg_vd; } ;
struct TYPE_7__ {int * vdev_spa; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void
FUNC_5(metaslab_t *VAR_1)
{
 spa_t *VAR_2 = VAR_1->ms_group->mg_vd->vdev_spa;

 if (FUNC_1(VAR_1->ms_weight) || FUNC_4(VAR_2) > 1)
  return;






 uint64_t VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_0(VAR_1->ms_activation_weight);
 int VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 <= VAR_4 - VAR_0)
  FUNC_2(VAR_1, VAR_3);
}
