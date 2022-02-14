
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {scalar_t__ dma_vaddr; } ;
struct TYPE_5__ {TYPE_3__ q_mcr; TYPE_3__ q_ctx; } ;
struct TYPE_6__ {TYPE_1__ rng_q; TYPE_3__ rng_buf; } ;
struct ubsec_softc {int sc_statmask; int sc_flags; scalar_t__ sc_cid; int sc_rnghz; int * sc_sr; int * sc_irq; int sc_ih; int sc_mcr2lock; int sc_rngto; TYPE_2__ sc_rng; void* sc_harvest; scalar_t__ sc_rndtest; int sc_dev; int sc_freeqlock; int sc_mcr1lock; int sc_freequeue; struct ubsec_q** sc_queuea; struct ubsec_dma* sc_dmaa; int sc_dmat; int sc_sh; int sc_st; int sc_q2free; int sc_qchip2; int sc_queue2; int sc_qchip; int sc_queue; } ;
struct ubsec_session {int dummy; } ;
struct ubsec_q {struct ubsec_dma* q_dma; } ;
struct ubsec_mcr {int dummy; } ;
struct ubsec_dmachunk {int dummy; } ;
struct ubsec_dma {TYPE_3__ d_alloc; struct ubsec_dmachunk* d_dma; } ;
struct ubsec_ctx_rngbypass {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ubsec_q*,int ) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ,int *,int *,int,int ,int,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int,int *,int ,struct ubsec_softc*,int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct ubsec_softc*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int ,struct ubsec_softc*) ;
 scalar_t__ FUNC_11 (int ,int,int ) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (scalar_t__,int ,int ,int ) ;
 int FUNC_14 (scalar_t__) ;
 void* VAR_47 ;
 int FUNC_15 (int ) ;
 struct ubsec_softc* FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (struct ubsec_q*,int ) ;
 int VAR_48 ;
 scalar_t__ FUNC_19 (int,int ,int ) ;
 int FUNC_20 (int *,int ,char*,int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int VAR_49 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ) ;
 void* VAR_50 ;
 int FUNC_27 (struct ubsec_softc*,TYPE_3__*) ;
 scalar_t__ FUNC_28 (struct ubsec_softc*,int,TYPE_3__*,int ) ;
 int FUNC_29 (struct ubsec_softc*) ;
 int FUNC_30 (int ) ;
 int VAR_51 ;
 int FUNC_31 (struct ubsec_softc*) ;
 int FUNC_32 (struct ubsec_softc*) ;
 int VAR_52 ;

