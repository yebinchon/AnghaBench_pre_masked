
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int q_ctx; int q_mcr; } ;
struct TYPE_6__ {int rng_buf; TYPE_2__ rng_q; } ;
struct ubsec_softc {int sc_flags; int sc_sr; int sc_dmat; int sc_irq; int sc_ih; int sc_mcr2lock; TYPE_3__ sc_rng; int sc_freeqlock; int sc_mcr1lock; int sc_freequeue; scalar_t__ sc_rndtest; int sc_cid; int sc_rngto; } ;
struct ubsec_q {TYPE_1__* q_dma; } ;
typedef int device_t ;
struct TYPE_4__ {int d_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ubsec_softc*,int ) ;
 int FUNC_1 (int *) ;
 struct ubsec_q* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ubsec_softc*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 struct ubsec_softc* FUNC_11 (int ) ;
 int FUNC_12 (struct ubsec_q*,int ) ;
 int FUNC_13 (int *) ;
 int VAR_9 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct ubsec_softc*,int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_10)
{
 struct ubsec_softc *VAR_11 = FUNC_11(VAR_10);




 FUNC_4(VAR_11, VAR_1, FUNC_0(VAR_11, VAR_1) &~
  (VAR_4 | VAR_3 | VAR_2));

 FUNC_9(&VAR_11->sc_rngto);

 FUNC_10(VAR_11->sc_cid);






 while (!FUNC_1(&VAR_11->sc_freequeue)) {
  struct ubsec_q *VAR_12;

  VAR_12 = FUNC_2(&VAR_11->sc_freequeue);
  FUNC_3(&VAR_11->sc_freequeue, VAR_9);
  FUNC_15(VAR_11, &VAR_12->q_dma->d_alloc);
  FUNC_12(VAR_12, VAR_5);
 }
 FUNC_13(&VAR_11->sc_mcr1lock);
 FUNC_13(&VAR_11->sc_freeqlock);

 if (VAR_11->sc_flags & VAR_8) {
  FUNC_15(VAR_11, &VAR_11->sc_rng.rng_q.q_mcr);
  FUNC_15(VAR_11, &VAR_11->sc_rng.rng_q.q_ctx);
  FUNC_15(VAR_11, &VAR_11->sc_rng.rng_buf);
 }

 FUNC_13(&VAR_11->sc_mcr2lock);

 FUNC_6(VAR_10);
 FUNC_8(VAR_10, VAR_11->sc_irq, VAR_11->sc_ih);
 FUNC_7(VAR_10, VAR_6, 0, VAR_11->sc_irq);

 FUNC_5(VAR_11->sc_dmat);
 FUNC_7(VAR_10, VAR_7, VAR_0, VAR_11->sc_sr);

 return (0);
}
