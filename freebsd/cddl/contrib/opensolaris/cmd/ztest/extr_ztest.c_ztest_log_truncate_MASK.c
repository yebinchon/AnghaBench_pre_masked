
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zd_zilog; } ;
typedef TYPE_1__ ztest_ds_t ;
struct TYPE_9__ {int lr_common; } ;
typedef TYPE_2__ lr_truncate_t ;
typedef int lr_t ;
struct TYPE_10__ {int itx_sync; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(ztest_ds_t *VAR_2, dmu_tx_t *VAR_3, lr_truncate_t *VAR_4)
{
 itx_t *VAR_5;

 if (FUNC_3(VAR_2->zd_zilog, VAR_3))
  return;

 VAR_5 = FUNC_2(VAR_1, sizeof (*VAR_4));
 FUNC_0(&VAR_4->lr_common + 1, &VAR_5->itx_lr + 1,
     sizeof (*VAR_4) - sizeof (lr_t));

 VAR_5->itx_sync = VAR_0;
 FUNC_1(VAR_2->zd_zilog, VAR_5, VAR_3);
}
