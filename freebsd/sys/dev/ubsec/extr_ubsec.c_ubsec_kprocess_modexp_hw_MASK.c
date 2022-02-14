
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int u_int ;
struct ubsec_softc {int sc_flags; int sc_mcr2lock; int sc_queue2; int sc_dev; } ;
struct TYPE_11__ {int dma_size; int dma_paddr; int * dma_tag; struct ubsec_q2_modexp* dma_vaddr; } ;
struct TYPE_12__ {int q_type; TYPE_4__ q_ctx; TYPE_4__ q_mcr; } ;
struct ubsec_q2_modexp {int me_modbits; int me_shiftbits; int me_normbits; TYPE_4__ me_epb; TYPE_4__ me_C; TYPE_4__ me_E; TYPE_4__ me_M; TYPE_7__ me_q; void* me_N_len; void* me_E_len; void* me_op; void* me_len; struct ubsec_q2_modexp* me_N; struct cryptkop* me_krp; } ;
struct ubsec_pktbuf {void* pb_len; scalar_t__ pb_next; void* pb_addr; } ;
struct TYPE_9__ {void* pb_len; void* pb_addr; scalar_t__ pb_next; } ;
struct TYPE_8__ {void* pb_next; void* pb_len; void* pb_addr; } ;
struct ubsec_mcr {TYPE_2__ mcr_opktbuf; TYPE_1__ mcr_ipktbuf; scalar_t__ mcr_pktlen; scalar_t__ mcr_reserved; void* mcr_cmdctxp; scalar_t__ mcr_flags; void* mcr_pkts; } ;
struct ubsec_ctx_modexp {int me_modbits; int me_shiftbits; int me_normbits; TYPE_4__ me_epb; TYPE_4__ me_C; TYPE_4__ me_E; TYPE_4__ me_M; TYPE_7__ me_q; void* me_N_len; void* me_E_len; void* me_op; void* me_len; struct ubsec_ctx_modexp* me_N; struct cryptkop* me_krp; } ;
struct ubsec_ctx_keyop {int dummy; } ;
struct cryptkop {size_t krp_iparams; int krp_status; TYPE_3__* krp_param; } ;
struct TYPE_10__ {int crp_nbits; int crp_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_7__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (int ,struct ubsec_q2_modexp*,int) ;
 int FUNC_2 (struct ubsec_q2_modexp*,int) ;
 int FUNC_3 (struct cryptkop*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ubsec_q2_modexp*,int ) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (struct ubsec_softc*,TYPE_4__*) ;
 scalar_t__ FUNC_15 (struct ubsec_softc*,int,TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (struct ubsec_ctx_keyop*) ;
 int FUNC_18 (struct ubsec_mcr*) ;
 int FUNC_19 (struct ubsec_pktbuf*) ;
 int FUNC_20 (struct ubsec_softc*) ;
 int FUNC_21 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_22(struct ubsec_softc *VAR_14, struct cryptkop *VAR_15, int VAR_16)
{
 struct ubsec_q2_modexp *VAR_17;
 struct ubsec_mcr *VAR_18;
 struct ubsec_ctx_modexp *VAR_19;
 struct ubsec_pktbuf *VAR_20;
 int VAR_21 = 0;
 u_int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_17 = (struct ubsec_q2_modexp *)FUNC_9(sizeof *VAR_17, VAR_5, VAR_6);
 if (VAR_17 == ((void*)0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_17, sizeof *VAR_17);
 VAR_17->me_krp = VAR_15;
 VAR_17->me_q.q_type = VAR_7;

 VAR_22 = FUNC_21(&VAR_15->krp_param[VAR_11]);
 if (VAR_22 <= 512)
  VAR_23 = 512;
 else if (VAR_22 <= 768)
  VAR_23 = 768;
 else if (VAR_22 <= 1024)
  VAR_23 = 1024;
 else if (VAR_14->sc_flags & VAR_8 && VAR_22 <= 1536)
  VAR_23 = 1536;
 else if (VAR_14->sc_flags & VAR_8 && VAR_22 <= 2048)
  VAR_23 = 2048;
 else {
  VAR_21 = VAR_2;
  goto errout;
 }

 VAR_25 = VAR_23 - VAR_22;


 VAR_17->me_modbits = VAR_22;
 VAR_17->me_shiftbits = VAR_25;
 VAR_17->me_normbits = VAR_23;


 if (VAR_15->krp_param[VAR_15->krp_iparams].crp_nbits < VAR_22) {
  VAR_21 = VAR_4;
  goto errout;
 }

 if (FUNC_15(VAR_14, sizeof(struct ubsec_mcr),
     &VAR_17->me_q.q_mcr, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 VAR_18 = (struct ubsec_mcr *)VAR_17->me_q.q_mcr.dma_vaddr;

 if (FUNC_15(VAR_14, sizeof(struct ubsec_ctx_modexp),
     &VAR_17->me_q.q_ctx, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }

 VAR_24 = FUNC_21(&VAR_15->krp_param[VAR_10]);
 if (VAR_24 > VAR_22) {
  VAR_21 = VAR_2;
  goto errout;
 }
 if (FUNC_15(VAR_14, VAR_23 / 8, &VAR_17->me_M, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_17->me_M.dma_vaddr, VAR_23 / 8);
 FUNC_1(VAR_15->krp_param[VAR_10].crp_p,
     VAR_17->me_M.dma_vaddr, (VAR_24 + 7) / 8);

 if (FUNC_15(VAR_14, VAR_23 / 8, &VAR_17->me_C, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_17->me_C.dma_vaddr, VAR_17->me_C.dma_size);

 VAR_26 = FUNC_21(&VAR_15->krp_param[VAR_9]);
 if (VAR_26 > VAR_22) {
  VAR_21 = VAR_2;
  goto errout;
 }
 if (FUNC_15(VAR_14, VAR_23 / 8, &VAR_17->me_E, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 FUNC_2(VAR_17->me_E.dma_vaddr, VAR_23 / 8);
 FUNC_1(VAR_15->krp_param[VAR_9].crp_p,
     VAR_17->me_E.dma_vaddr, (VAR_26 + 7) / 8);

 if (FUNC_15(VAR_14, sizeof(struct ubsec_pktbuf),
     &VAR_17->me_epb, 0)) {
  VAR_21 = VAR_3;
  goto errout;
 }
 VAR_20 = (struct ubsec_pktbuf *)VAR_17->me_epb.dma_vaddr;
 VAR_20->pb_addr = FUNC_7(VAR_17->me_E.dma_paddr);
 VAR_20->pb_next = 0;
 VAR_20->pb_len = FUNC_7((VAR_26 + 7) / 8);
 VAR_18->mcr_pkts = FUNC_6(1);
 VAR_18->mcr_flags = 0;
 VAR_18->mcr_cmdctxp = FUNC_7(VAR_17->me_q.q_ctx.dma_paddr);
 VAR_18->mcr_reserved = 0;
 VAR_18->mcr_pktlen = 0;

 VAR_18->mcr_ipktbuf.pb_addr = FUNC_7(VAR_17->me_M.dma_paddr);
 VAR_18->mcr_ipktbuf.pb_len = FUNC_7(VAR_23 / 8);
 VAR_18->mcr_ipktbuf.pb_next = FUNC_7(VAR_17->me_epb.dma_paddr);

 VAR_18->mcr_opktbuf.pb_addr = FUNC_7(VAR_17->me_C.dma_paddr);
 VAR_18->mcr_opktbuf.pb_next = 0;
 VAR_18->mcr_opktbuf.pb_len = FUNC_7(VAR_23 / 8);
 VAR_19 = (struct ubsec_ctx_modexp *)VAR_17->me_q.q_ctx.dma_vaddr;
 FUNC_2(VAR_19, sizeof(*VAR_19));
 FUNC_1(VAR_15->krp_param[VAR_11].crp_p, VAR_19->me_N,
     (VAR_22 + 7) / 8);
 VAR_19->me_len = FUNC_6((VAR_23 / 8) + (4 * sizeof(u_int16_t)));
 VAR_19->me_op = FUNC_6(VAR_7);
 VAR_19->me_E_len = FUNC_6(VAR_26);
 VAR_19->me_N_len = FUNC_6(VAR_22);
 FUNC_16(&VAR_17->me_M, VAR_1);
 FUNC_16(&VAR_17->me_E, VAR_1);
 FUNC_16(&VAR_17->me_C, VAR_0);
 FUNC_16(&VAR_17->me_epb, VAR_1);


 FUNC_10(&VAR_14->sc_mcr2lock);
 FUNC_0(&VAR_14->sc_queue2, &VAR_17->me_q, VAR_12);
 FUNC_20(VAR_14);
 FUNC_11(&VAR_14->sc_mcr2lock);

 return (0);

errout:
 if (VAR_17 != ((void*)0)) {
  if (VAR_17->me_q.q_mcr.dma_tag != ((void*)0))
   FUNC_14(VAR_14, &VAR_17->me_q.q_mcr);
  if (VAR_17->me_q.q_ctx.dma_tag != ((void*)0)) {
   FUNC_2(VAR_17->me_q.q_ctx.dma_vaddr, VAR_17->me_q.q_ctx.dma_size);
   FUNC_14(VAR_14, &VAR_17->me_q.q_ctx);
  }
  if (VAR_17->me_M.dma_tag != ((void*)0)) {
   FUNC_2(VAR_17->me_M.dma_vaddr, VAR_17->me_M.dma_size);
   FUNC_14(VAR_14, &VAR_17->me_M);
  }
  if (VAR_17->me_E.dma_tag != ((void*)0)) {
   FUNC_2(VAR_17->me_E.dma_vaddr, VAR_17->me_E.dma_size);
   FUNC_14(VAR_14, &VAR_17->me_E);
  }
  if (VAR_17->me_C.dma_tag != ((void*)0)) {
   FUNC_2(VAR_17->me_C.dma_vaddr, VAR_17->me_C.dma_size);
   FUNC_14(VAR_14, &VAR_17->me_C);
  }
  if (VAR_17->me_epb.dma_tag != ((void*)0))
   FUNC_14(VAR_14, &VAR_17->me_epb);
  FUNC_5(VAR_17, VAR_5);
 }
 VAR_15->krp_status = VAR_21;
 FUNC_3(VAR_15);
 return (0);
}
