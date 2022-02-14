
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zl_os; } ;
typedef TYPE_1__ zilog_t ;
typedef int zil_commit_waiter_t ;
typedef int lr_t ;
struct TYPE_8__ {int * itx_private; int itx_sync; } ;
typedef TYPE_2__ itx_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(zilog_t *VAR_3, zil_commit_waiter_t *VAR_4)
{
 dmu_tx_t *VAR_5 = FUNC_3(VAR_3->zl_os);
 FUNC_0(FUNC_1(VAR_5, VAR_1));

 itx_t *VAR_6 = FUNC_5(VAR_2, sizeof (lr_t));
 VAR_6->itx_sync = VAR_0;
 VAR_6->itx_private = VAR_4;

 FUNC_4(VAR_3, VAR_6, VAR_5);

 FUNC_2(VAR_5);
}
