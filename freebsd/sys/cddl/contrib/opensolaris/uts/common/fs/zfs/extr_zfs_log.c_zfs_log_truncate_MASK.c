
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ z_sync_cnt; int z_id; scalar_t__ z_unlinked; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
typedef void* uint64_t ;
struct TYPE_8__ {void* lr_length; void* lr_offset; int lr_foid; } ;
typedef TYPE_2__ lr_truncate_t ;
struct TYPE_9__ {int itx_sync; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void
FUNC_3(zilog_t *VAR_0, dmu_tx_t *VAR_1, int VAR_2,
    znode_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
 itx_t *VAR_6;
 lr_truncate_t *VAR_7;

 if (FUNC_2(VAR_0, VAR_1) || VAR_3->z_unlinked)
  return;

 VAR_6 = FUNC_1(VAR_2, sizeof (*VAR_7));
 VAR_7 = (lr_truncate_t *)&VAR_6->itx_lr;
 VAR_7->lr_foid = VAR_3->z_id;
 VAR_7->lr_offset = VAR_4;
 VAR_7->lr_length = VAR_5;

 VAR_6->itx_sync = (VAR_3->z_sync_cnt != 0);
 FUNC_0(VAR_0, VAR_6, VAR_1);
}
