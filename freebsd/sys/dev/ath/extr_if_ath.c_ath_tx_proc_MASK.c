
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_softc {int sc_txproc_cnt; int sc_txrix; scalar_t__ sc_softled; scalar_t__ sc_wd_timer; int sc_ah; int sc_lastrx; int * sc_txq; int sc_txq_active; } ;


 int FUNC_0 (struct ath_softc*,int ,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 scalar_t__ FUNC_4 (struct ath_softc*,int) ;
 int FUNC_5 (struct ath_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ath_softc*,int ) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*,int ) ;
 int FUNC_11 (struct ath_softc*) ;
 scalar_t__ FUNC_12 (struct ath_softc*,int *,int) ;

__attribute__((used)) static void
FUNC_13(void *VAR_3, int VAR_4)
{
 struct ath_softc *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 uint32_t VAR_8;

 FUNC_2(VAR_5);
 VAR_5->sc_txproc_cnt++;
 VAR_8 = VAR_5->sc_txq_active;
 VAR_5->sc_txq_active &= ~VAR_8;
 FUNC_3(VAR_5);

 FUNC_1(VAR_5);
 FUNC_10(VAR_5, VAR_2);
 FUNC_5(VAR_5);

 FUNC_0(VAR_5, VAR_0, 1, "ath_tx_proc: txqs=0x%08x", VAR_8);




 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (FUNC_4(VAR_5, VAR_6) && FUNC_6(VAR_8, VAR_6))
   VAR_7 += FUNC_12(VAR_5, &VAR_5->sc_txq[VAR_6], 1);
 if (VAR_7)
  VAR_5->sc_lastrx = FUNC_7(VAR_5->sc_ah);

 VAR_5->sc_wd_timer = 0;

 if (VAR_5->sc_softled)
  FUNC_8(VAR_5, VAR_5->sc_txrix);

 FUNC_2(VAR_5);
 VAR_5->sc_txproc_cnt--;
 FUNC_3(VAR_5);

 FUNC_1(VAR_5);
 FUNC_9(VAR_5);
 FUNC_5(VAR_5);

 FUNC_11(VAR_5);
}
