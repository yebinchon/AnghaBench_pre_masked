
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


typedef int u_int16_t ;
typedef int u_int ;
struct ubsec_softc {int sc_flags; int sc_mcr2lock; int sc_queue2; int sc_dev; } ;
struct TYPE_13__ {int dma_size; int dma_paddr; int * dma_tag; struct ubsec_q2_modexp* dma_vaddr; } ;
struct TYPE_14__ {int q_type; TYPE_5__ q_ctx; TYPE_5__ q_mcr; } ;
struct ubsec_q2_modexp {int me_modbits; int me_shiftbits; int me_normbits; TYPE_5__ me_epb; TYPE_5__ me_C; TYPE_5__ me_E; TYPE_5__ me_M; TYPE_8__ me_q; void* me_N_len; void* me_E_len; void* me_op; void* me_len; struct ubsec_q2_modexp* me_N; struct cryptkop* me_krp; } ;
struct ubsec_pktbuf {void* pb_len; scalar_t__ pb_next; void* pb_addr; } ;
struct TYPE_10__ {void* pb_len; void* pb_addr; scalar_t__ pb_next; } ;
struct TYPE_9__ {void* pb_next; void* pb_len; void* pb_addr; } ;
struct ubsec_mcr {TYPE_2__ mcr_opktbuf; TYPE_1__ mcr_ipktbuf; scalar_t__ mcr_pktlen; scalar_t__ mcr_reserved; void* mcr_cmdctxp; scalar_t__ mcr_flags; void* mcr_pkts; } ;
struct ubsec_ctx_modexp {int me_modbits; int me_shiftbits; int me_normbits; TYPE_5__ me_epb; TYPE_5__ me_C; TYPE_5__ me_E; TYPE_5__ me_M; TYPE_8__ me_q; void* me_N_len; void* me_E_len; void* me_op; void* me_len; struct ubsec_ctx_modexp* me_N; struct cryptkop* me_krp; } ;
struct ubsec_ctx_keyop {int dummy; } ;
struct cryptkop {size_t krp_iparams; int krp_status; TYPE_4__* krp_param; } ;
struct TYPE_12__ {int crp_nbits; int crp_p; } ;
struct TYPE_11__ {int hst_modexp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_8__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct ubsec_q2_modexp*,int) ;
 int FUNC_2 (struct cryptkop*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubsec_q2_modexp*,int ) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (struct ubsec_softc*,TYPE_5__*) ;
 scalar_t__ FUNC_14 (struct ubsec_softc*,int,TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (struct ubsec_ctx_keyop*) ;
 int FUNC_17 (struct ubsec_mcr*) ;
 int FUNC_18 (struct ubsec_pktbuf*) ;
 int FUNC_19 (struct ubsec_softc*) ;
 int FUNC_20 (int,int ,int,struct ubsec_q2_modexp*,int) ;
 int FUNC_21 (TYPE_4__*) ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static int
FUNC_22(struct ubsec_softc *VAR_15, struct cryptkop *VAR_16, int VAR_17)
{
 struct ubsec_q2_modexp *VAR_18;
 struct ubsec_mcr *VAR_19;
 struct ubsec_ctx_modexp *VAR_20;
 struct ubsec_pktbuf *VAR_21;
 int VAR_22 = 0;
 u_int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_18 = (struct ubsec_q2_modexp *)FUNC_8(sizeof *VAR_18, VAR_5, VAR_6);
 if (VAR_18 == ((void*)0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 FUNC_1(VAR_18, sizeof *VAR_18);
 VAR_18->me_krp = VAR_16;
 VAR_18->me_q.q_type = VAR_7;

 VAR_23 = FUNC_21(&VAR_16->krp_param[VAR_11]);
 if (VAR_23 <= 512)
  VAR_24 = 512;
 else if (VAR_23 <= 768)
  VAR_24 = 768;
 else if (VAR_23 <= 1024)
  VAR_24 = 1024;
 else if (VAR_15->sc_flags & VAR_8 && VAR_23 <= 1536)
  VAR_24 = 1536;
 else if (VAR_15->sc_flags & VAR_8 && VAR_23 <= 2048)
  VAR_24 = 2048;
 else {
  VAR_22 = VAR_2;
  goto errout;
 }

 VAR_26 = VAR_24 - VAR_23;

 VAR_18->me_modbits = VAR_23;
 VAR_18->me_shiftbits = VAR_26;
 VAR_18->me_normbits = VAR_24;


 if (VAR_16->krp_param[VAR_16->krp_iparams].crp_nbits < VAR_23) {
  VAR_22 = VAR_4;
  goto errout;
 }

 if (FUNC_14(VAR_15, sizeof(struct ubsec_mcr),
     &VAR_18->me_q.q_mcr, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 VAR_19 = (struct ubsec_mcr *)VAR_18->me_q.q_mcr.dma_vaddr;

 if (FUNC_14(VAR_15, sizeof(struct ubsec_ctx_modexp),
     &VAR_18->me_q.q_ctx, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }

 VAR_25 = FUNC_21(&VAR_16->krp_param[VAR_10]);
 if (VAR_25 > VAR_23) {
  VAR_22 = VAR_2;
  goto errout;
 }
 if (FUNC_14(VAR_15, VAR_24 / 8, &VAR_18->me_M, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 FUNC_20(VAR_26,
     VAR_16->krp_param[VAR_10].crp_p, VAR_25,
     VAR_18->me_M.dma_vaddr, VAR_24);

 if (FUNC_14(VAR_15, VAR_24 / 8, &VAR_18->me_C, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 FUNC_1(VAR_18->me_C.dma_vaddr, VAR_18->me_C.dma_size);

 VAR_27 = FUNC_21(&VAR_16->krp_param[VAR_9]);
 if (VAR_27 > VAR_23) {
  VAR_22 = VAR_2;
  goto errout;
 }
 if (FUNC_14(VAR_15, VAR_24 / 8, &VAR_18->me_E, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 FUNC_20(VAR_26,
     VAR_16->krp_param[VAR_9].crp_p, VAR_27,
     VAR_18->me_E.dma_vaddr, VAR_24);

 if (FUNC_14(VAR_15, sizeof(struct ubsec_pktbuf),
     &VAR_18->me_epb, 0)) {
  VAR_22 = VAR_3;
  goto errout;
 }
 VAR_21 = (struct ubsec_pktbuf *)VAR_18->me_epb.dma_vaddr;
 VAR_21->pb_addr = FUNC_6(VAR_18->me_E.dma_paddr);
 VAR_21->pb_next = 0;
 VAR_21->pb_len = FUNC_6(VAR_24 / 8);
 VAR_19->mcr_pkts = FUNC_5(1);
 VAR_19->mcr_flags = 0;
 VAR_19->mcr_cmdctxp = FUNC_6(VAR_18->me_q.q_ctx.dma_paddr);
 VAR_19->mcr_reserved = 0;
 VAR_19->mcr_pktlen = 0;

 VAR_19->mcr_ipktbuf.pb_addr = FUNC_6(VAR_18->me_M.dma_paddr);
 VAR_19->mcr_ipktbuf.pb_len = FUNC_6(VAR_24 / 8);
 VAR_19->mcr_ipktbuf.pb_next = FUNC_6(VAR_18->me_epb.dma_paddr);

 VAR_19->mcr_opktbuf.pb_addr = FUNC_6(VAR_18->me_C.dma_paddr);
 VAR_19->mcr_opktbuf.pb_next = 0;
 VAR_19->mcr_opktbuf.pb_len = FUNC_6(VAR_24 / 8);
 VAR_20 = (struct ubsec_ctx_modexp *)VAR_18->me_q.q_ctx.dma_vaddr;
 FUNC_1(VAR_20, sizeof(*VAR_20));
 FUNC_20(VAR_26,
     VAR_16->krp_param[VAR_11].crp_p, VAR_23,
     VAR_20->me_N, VAR_24);
 VAR_20->me_len = FUNC_5((VAR_24 / 8) + (4 * sizeof(u_int16_t)));
 VAR_20->me_op = FUNC_5(VAR_7);
 VAR_20->me_E_len = FUNC_5(VAR_23);
 VAR_20->me_N_len = FUNC_5(VAR_23);
 FUNC_15(&VAR_18->me_M, VAR_1);
 FUNC_15(&VAR_18->me_E, VAR_1);
 FUNC_15(&VAR_18->me_C, VAR_0);
 FUNC_15(&VAR_18->me_epb, VAR_1);


 FUNC_9(&VAR_15->sc_mcr2lock);
 FUNC_0(&VAR_15->sc_queue2, &VAR_18->me_q, VAR_12);
 FUNC_19(VAR_15);
 VAR_14.hst_modexp++;
 FUNC_10(&VAR_15->sc_mcr2lock);

 return (0);

errout:
 if (VAR_18 != ((void*)0)) {
  if (VAR_18->me_q.q_mcr.dma_tag != ((void*)0))
   FUNC_13(VAR_15, &VAR_18->me_q.q_mcr);
  if (VAR_18->me_q.q_ctx.dma_tag != ((void*)0)) {
   FUNC_1(VAR_18->me_q.q_ctx.dma_vaddr, VAR_18->me_q.q_ctx.dma_size);
   FUNC_13(VAR_15, &VAR_18->me_q.q_ctx);
  }
  if (VAR_18->me_M.dma_tag != ((void*)0)) {
   FUNC_1(VAR_18->me_M.dma_vaddr, VAR_18->me_M.dma_size);
   FUNC_13(VAR_15, &VAR_18->me_M);
  }
  if (VAR_18->me_E.dma_tag != ((void*)0)) {
   FUNC_1(VAR_18->me_E.dma_vaddr, VAR_18->me_E.dma_size);
   FUNC_13(VAR_15, &VAR_18->me_E);
  }
  if (VAR_18->me_C.dma_tag != ((void*)0)) {
   FUNC_1(VAR_18->me_C.dma_vaddr, VAR_18->me_C.dma_size);
   FUNC_13(VAR_15, &VAR_18->me_C);
  }
  if (VAR_18->me_epb.dma_tag != ((void*)0))
   FUNC_13(VAR_15, &VAR_18->me_epb);
  FUNC_4(VAR_18, VAR_5);
 }
 VAR_16->krp_status = VAR_22;
 FUNC_2(VAR_16);
 return (0);
}
