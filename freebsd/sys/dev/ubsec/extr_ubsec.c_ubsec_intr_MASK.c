
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct ubsec_softc {int volatile sc_statmask; int sc_nqchip; int sc_flags; int sc_needwakeup; int sc_cid; int sc_freeqlock; int sc_dev; int sc_mcr1lock; int sc_mcr2lock; int sc_qchip2; int sc_qchip; } ;
struct TYPE_8__ {scalar_t__ dma_vaddr; } ;
struct ubsec_q2 {TYPE_4__ q_mcr; } ;
struct ubsec_q {int q_nstacked_mcrs; struct ubsec_q** q_stacked_mcr; struct ubsec_dma* q_dma; } ;
struct ubsec_mcr {int mcr_flags; } ;
struct ubsec_dma {TYPE_2__* d_dma; } ;
struct TYPE_7__ {int hst_dmaerr; } ;
struct TYPE_5__ {int mcr_flags; } ;
struct TYPE_6__ {TYPE_1__ d_mcr; } ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int volatile VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ubsec_softc*,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ubsec_softc*,int ,int volatile) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,int volatile) ;
 int VAR_16 ;
 int FUNC_11 (struct ubsec_softc*,struct ubsec_q*) ;
 int FUNC_12 (struct ubsec_softc*,struct ubsec_q2*) ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (struct ubsec_softc*) ;
 int FUNC_15 (struct ubsec_softc*) ;
 int FUNC_16 (struct ubsec_softc*) ;
 TYPE_3__ VAR_18 ;

__attribute__((used)) static void
FUNC_17(void *VAR_19)
{
 struct ubsec_softc *VAR_20 = VAR_19;
 volatile u_int32_t VAR_21;
 struct ubsec_q *VAR_22;
 struct ubsec_dma *VAR_23;
 int VAR_24 = 0, VAR_25;

 VAR_21 = FUNC_0(VAR_20, VAR_3);
 VAR_21 &= VAR_20->sc_statmask;
 if (VAR_21 == 0)
  return;

 FUNC_4(VAR_20, VAR_3, VAR_21);




 if ((VAR_21 & VAR_5)) {
  FUNC_8(&VAR_20->sc_mcr1lock);
  while (!FUNC_1(&VAR_20->sc_qchip)) {
   VAR_22 = FUNC_2(&VAR_20->sc_qchip);
   VAR_23 = VAR_22->q_dma;

   if ((VAR_23->d_dma->d_mcr.mcr_flags & FUNC_7(VAR_15)) == 0)
    break;

   FUNC_3(&VAR_20->sc_qchip, VAR_16);

   VAR_24 = VAR_22->q_nstacked_mcrs;
   VAR_20->sc_nqchip -= 1+VAR_24;





   for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
    if(VAR_22->q_stacked_mcr[VAR_25]) {
     FUNC_11(VAR_20, VAR_22->q_stacked_mcr[VAR_25]);
    } else {
     break;
    }
   }
   FUNC_11(VAR_20, VAR_22);
  }




  if (!(VAR_21 & VAR_4))
   FUNC_14(VAR_20);
  FUNC_9(&VAR_20->sc_mcr1lock);
 }




 if ((VAR_20->sc_flags & (VAR_13|VAR_14)) &&
     (VAR_21 & VAR_6)) {
  struct ubsec_q2 *VAR_26;
  struct ubsec_mcr *VAR_27;

  FUNC_8(&VAR_20->sc_mcr2lock);
  while (!FUNC_1(&VAR_20->sc_qchip2)) {
   VAR_26 = FUNC_2(&VAR_20->sc_qchip2);

   FUNC_13(&VAR_26->q_mcr,
       VAR_7|VAR_8);

   VAR_27 = (struct ubsec_mcr *)VAR_26->q_mcr.dma_vaddr;
   if ((VAR_27->mcr_flags & FUNC_7(VAR_15)) == 0) {
    FUNC_13(&VAR_26->q_mcr,
        VAR_9|VAR_10);
    break;
   }
   FUNC_3(&VAR_20->sc_qchip2, VAR_16);
   FUNC_12(VAR_20, VAR_26);




   if (!(VAR_21 & VAR_4))
    FUNC_15(VAR_20);
  }
  FUNC_9(&VAR_20->sc_mcr2lock);
 }




 if (VAR_21 & VAR_4) {
  VAR_18.hst_dmaerr++;
  FUNC_8(&VAR_20->sc_mcr1lock);
  FUNC_16(VAR_20);
  FUNC_14(VAR_20);
  FUNC_9(&VAR_20->sc_mcr1lock);
 }

 if (VAR_20->sc_needwakeup) {
  int VAR_28;

  FUNC_8(&VAR_20->sc_freeqlock);
  VAR_28 = VAR_20->sc_needwakeup & (VAR_12|VAR_11);





  VAR_20->sc_needwakeup &= ~VAR_28;
  FUNC_9(&VAR_20->sc_freeqlock);
  FUNC_5(VAR_20->sc_cid, VAR_28);
 }
}
