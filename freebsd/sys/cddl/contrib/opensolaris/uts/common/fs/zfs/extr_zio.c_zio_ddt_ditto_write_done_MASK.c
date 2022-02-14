
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ zp_copies; } ;
struct TYPE_15__ {scalar_t__ io_error; int io_txg; TYPE_5__* io_private; int io_spa; TYPE_6__* io_bp; TYPE_2__ io_prop; } ;
typedef TYPE_1__ zio_t ;
typedef TYPE_2__ zio_prop_t ;
typedef int ddt_t ;
struct TYPE_17__ {scalar_t__ ddp_refcnt; scalar_t__ ddp_phys_birth; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_18__ {int ddk_cksum; } ;
typedef TYPE_4__ ddt_key_t ;
struct TYPE_19__ {TYPE_1__** dde_lead_zio; TYPE_4__ dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_5__ ddt_entry_t ;
struct TYPE_20__ {int blk_cksum; } ;
typedef TYPE_6__ blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_7 (int *,TYPE_4__*,TYPE_3__*,int ) ;
 int * FUNC_8 (int ,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_2)
{
 int VAR_3 = VAR_0;
 zio_prop_t *VAR_4 = &VAR_2->io_prop;
 blkptr_t *VAR_5 = VAR_2->io_bp;
 ddt_t *VAR_6 = FUNC_8(VAR_2->io_spa, VAR_5);
 ddt_entry_t *VAR_7 = VAR_2->io_private;
 ddt_phys_t *VAR_8 = &VAR_7->dde_phys[VAR_3];
 ddt_key_t *VAR_9 = &VAR_7->dde_key;

 FUNC_4(VAR_6);

 FUNC_0(VAR_8->ddp_refcnt == 0);
 FUNC_0(VAR_7->dde_lead_zio[VAR_3] == VAR_2);
 VAR_7->dde_lead_zio[VAR_3] = ((void*)0);

 if (VAR_2->io_error == 0) {
  FUNC_0(FUNC_3(VAR_5->blk_cksum, VAR_9->ddk_cksum));
  FUNC_0(VAR_4->zp_copies < VAR_1);
  FUNC_0(VAR_4->zp_copies == FUNC_1(VAR_5) - FUNC_2(VAR_5));
  if (VAR_8->ddp_phys_birth != 0)
   FUNC_7(VAR_6, VAR_9, VAR_8, VAR_2->io_txg);
  FUNC_6(VAR_8, VAR_5);
 }

 FUNC_5(VAR_6);
}
