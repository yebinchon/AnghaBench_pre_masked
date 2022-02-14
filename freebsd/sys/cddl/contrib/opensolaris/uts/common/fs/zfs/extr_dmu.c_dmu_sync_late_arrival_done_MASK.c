
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ blk_birth; } ;
struct TYPE_12__ {int io_flags; scalar_t__ io_txg; int io_abd; int io_error; TYPE_4__* io_bp; int io_spa; TYPE_4__ io_bp_orig; TYPE_3__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_13__ {int zgd_bp; int zgd_lwb; } ;
typedef TYPE_2__ zgd_t ;
struct TYPE_14__ {TYPE_2__* dsa_zgd; int (* dsa_done ) (TYPE_2__*,int ) ;int dsa_tx; } ;
typedef TYPE_3__ dmu_sync_arg_t ;
typedef TYPE_4__ blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_10(zio_t *VAR_1)
{
 blkptr_t *VAR_2 = VAR_1->io_bp;
 dmu_sync_arg_t *VAR_3 = VAR_1->io_private;
 blkptr_t *VAR_4 = &VAR_1->io_bp_orig;
 zgd_t *VAR_5 = VAR_3->dsa_zgd;

 if (VAR_1->io_error == 0) {




  FUNC_8(VAR_5->zgd_lwb, VAR_5->zgd_bp);

  if (!FUNC_2(VAR_2)) {
   FUNC_0(!(VAR_1->io_flags & VAR_0));
   FUNC_0(FUNC_2(VAR_4) || !FUNC_1(VAR_2, VAR_4));
   FUNC_0(VAR_1->io_bp->blk_birth == VAR_1->io_txg);
   FUNC_0(VAR_1->io_txg > FUNC_6(VAR_1->io_spa));
   FUNC_9(VAR_1->io_spa, VAR_1->io_txg, VAR_1->io_bp);
  }
 }

 FUNC_4(VAR_3->dsa_tx);

 VAR_3->dsa_done(VAR_3->dsa_zgd, VAR_1->io_error);

 FUNC_3(VAR_1->io_abd);
 FUNC_5(VAR_3, sizeof (*VAR_3));
}
