
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int16_t ;
typedef int u_int ;
struct ubsec_softc {int sc_flags; int sc_mcr2lock; int sc_queue2; int sc_dev; } ;
struct TYPE_13__ {int dma_paddr; int dma_size; struct ubsec_q2_rsapriv* dma_vaddr; int * dma_tag; } ;
struct TYPE_14__ {int q_type; TYPE_5__ q_mcr; TYPE_5__ q_ctx; } ;
struct ubsec_q2_rsapriv {int rpr_len; TYPE_5__ rpr_msgout; TYPE_5__ rpr_msgin; TYPE_8__ rpr_q; void* rpr_p_len; void* rpr_q_len; void* rpr_op; struct ubsec_q2_rsapriv* rpr_buf; struct cryptkop* rpr_krp; } ;
struct TYPE_10__ {void* pb_len; scalar_t__ pb_next; void* pb_addr; } ;
struct TYPE_9__ {void* pb_len; scalar_t__ pb_next; void* pb_addr; } ;
struct ubsec_mcr {TYPE_2__ mcr_opktbuf; void* mcr_pktlen; scalar_t__ mcr_reserved; TYPE_1__ mcr_ipktbuf; void* mcr_cmdctxp; scalar_t__ mcr_flags; void* mcr_pkts; } ;
struct ubsec_ctx_rsapriv {int rpr_len; TYPE_5__ rpr_msgout; TYPE_5__ rpr_msgin; TYPE_8__ rpr_q; void* rpr_p_len; void* rpr_q_len; void* rpr_op; struct ubsec_ctx_rsapriv* rpr_buf; struct cryptkop* rpr_krp; } ;
struct cryptkop {int krp_status; TYPE_4__* krp_param; } ;
struct TYPE_12__ {int crp_nbits; int crp_p; } ;
struct TYPE_11__ {int hst_modexpcrt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_8__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (int ,struct ubsec_q2_rsapriv*,int) ;
 int FUNC_2 (struct ubsec_q2_rsapriv*,int) ;
 int FUNC_3 (struct cryptkop*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ubsec_q2_rsapriv*,int ) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,int,int ) ;
 int VAR_15 ;
 int FUNC_12 (struct ubsec_softc*,TYPE_5__*) ;
 scalar_t__ FUNC_13 (struct ubsec_softc*,int,TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (struct ubsec_softc*) ;
 int FUNC_16 (TYPE_4__*) ;
 TYPE_3__ VAR_16 ;

__attribute__((used)) static int
FUNC_17(struct ubsec_softc *VAR_17, struct cryptkop *VAR_18, int VAR_19)
{
 struct ubsec_q2_rsapriv *VAR_20 = ((void*)0);
 struct ubsec_mcr *VAR_21;
 struct ubsec_ctx_rsapriv *VAR_22;
 int VAR_23 = 0;
 u_int VAR_24, VAR_25;

 VAR_25 = FUNC_16(&VAR_18->krp_param[VAR_12]);
 VAR_24 = FUNC_16(&VAR_18->krp_param[VAR_14]);
 if (VAR_25 > VAR_24)
  VAR_24 = VAR_25;

 if (VAR_24 <= 256)
  VAR_24 = 256;
 else if (VAR_24 <= 384)
  VAR_24 = 384;
 else if (VAR_24 <= 512)
  VAR_24 = 512;
 else if (VAR_17->sc_flags & VAR_7 && VAR_24 <= 768)
  VAR_24 = 768;
 else if (VAR_17->sc_flags & VAR_7 && VAR_24 <= 1024)
  VAR_24 = 1024;
 else {
  VAR_23 = VAR_2;
  goto errout;
 }

 if (FUNC_16(&VAR_18->krp_param[VAR_8]) > VAR_24) {
  VAR_23 = VAR_2;
  goto errout;
 }

 if (FUNC_16(&VAR_18->krp_param[VAR_9]) > VAR_24) {
  VAR_23 = VAR_2;
  goto errout;
 }

 if (FUNC_16(&VAR_18->krp_param[VAR_13]) > VAR_24) {
  VAR_23 = VAR_2;
  goto errout;
 }

 VAR_20 = (struct ubsec_q2_rsapriv *)FUNC_8(sizeof *VAR_20, VAR_4, VAR_5);
 if (VAR_20 == ((void*)0))
  return (VAR_3);
 FUNC_2(VAR_20, sizeof *VAR_20);
 VAR_20->rpr_krp = VAR_18;
 VAR_20->rpr_q.q_type = VAR_6;

 if (FUNC_13(VAR_17, sizeof(struct ubsec_mcr),
     &VAR_20->rpr_q.q_mcr, 0)) {
  VAR_23 = VAR_3;
  goto errout;
 }
 VAR_21 = (struct ubsec_mcr *)VAR_20->rpr_q.q_mcr.dma_vaddr;

 if (FUNC_13(VAR_17, sizeof(struct ubsec_ctx_rsapriv),
     &VAR_20->rpr_q.q_ctx, 0)) {
  VAR_23 = VAR_3;
  goto errout;
 }
 VAR_22 = (struct ubsec_ctx_rsapriv *)VAR_20->rpr_q.q_ctx.dma_vaddr;
 FUNC_2(VAR_22, sizeof *VAR_22);


 FUNC_1(VAR_18->krp_param[VAR_12].crp_p,
     &VAR_22->rpr_buf[0 * (VAR_24 / 8)],
     (VAR_18->krp_param[VAR_12].crp_nbits + 7) / 8);


 FUNC_1(VAR_18->krp_param[VAR_14].crp_p,
     &VAR_22->rpr_buf[1 * (VAR_24 / 8)],
     (VAR_18->krp_param[VAR_14].crp_nbits + 7) / 8);


 FUNC_1(VAR_18->krp_param[VAR_8].crp_p,
     &VAR_22->rpr_buf[2 * (VAR_24 / 8)],
     (VAR_18->krp_param[VAR_8].crp_nbits + 7) / 8);


 FUNC_1(VAR_18->krp_param[VAR_9].crp_p,
     &VAR_22->rpr_buf[3 * (VAR_24 / 8)],
     (VAR_18->krp_param[VAR_9].crp_nbits + 7) / 8);


 FUNC_1(VAR_18->krp_param[VAR_13].crp_p,
     &VAR_22->rpr_buf[4 * (VAR_24 / 8)],
     (VAR_18->krp_param[VAR_13].crp_nbits + 7) / 8);

 VAR_25 = VAR_24 * 2;


 if (FUNC_16(&VAR_18->krp_param[VAR_10]) > VAR_25) {

  VAR_23 = VAR_2;
  goto errout;
 }
 if (FUNC_13(VAR_17, (VAR_25 + 7) / 8, &VAR_20->rpr_msgin, 0)) {
  VAR_23 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_20->rpr_msgin.dma_vaddr, (VAR_25 + 7) / 8);
 FUNC_1(VAR_18->krp_param[VAR_10].crp_p,
     VAR_20->rpr_msgin.dma_vaddr,
     (VAR_18->krp_param[VAR_10].crp_nbits + 7) / 8);


 if (FUNC_16(&VAR_18->krp_param[VAR_11]) < VAR_25) {

  VAR_23 = VAR_2;
  goto errout;
 }
 if (FUNC_13(VAR_17, (VAR_25 + 7) / 8, &VAR_20->rpr_msgout, 0)) {
  VAR_23 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_20->rpr_msgout.dma_vaddr, (VAR_25 + 7) / 8);

 VAR_21->mcr_pkts = FUNC_6(1);
 VAR_21->mcr_flags = 0;
 VAR_21->mcr_cmdctxp = FUNC_7(VAR_20->rpr_q.q_ctx.dma_paddr);
 VAR_21->mcr_ipktbuf.pb_addr = FUNC_7(VAR_20->rpr_msgin.dma_paddr);
 VAR_21->mcr_ipktbuf.pb_next = 0;
 VAR_21->mcr_ipktbuf.pb_len = FUNC_7(VAR_20->rpr_msgin.dma_size);
 VAR_21->mcr_reserved = 0;
 VAR_21->mcr_pktlen = FUNC_6(VAR_25);
 VAR_21->mcr_opktbuf.pb_addr = FUNC_7(VAR_20->rpr_msgout.dma_paddr);
 VAR_21->mcr_opktbuf.pb_next = 0;
 VAR_21->mcr_opktbuf.pb_len = FUNC_7(VAR_20->rpr_msgout.dma_size);
 VAR_22->rpr_len = (sizeof(u_int16_t) * 4) + (5 * (VAR_24 / 8));
 VAR_22->rpr_op = FUNC_6(VAR_6);
 VAR_22->rpr_q_len = FUNC_6(VAR_24);
 VAR_22->rpr_p_len = FUNC_6(VAR_24);





 FUNC_14(&VAR_20->rpr_msgin, VAR_1);
 FUNC_14(&VAR_20->rpr_msgout, VAR_0);


 FUNC_9(&VAR_17->sc_mcr2lock);
 FUNC_0(&VAR_17->sc_queue2, &VAR_20->rpr_q, VAR_15);
 FUNC_15(VAR_17);
 VAR_16.hst_modexpcrt++;
 FUNC_10(&VAR_17->sc_mcr2lock);
 return (0);

errout:
 if (VAR_20 != ((void*)0)) {
  if (VAR_20->rpr_q.q_mcr.dma_tag != ((void*)0))
   FUNC_12(VAR_17, &VAR_20->rpr_q.q_mcr);
  if (VAR_20->rpr_msgin.dma_tag != ((void*)0)) {
   FUNC_2(VAR_20->rpr_msgin.dma_vaddr, VAR_20->rpr_msgin.dma_size);
   FUNC_12(VAR_17, &VAR_20->rpr_msgin);
  }
  if (VAR_20->rpr_msgout.dma_tag != ((void*)0)) {
   FUNC_2(VAR_20->rpr_msgout.dma_vaddr, VAR_20->rpr_msgout.dma_size);
   FUNC_12(VAR_17, &VAR_20->rpr_msgout);
  }
  FUNC_5(VAR_20, VAR_4);
 }
 VAR_18->krp_status = VAR_23;
 FUNC_3(VAR_18);
 return (0);
}
