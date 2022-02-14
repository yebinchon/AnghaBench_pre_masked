
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_3__** ddt_histogram; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_12__ {int dds_ref_blocks; } ;
typedef TYPE_2__ ddt_stat_t ;
struct TYPE_13__ {int * ddh_stat; } ;
typedef TYPE_3__ ddt_histogram_t ;
struct TYPE_14__ {size_t dde_type; size_t dde_class; } ;
typedef TYPE_4__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(ddt_t *VAR_0, ddt_entry_t *VAR_1, uint64_t VAR_2)
{
 ddt_stat_t VAR_3;
 ddt_histogram_t *VAR_4;
 int VAR_5;

 FUNC_2(VAR_0, VAR_1, &VAR_3);

 VAR_5 = FUNC_3(VAR_3.dds_ref_blocks) - 1;
 FUNC_0(VAR_5 >= 0);

 VAR_4 = &VAR_0->ddt_histogram[VAR_1->dde_type][VAR_1->dde_class];

 FUNC_1(&VAR_4->ddh_stat[VAR_5], &VAR_3, VAR_2);
}
