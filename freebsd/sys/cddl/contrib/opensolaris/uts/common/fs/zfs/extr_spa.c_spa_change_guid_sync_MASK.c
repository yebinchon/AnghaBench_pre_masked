
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vdev_guid_sum; scalar_t__ vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {TYPE_2__* dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, dmu_tx_t *VAR_4)
{
 uint64_t *VAR_5 = VAR_3;
 spa_t *VAR_6 = FUNC_0(VAR_4)->dp_spa;
 uint64_t VAR_7;
 vdev_t *VAR_8 = VAR_6->spa_root_vdev;

 VAR_7 = FUNC_3(VAR_6);

 FUNC_1(VAR_6, VAR_2, VAR_0, VAR_1);
 VAR_8->vdev_guid = *VAR_5;
 VAR_8->vdev_guid_sum += (*VAR_5 - VAR_7);
 FUNC_5(VAR_8);
 FUNC_2(VAR_6, VAR_2, VAR_0);

 FUNC_4(VAR_6, "guid change", VAR_4, "old=%llu new=%llu",
     VAR_7, *VAR_5);
}
