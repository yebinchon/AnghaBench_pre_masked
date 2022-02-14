
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_9__ {int dma_paddr; scalar_t__ dma_vaddr; } ;
struct TYPE_8__ {scalar_t__ dma_vaddr; } ;
struct TYPE_14__ {int q_type; TYPE_2__ q_ctx; TYPE_1__ q_mcr; } ;
struct TYPE_13__ {int dma_paddr; } ;
struct ubsec_q2_rng {int rng_used; TYPE_7__ rng_q; TYPE_6__ rng_buf; } ;
struct ubsec_softc {scalar_t__ sc_nqueue2; int sc_rnghz; int sc_rngto; int sc_mcr2lock; int sc_queue2; struct ubsec_q2_rng sc_rng; } ;
struct TYPE_11__ {scalar_t__ pb_next; void* pb_len; void* pb_addr; } ;
struct TYPE_10__ {scalar_t__ pb_len; scalar_t__ pb_next; scalar_t__ pb_addr; } ;
struct ubsec_mcr {TYPE_4__ mcr_opktbuf; scalar_t__ mcr_pktlen; scalar_t__ mcr_reserved; TYPE_3__ mcr_ipktbuf; void* mcr_cmdctxp; scalar_t__ mcr_flags; void* mcr_pkts; } ;
struct ubsec_ctx_rngbypass {void* rbp_op; void* rbp_len; } ;
struct TYPE_12__ {int hst_rng; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_7__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct ubsec_softc*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (struct ubsec_softc*) ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void
FUNC_8(void *VAR_7)
{
 struct ubsec_softc *VAR_8 = VAR_7;
 struct ubsec_q2_rng *VAR_9 = &VAR_8->sc_rng;
 struct ubsec_mcr *VAR_10;
 struct ubsec_ctx_rngbypass *VAR_11;

 FUNC_4(&VAR_8->sc_mcr2lock);
 if (VAR_9->rng_used) {
  FUNC_5(&VAR_8->sc_mcr2lock);
  return;
 }
 VAR_8->sc_nqueue2++;
 if (VAR_8->sc_nqueue2 >= VAR_3)
  goto out;

 VAR_10 = (struct ubsec_mcr *)VAR_9->rng_q.q_mcr.dma_vaddr;
 VAR_11 = (struct ubsec_ctx_rngbypass *)VAR_9->rng_q.q_ctx.dma_vaddr;

 VAR_10->mcr_pkts = FUNC_2(1);
 VAR_10->mcr_flags = 0;
 VAR_10->mcr_cmdctxp = FUNC_3(VAR_9->rng_q.q_ctx.dma_paddr);
 VAR_10->mcr_ipktbuf.pb_addr = VAR_10->mcr_ipktbuf.pb_next = 0;
 VAR_10->mcr_ipktbuf.pb_len = 0;
 VAR_10->mcr_reserved = VAR_10->mcr_pktlen = 0;
 VAR_10->mcr_opktbuf.pb_addr = FUNC_3(VAR_9->rng_buf.dma_paddr);
 VAR_10->mcr_opktbuf.pb_len = FUNC_3(((sizeof(u_int32_t) * VAR_1)) &
     VAR_4);
 VAR_10->mcr_opktbuf.pb_next = 0;

 VAR_11->rbp_len = FUNC_2(sizeof(struct ubsec_ctx_rngbypass));
 VAR_11->rbp_op = FUNC_2(VAR_2);
 VAR_9->rng_q.q_type = VAR_2;

 FUNC_6(&VAR_9->rng_buf, VAR_0);

 FUNC_0(&VAR_8->sc_queue2, &VAR_9->rng_q, VAR_5);
 VAR_9->rng_used = 1;
 FUNC_7(VAR_8);
 VAR_6.hst_rng++;
 FUNC_5(&VAR_8->sc_mcr2lock);

 return;

out:



 VAR_8->sc_nqueue2--;
 FUNC_5(&VAR_8->sc_mcr2lock);
 FUNC_1(&VAR_8->sc_rngto, VAR_8->sc_rnghz, FUNC_8, VAR_8);
}
