
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_softc {int sc_txproc_cnt; int sc_txrix; scalar_t__ sc_softled; scalar_t__ sc_wd_timer; TYPE_1__* sc_cabq; int sc_ah; int sc_lastrx; TYPE_1__* sc_txq; int sc_txq_active; } ;
struct TYPE_2__ {int axq_qnum; } ;


 int FUNC_0 (struct ath_softc*,int ,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ath_softc*,int ) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*,int ) ;
 int FUNC_10 (struct ath_softc*) ;
 scalar_t__ FUNC_11 (struct ath_softc*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_12(void *VAR_2, int VAR_3)
{
 struct ath_softc *VAR_4 = VAR_2;
 uint32_t VAR_5;

 FUNC_2(VAR_4);
 VAR_4->sc_txproc_cnt++;
 VAR_5 = VAR_4->sc_txq_active;
 VAR_4->sc_txq_active &= ~VAR_5;
 FUNC_3(VAR_4);

 FUNC_1(VAR_4);
 FUNC_9(VAR_4, VAR_1);
 FUNC_4(VAR_4);

 FUNC_0(VAR_4, VAR_0, 1,
     "ath_tx_proc_q0: txqs=0x%08x", VAR_5);

 if (FUNC_5(VAR_5, 0) && FUNC_11(VAR_4, &VAR_4->sc_txq[0], 1))

  VAR_4->sc_lastrx = FUNC_6(VAR_4->sc_ah);
 if (FUNC_5(VAR_5, VAR_4->sc_cabq->axq_qnum))
  FUNC_11(VAR_4, VAR_4->sc_cabq, 1);
 VAR_4->sc_wd_timer = 0;

 if (VAR_4->sc_softled)
  FUNC_7(VAR_4, VAR_4->sc_txrix);

 FUNC_2(VAR_4);
 VAR_4->sc_txproc_cnt--;
 FUNC_3(VAR_4);

 FUNC_1(VAR_4);
 FUNC_8(VAR_4);
 FUNC_4(VAR_4);

 FUNC_10(VAR_4);
}
