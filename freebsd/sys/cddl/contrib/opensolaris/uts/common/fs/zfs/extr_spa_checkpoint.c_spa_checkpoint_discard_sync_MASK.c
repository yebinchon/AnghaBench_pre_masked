
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_checkpoint_discard_zthr; scalar_t__ spa_checkpoint_txg; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {TYPE_1__* dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, dmu_tx_t *VAR_3)
{
 spa_t *VAR_4 = FUNC_1(VAR_3)->dp_spa;

 FUNC_0(FUNC_4(FUNC_3(VAR_4), VAR_0,
     VAR_1, VAR_3));

 VAR_4->spa_checkpoint_txg = 0;

 FUNC_5(VAR_4->spa_checkpoint_discard_zthr);

 FUNC_2(VAR_4, "spa discard checkpoint", VAR_3,
     "started discarding checkpointed state from the pool");
}
