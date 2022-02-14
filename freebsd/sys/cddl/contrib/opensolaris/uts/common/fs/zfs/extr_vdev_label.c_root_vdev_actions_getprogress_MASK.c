
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_8__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int prs ;
typedef int pool_scan_stat_t ;
typedef int pool_removal_stat_t ;
typedef int pool_checkpoint_stat_t ;
typedef int pcs ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_3, nvlist_t *VAR_4)
{
 spa_t *VAR_5 = VAR_3->vdev_spa;

 if (VAR_3 != VAR_5->spa_root_vdev)
  return;


 pool_scan_stat_t VAR_6;
 if (FUNC_3(VAR_5, &VAR_6) == 0) {
  FUNC_0(VAR_4,
      VAR_2, (uint64_t *)&VAR_6,
      sizeof (pool_scan_stat_t) / sizeof (uint64_t));
 }

 pool_removal_stat_t VAR_7;
 if (FUNC_2(VAR_5, &VAR_7) == 0) {
  FUNC_0(VAR_4,
      VAR_1, (uint64_t *)&VAR_7,
      sizeof (VAR_7) / sizeof (uint64_t));
 }

 pool_checkpoint_stat_t VAR_8;
 if (FUNC_1(VAR_5, &VAR_8) == 0) {
  FUNC_0(VAR_4,
      VAR_0, (uint64_t *)&VAR_8,
      sizeof (VAR_8) / sizeof (uint64_t));
 }
}
