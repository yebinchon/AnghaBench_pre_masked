
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sci_timestamp; } ;
struct TYPE_6__ {TYPE_1__ spa_checkpoint_info; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, dmu_tx_t *VAR_2)
{
 spa_t *VAR_3 = VAR_1;

 VAR_3->spa_checkpoint_info.sci_timestamp = 0;

 FUNC_0(VAR_3, VAR_0, VAR_2);

 FUNC_1(VAR_3, "spa discard checkpoint", VAR_2,
     "finished discarding checkpointed state from the pool");
}
