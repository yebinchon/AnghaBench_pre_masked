
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ vdev_id; int vdev_removing; int * vdev_mg; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
typedef int metaslab_group_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,void*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_13(vdev_t *VAR_9, uint64_t *VAR_10)
{
 spa_t *VAR_11 = VAR_9->vdev_spa;
 int VAR_12;






 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12 != 0)
  return (VAR_12);
 metaslab_group_t *VAR_13 = VAR_9->vdev_mg;
 FUNC_4(VAR_13);





 FUNC_8(VAR_11, ((void*)0),
     *VAR_10 + VAR_3 + VAR_4, 0, VAR_1);







 VAR_12 = FUNC_6(VAR_11);






 FUNC_12(VAR_9, VAR_6);

 *VAR_10 = FUNC_7(VAR_11);





 if (VAR_12 == 0)
  VAR_12 = FUNC_9(VAR_9);

 if (VAR_12 != 0) {
  FUNC_3(VAR_13);
  FUNC_5(VAR_11, VAR_2);
  return (VAR_12);
 }

 VAR_9->vdev_removing = VAR_0;

 FUNC_11(VAR_9, VAR_5, *VAR_10);
 FUNC_10(VAR_9);
 dmu_tx_t *VAR_14 = FUNC_1(VAR_11->spa_dsl_pool, *VAR_10);
 FUNC_2(VAR_11->spa_dsl_pool,
     VAR_8,
     (void *)(uintptr_t)VAR_9->vdev_id, 0, VAR_7, VAR_14);
 FUNC_0(VAR_14);

 return (0);
}
