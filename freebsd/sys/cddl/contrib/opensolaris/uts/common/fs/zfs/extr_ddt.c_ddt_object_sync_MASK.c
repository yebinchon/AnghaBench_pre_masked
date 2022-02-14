
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int dmu_tx_t ;
struct TYPE_11__ {int doi_physical_blocks_512; int doi_fill_count; int doi_data_block_size; } ;
typedef TYPE_2__ dmu_object_info_t ;
struct TYPE_12__ {int ** ddt_histogram; TYPE_1__* ddt_spa; int ddt_os; TYPE_4__** ddt_object_stats; } ;
typedef TYPE_3__ ddt_t ;
struct TYPE_13__ {int ddo_dspace; int ddo_mspace; int ddo_count; } ;
typedef TYPE_4__ ddt_object_t ;
typedef int ddt_histogram_t ;
struct TYPE_10__ {int spa_ddt_stat_object; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int,int,char*) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_5(ddt_t *VAR_1, enum ddt_type VAR_2, enum ddt_class VAR_3,
    dmu_tx_t *VAR_4)
{
 ddt_object_t *VAR_5 = &VAR_1->ddt_object_stats[VAR_2][VAR_3];
 dmu_object_info_t VAR_6;
 uint64_t VAR_7;
 char VAR_8[VAR_0];

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_8);

 FUNC_0(FUNC_4(VAR_1->ddt_os, VAR_1->ddt_spa->spa_ddt_stat_object, VAR_8,
     sizeof (uint64_t), sizeof (ddt_histogram_t) / sizeof (uint64_t),
     &VAR_1->ddt_histogram[VAR_2][VAR_3], VAR_4) == 0);




 FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_6) == 0);
 FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_7) == 0);

 VAR_5->ddo_count = VAR_7;
 VAR_5->ddo_dspace = VAR_6.doi_physical_blocks_512 << 9;
 VAR_5->ddo_mspace = VAR_6.doi_fill_count * VAR_6.doi_data_block_size;
}
