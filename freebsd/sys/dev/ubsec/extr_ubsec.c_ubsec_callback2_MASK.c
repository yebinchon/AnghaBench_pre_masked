
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct ubsec_softc {int sc_flags; int sc_dev; int sc_q2free; int sc_rnghz; int sc_rngto; int sc_rndtest; int (* sc_harvest ) (int ,scalar_t__,int) ;} ;
struct TYPE_6__ {int dma_size; scalar_t__ dma_vaddr; } ;
struct TYPE_8__ {TYPE_2__ q_ctx; } ;
struct TYPE_7__ {int dma_size; scalar_t__ dma_vaddr; } ;
struct ubsec_q2_rsapriv {TYPE_4__ rpr_q; TYPE_3__ rpr_msgout; TYPE_3__ rpr_msgin; struct cryptkop* rpr_krp; } ;
struct ubsec_q2_rng {int rng_used; TYPE_3__ rng_buf; } ;
struct ubsec_q2_modexp {TYPE_4__ me_q; TYPE_3__ me_C; TYPE_3__ me_M; TYPE_3__ me_E; int me_normbits; int me_shiftbits; int me_modbits; TYPE_3__ me_epb; struct cryptkop* me_krp; } ;
struct ubsec_q2 {int q_type; TYPE_3__ q_ctx; } ;
struct ubsec_ctx_keyop {int ctx_op; } ;
struct cryptkop {size_t krp_iparams; TYPE_1__* krp_param; int krp_status; } ;
struct TYPE_5__ {scalar_t__ crp_p; int crp_nbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int VAR_3 ;



 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int ,int ,struct ubsec_softc*) ;
 int FUNC_4 (struct cryptkop*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_10(struct ubsec_softc *VAR_8, struct ubsec_q2 *VAR_9)
{
 struct cryptkop *VAR_10;
 struct ubsec_ctx_keyop *VAR_11;

 VAR_11 = (struct ubsec_ctx_keyop *)VAR_9->q_ctx.dma_vaddr;
 FUNC_8(&VAR_9->q_ctx, VAR_1);

 switch (VAR_9->q_type) {

 case 129: {
  struct ubsec_q2_rng *VAR_12 = (struct ubsec_q2_rng *)VAR_9;

  FUNC_8(&VAR_12->rng_buf, VAR_0);
  (*VAR_8->sc_harvest)(VAR_8->sc_rndtest,
   VAR_12->rng_buf.dma_vaddr,
   VAR_3*sizeof (u_int32_t));
  VAR_12->rng_used = 0;
  FUNC_3(&VAR_8->sc_rngto, VAR_8->sc_rnghz, VAR_7, VAR_8);
  break;
 }

 case 130: {
  struct ubsec_q2_modexp *VAR_13 = (struct ubsec_q2_modexp *)VAR_9;
  u_int VAR_14, VAR_15;

  VAR_10 = VAR_13->me_krp;
  VAR_14 = (VAR_13->me_modbits + 7) / 8;
  VAR_15 = (VAR_10->krp_param[VAR_10->krp_iparams].crp_nbits + 7) / 8;

  FUNC_8(&VAR_13->me_M, VAR_1);
  FUNC_8(&VAR_13->me_E, VAR_1);
  FUNC_8(&VAR_13->me_C, VAR_0);
  FUNC_8(&VAR_13->me_epb, VAR_1);

  if (VAR_15 < VAR_14)
   VAR_10->krp_status = VAR_2;
  else {
   if (VAR_8->sc_flags & VAR_4) {
    FUNC_2(VAR_10->krp_param[VAR_10->krp_iparams].crp_p,
        (VAR_10->krp_param[VAR_10->krp_iparams].crp_nbits
     + 7) / 8);
    FUNC_1(VAR_13->me_C.dma_vaddr,
        VAR_10->krp_param[VAR_10->krp_iparams].crp_p,
        (VAR_13->me_modbits + 7) / 8);
   } else
    FUNC_9(VAR_13->me_shiftbits,
        VAR_13->me_C.dma_vaddr, VAR_13->me_normbits,
        VAR_10->krp_param[VAR_10->krp_iparams].crp_p,
        VAR_10->krp_param[VAR_10->krp_iparams].crp_nbits);
  }

  FUNC_4(VAR_10);


  FUNC_2(VAR_13->me_E.dma_vaddr, VAR_13->me_E.dma_size);
  FUNC_2(VAR_13->me_M.dma_vaddr, VAR_13->me_M.dma_size);
  FUNC_2(VAR_13->me_C.dma_vaddr, VAR_13->me_C.dma_size);
  FUNC_2(VAR_13->me_q.q_ctx.dma_vaddr, VAR_13->me_q.q_ctx.dma_size);


  FUNC_0(&VAR_8->sc_q2free, &VAR_13->me_q, VAR_6);
  break;
 }
 case 128: {
  struct ubsec_q2_rsapriv *VAR_16 = (struct ubsec_q2_rsapriv *)VAR_9;
  u_int VAR_17;

  VAR_10 = VAR_16->rpr_krp;
  FUNC_8(&VAR_16->rpr_msgin, VAR_1);
  FUNC_8(&VAR_16->rpr_msgout, VAR_0);

  VAR_17 = (VAR_10->krp_param[VAR_5].crp_nbits + 7) / 8;
  FUNC_1(VAR_16->rpr_msgout.dma_vaddr,
      VAR_10->krp_param[VAR_5].crp_p, VAR_17);

  FUNC_4(VAR_10);

  FUNC_2(VAR_16->rpr_msgin.dma_vaddr, VAR_16->rpr_msgin.dma_size);
  FUNC_2(VAR_16->rpr_msgout.dma_vaddr, VAR_16->rpr_msgout.dma_size);
  FUNC_2(VAR_16->rpr_q.q_ctx.dma_vaddr, VAR_16->rpr_q.q_ctx.dma_size);


  FUNC_0(&VAR_8->sc_q2free, &VAR_16->rpr_q, VAR_6);
  break;
 }
 default:
  FUNC_5(VAR_8->sc_dev, "unknown ctx op: %x\n",
      FUNC_6(VAR_11->ctx_op));
  break;
 }
}
