
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zap_num_entries_mtx; } ;
struct TYPE_7__ {TYPE_1__ zap_f; int zap_dbuf; } ;
typedef TYPE_2__ zap_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {int zap_num_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(zap_t *VAR_0, int VAR_1, dmu_tx_t *VAR_2)
{
 FUNC_1(VAR_0->zap_dbuf, VAR_2);
 FUNC_2(&VAR_0->zap_f.zap_num_entries_mtx);
 FUNC_0(VAR_1 > 0 || FUNC_4(VAR_0)->zap_num_entries >= -VAR_1);
 FUNC_4(VAR_0)->zap_num_entries += VAR_1;
 FUNC_3(&VAR_0->zap_f.zap_num_entries_mtx);
}
