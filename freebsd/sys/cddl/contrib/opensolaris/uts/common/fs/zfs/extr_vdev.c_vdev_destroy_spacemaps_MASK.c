
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_asize; int vdev_ms_shift; int vdev_ms_array; TYPE_1__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int * spa_meta_objset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ,size_t,int*,int ) ;
 int* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int*,size_t) ;
 int FUNC_5 (int *,int,int *) ;

void
FUNC_6(vdev_t *VAR_1, dmu_tx_t *VAR_2)
{
 if (VAR_1->vdev_ms_array == 0)
  return;

 objset_t *VAR_3 = VAR_1->vdev_spa->spa_meta_objset;
 uint64_t VAR_4 = VAR_1->vdev_asize >> VAR_1->vdev_ms_shift;
 size_t VAR_5 = VAR_4 * sizeof (uint64_t);
 uint64_t *VAR_6 = FUNC_3(VAR_5, VAR_0);
 FUNC_0(FUNC_2(VAR_3, VAR_1->vdev_ms_array, 0,
     VAR_5, VAR_6, 0));

 for (uint64_t VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  uint64_t VAR_8 = VAR_6[VAR_7];
  if (VAR_8 == 0)
   continue;

  FUNC_5(VAR_3, VAR_8, VAR_2);
 }

 FUNC_4(VAR_6, VAR_5);
 FUNC_0(FUNC_1(VAR_3, VAR_1->vdev_ms_array, VAR_2));
 VAR_1->vdev_ms_array = 0;
}
