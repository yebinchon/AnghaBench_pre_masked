
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hi; int lo; } ;
struct TYPE_11__ {TYPE_3__ tx_bd_page_base; } ;
struct tx_queue_init_ramrod_data {TYPE_5__ tx; int general; } ;
struct TYPE_7__ {int flags; int txq_params; int gen_params; } ;
struct TYPE_8__ {TYPE_1__ tx_only; } ;
struct ecore_queue_state_params {TYPE_4__* q_obj; TYPE_2__ params; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_10__ {int * cids; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ,int ,int ) ;
 int FUNC_1 (struct bxe_softc*,TYPE_4__*,int *,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_0,
    struct ecore_queue_state_params *VAR_1,
    struct tx_queue_init_ramrod_data *VAR_2)
{
 FUNC_1(VAR_0, VAR_1->q_obj,
           &VAR_1->params.tx_only.gen_params,
           &VAR_2->general,
           &VAR_1->params.tx_only.flags);

 FUNC_2(VAR_1->q_obj,
      &VAR_1->params.tx_only.txq_params,
      &VAR_2->tx,
      &VAR_1->params.tx_only.flags);

 FUNC_0(VAR_0, "cid %d, tx bd page lo %x hi %x",
    VAR_1->q_obj->cids[0],
    VAR_2->tx.tx_bd_page_base.lo,
    VAR_2->tx.tx_bd_page_base.hi);
}
