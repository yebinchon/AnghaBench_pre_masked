
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* io_bp; scalar_t__ io_error; TYPE_3__* io_spa; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_7__ {scalar_t__ spa_claim_max_txg; int spa_props_lock; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_5__ {scalar_t__ blk_birth; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(zio_t *VAR_0)
{
 spa_t *VAR_1 = VAR_0->io_spa;

 if (VAR_0->io_error)
  return;

 FUNC_0(&VAR_1->spa_props_lock);
 if (VAR_1->spa_claim_max_txg < VAR_0->io_bp->blk_birth)
  VAR_1->spa_claim_max_txg = VAR_0->io_bp->blk_birth;
 FUNC_1(&VAR_1->spa_props_lock);
}
