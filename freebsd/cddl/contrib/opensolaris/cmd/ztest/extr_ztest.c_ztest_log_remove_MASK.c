
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zd_zilog; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int uint64_t ;
typedef int lr_t ;
struct TYPE_9__ {int lr_common; } ;
typedef TYPE_2__ lr_remove_t ;
struct TYPE_10__ {int itx_oid; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(ztest_ds_t *VAR_1, dmu_tx_t *VAR_2, lr_remove_t *VAR_3, uint64_t VAR_4)
{
 char *VAR_5 = (void *)(VAR_3 + 1);
 size_t VAR_6 = FUNC_1(VAR_5) + 1;
 itx_t *VAR_7;

 if (FUNC_4(VAR_1->zd_zilog, VAR_2))
  return;

 VAR_7 = FUNC_3(VAR_0, sizeof (*VAR_3) + VAR_6);
 FUNC_0(&VAR_3->lr_common + 1, &VAR_7->itx_lr + 1,
     sizeof (*VAR_3) + VAR_6 - sizeof (lr_t));

 VAR_7->itx_oid = VAR_4;
 FUNC_2(VAR_1->zd_zilog, VAR_7, VAR_2);
}
