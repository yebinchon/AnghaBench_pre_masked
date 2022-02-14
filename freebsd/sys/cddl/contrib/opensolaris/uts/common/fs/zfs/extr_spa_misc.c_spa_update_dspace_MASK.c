
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ vs_space; scalar_t__ vs_dspace; } ;
struct TYPE_15__ {TYPE_1__ vdev_stat; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_16__ {scalar_t__ spa_dspace; TYPE_2__* spa_vdev_removal; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_14__ {int svr_vdev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int ) ;

void
FUNC_7(spa_t *VAR_3)
{
 VAR_3->spa_dspace = FUNC_1(FUNC_5(VAR_3)) +
     FUNC_0(VAR_3);
 if (VAR_3->spa_vdev_removal != ((void*)0)) {
  FUNC_2(VAR_3, VAR_2, VAR_0, VAR_1);
  vdev_t *VAR_4 =
      FUNC_6(VAR_3, VAR_3->spa_vdev_removal->svr_vdev_id);
  VAR_3->spa_dspace -= FUNC_4(VAR_3) ?
      VAR_4->vdev_stat.vs_dspace : VAR_4->vdev_stat.vs_space;
  FUNC_3(VAR_3, VAR_2, VAR_0);
 }
}
