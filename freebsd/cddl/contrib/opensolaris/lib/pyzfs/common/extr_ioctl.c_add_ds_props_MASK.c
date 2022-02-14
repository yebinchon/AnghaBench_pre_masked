
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dds_inconsistent; int dds_is_snapshot; int dds_num_clones; } ;
struct TYPE_4__ {TYPE_2__ zc_objset_stats; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef TYPE_2__ dmu_objset_stats_t ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(zfs_cmd_t *VAR_0, PyObject *VAR_1)
{
 dmu_objset_stats_t *VAR_2 = &VAR_0->zc_objset_stats;
 FUNC_0(VAR_1, "numclones",
     FUNC_1(VAR_2->dds_num_clones));
 FUNC_0(VAR_1, "issnap",
     FUNC_1(VAR_2->dds_is_snapshot));
 FUNC_0(VAR_1, "inconsistent",
     FUNC_1(VAR_2->dds_inconsistent));
}
