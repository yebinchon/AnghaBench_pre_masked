
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; scalar_t__ vdev_ishole; struct TYPE_4__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint_t ;
typedef size_t uint64_t ;
struct TYPE_5__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t*,int) ;
 scalar_t__ FUNC_3 (int *,int ,size_t) ;
 scalar_t__ FUNC_4 (int *,int ,size_t*,size_t) ;

void
FUNC_5(spa_t *VAR_3, nvlist_t *VAR_4)
{
 vdev_t *VAR_5 = VAR_3->spa_root_vdev;
 uint64_t *VAR_6;
 uint_t VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5->vdev_children * sizeof (uint64_t), VAR_0);

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_5->vdev_children; VAR_7++) {
  vdev_t *VAR_9 = VAR_5->vdev_child[VAR_7];

  if (VAR_9->vdev_ishole) {
   VAR_6[VAR_8++] = VAR_7;
  }
 }

 if (VAR_8) {
  FUNC_0(FUNC_4(VAR_4, VAR_1,
      VAR_6, VAR_8) == 0);
 }

 FUNC_0(FUNC_3(VAR_4, VAR_2,
     VAR_5->vdev_children) == 0);

 FUNC_2(VAR_6, VAR_5->vdev_children * sizeof (uint64_t));
}
