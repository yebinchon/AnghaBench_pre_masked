
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* vim_phys; scalar_t__ vim_havecounts; } ;
typedef TYPE_2__ vdev_indirect_mapping_t ;
typedef int uint64_t ;
struct TYPE_11__ {int os_spa; } ;
typedef TYPE_3__ objset_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {int vimp_counts_object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ) ;

void
FUNC_5(objset_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 vdev_indirect_mapping_t *VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4->vim_havecounts) {
  FUNC_0(FUNC_1(VAR_1, VAR_4->vim_phys->vimp_counts_object,
      VAR_3));
  FUNC_2(VAR_1->os_spa, VAR_0, VAR_3);
 }
 FUNC_3(VAR_4);

 FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3));
}