__attribute__((used)) static int
FUNC_33(device_t VAR_53)
{
 struct ubsec_softc *VAR_54 = FUNC_16(VAR_53);
 struct ubsec_dma *VAR_55;
 u_int32_t VAR_56;
 int VAR_57;

 FUNC_8(VAR_54, sizeof (*VAR_54));
 VAR_54->sc_dev = VAR_53;

 FUNC_0(&VAR_54->sc_queue);
 FUNC_0(&VAR_54->sc_qchip);
 FUNC_0(&VAR_54->sc_queue2);
 FUNC_0(&VAR_54->sc_qchip2);
 FUNC_0(&VAR_54->sc_q2free);



 VAR_54->sc_statmask = VAR_3 | VAR_1;

 if (FUNC_23(VAR_53) == VAR_32 &&
     FUNC_22(VAR_53) == VAR_22)
  VAR_54->sc_flags |= VAR_42 | VAR_44;

 if (FUNC_23(VAR_53) == VAR_33 &&
     (FUNC_22(VAR_53) == VAR_23 ||
      FUNC_22(VAR_53) == VAR_24))
  VAR_54->sc_flags |= VAR_42 | VAR_44;

 if (FUNC_23(VAR_53) == VAR_33 &&
     FUNC_22(VAR_53) == VAR_25)
  VAR_54->sc_flags |= VAR_42 | VAR_44 |
      VAR_43 | VAR_41 | VAR_40;

 if ((FUNC_23(VAR_53) == VAR_33 &&
      (FUNC_22(VAR_53) == VAR_26 ||
       FUNC_22(VAR_53) == VAR_27 ||
       FUNC_22(VAR_53) == VAR_28 ||
       FUNC_22(VAR_53) == VAR_29)) ||
     (FUNC_23(VAR_53) == VAR_34 &&
      (FUNC_22(VAR_53) == VAR_31 ||
       FUNC_22(VAR_53) == VAR_30))) {

  VAR_54->sc_statmask |= VAR_2 |
      VAR_4;
  VAR_54->sc_flags |= VAR_42 | VAR_44 |
      VAR_43 | VAR_41 | VAR_40;
 }

 FUNC_21(VAR_53);




 VAR_57 = VAR_0;
 VAR_54->sc_sr = FUNC_2(VAR_53, VAR_38, &VAR_57,
        VAR_35);
 if (VAR_54->sc_sr == ((void*)0)) {
  FUNC_17(VAR_53, "cannot map register space\n");
  goto bad;
 }
 VAR_54->sc_st = FUNC_25(VAR_54->sc_sr);
 VAR_54->sc_sh = FUNC_24(VAR_54->sc_sr);




 VAR_57 = 0;
 VAR_54->sc_irq = FUNC_2(VAR_53, VAR_37, &VAR_57,
         VAR_36|VAR_35);
 if (VAR_54->sc_irq == ((void*)0)) {
  FUNC_17(VAR_53, "could not map interrupt\n");
  goto bad1;
 }




 if (FUNC_6(VAR_53, VAR_54->sc_irq, VAR_18 | VAR_17,
      ((void*)0), VAR_51, VAR_54, &VAR_54->sc_ih)) {
  FUNC_17(VAR_53, "could not establish interrupt\n");
  goto bad2;
 }

 VAR_54->sc_cid = FUNC_11(VAR_53, sizeof(struct ubsec_session),
     VAR_11);
 if (VAR_54->sc_cid < 0) {
  FUNC_17(VAR_53, "could not get crypto driver id\n");
  goto bad3;
 }




 if (FUNC_3(FUNC_4(VAR_53),
          1, 0,
          VAR_8,
          VAR_7,
          ((void*)0), ((void*)0),
          0x3ffff,
          VAR_46,
          0xffff,
          VAR_6,
          ((void*)0), ((void*)0),
          &VAR_54->sc_dmat)) {
  FUNC_17(VAR_53, "cannot allocate DMA tag\n");
  goto bad4;
 }
 FUNC_0(&VAR_54->sc_freequeue);
 VAR_55 = VAR_54->sc_dmaa;
 for (VAR_56 = 0; VAR_56 < VAR_45; VAR_56++, VAR_55++) {
  struct ubsec_q *VAR_58;

  VAR_58 = (struct ubsec_q *)FUNC_19(sizeof(struct ubsec_q),
      VAR_20, VAR_21);
  if (VAR_58 == ((void*)0)) {
   FUNC_17(VAR_53, "cannot allocate queue buffers\n");
   break;
  }

  if (FUNC_28(VAR_54, sizeof(struct ubsec_dmachunk),
      &VAR_55->d_alloc, 0)) {
   FUNC_17(VAR_53, "cannot allocate dma buffers\n");
   FUNC_18(VAR_58, VAR_20);
   break;
  }
  VAR_55->d_dma = (struct ubsec_dmachunk *)VAR_55->d_alloc.dma_vaddr;

  VAR_58->q_dma = VAR_55;
  VAR_54->sc_queuea[VAR_56] = VAR_58;

  FUNC_1(&VAR_54->sc_freequeue, VAR_58, VAR_49);
 }
 FUNC_20(&VAR_54->sc_mcr1lock, FUNC_15(VAR_53),
  "mcr1 operations", VAR_19);
 FUNC_20(&VAR_54->sc_freeqlock, FUNC_15(VAR_53),
  "mcr1 free q", VAR_19);

 FUNC_17(VAR_54->sc_dev, "%s\n", FUNC_31(VAR_54));

 FUNC_13(VAR_54->sc_cid, VAR_12, 0, 0);
 FUNC_13(VAR_54->sc_cid, VAR_13, 0, 0);
 FUNC_13(VAR_54->sc_cid, VAR_14, 0, 0);
 FUNC_13(VAR_54->sc_cid, VAR_15, 0, 0);




 FUNC_32(VAR_54);




 FUNC_30(VAR_53);




 FUNC_29(VAR_54);


 if (VAR_54->sc_flags & VAR_44) {
  VAR_54->sc_statmask |= VAR_5;







  VAR_54->sc_harvest = VAR_47;


  if (FUNC_28(VAR_54, sizeof(struct ubsec_mcr),
      &VAR_54->sc_rng.rng_q.q_mcr, 0))
   goto skip_rng;

  if (FUNC_28(VAR_54, sizeof(struct ubsec_ctx_rngbypass),
      &VAR_54->sc_rng.rng_q.q_ctx, 0)) {
   FUNC_27(VAR_54, &VAR_54->sc_rng.rng_q.q_mcr);
   goto skip_rng;
  }

  if (FUNC_28(VAR_54, sizeof(u_int32_t) *
      VAR_39, &VAR_54->sc_rng.rng_buf, 0)) {
   FUNC_27(VAR_54, &VAR_54->sc_rng.rng_q.q_ctx);
   FUNC_27(VAR_54, &VAR_54->sc_rng.rng_q.q_mcr);
   goto skip_rng;
  }

  if (VAR_48 >= 100)
   VAR_54->sc_rnghz = VAR_48 / 100;
  else
   VAR_54->sc_rnghz = 1;
  FUNC_9(&VAR_54->sc_rngto, 1);
  FUNC_10(&VAR_54->sc_rngto, VAR_54->sc_rnghz, VAR_52, VAR_54);
skip_rng:
 ;
 }

 FUNC_20(&VAR_54->sc_mcr2lock, FUNC_15(VAR_53),
  "mcr2 operations", VAR_19);

 if (VAR_54->sc_flags & VAR_42) {
  VAR_54->sc_statmask |= VAR_5;

  FUNC_12(VAR_54->sc_cid, VAR_9, 0);



 }
 return (0);
bad4:
 FUNC_14(VAR_54->sc_cid);
bad3:
 FUNC_7(VAR_53, VAR_54->sc_irq, VAR_54->sc_ih);
bad2:
 FUNC_5(VAR_53, VAR_37, 0, VAR_54->sc_irq);
bad1:
 FUNC_5(VAR_53, VAR_38, VAR_0, VAR_54->sc_sr);
bad:
 return (VAR_16);
}
