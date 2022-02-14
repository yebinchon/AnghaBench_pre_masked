
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int * sc_rx_rxlist; } ;
struct ath_buf {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 struct ath_buf* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ath_buf*,int ) ;
 int FUNC_4 (struct ath_softc*,struct ath_buf*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct ath_softc *VAR_3)
{
 struct ath_buf *VAR_4;

 FUNC_0(VAR_3);


 while (! FUNC_1(&VAR_3->sc_rx_rxlist[VAR_1])) {
  VAR_4 = FUNC_2(&VAR_3->sc_rx_rxlist[VAR_1]);
  FUNC_3(&VAR_3->sc_rx_rxlist[VAR_1], VAR_4, VAR_2);

  FUNC_4(VAR_3, VAR_4);
 }
 while (! FUNC_1(&VAR_3->sc_rx_rxlist[VAR_0])) {
  VAR_4 = FUNC_2(&VAR_3->sc_rx_rxlist[VAR_0]);
  FUNC_3(&VAR_3->sc_rx_rxlist[VAR_0], VAR_4, VAR_2);

  FUNC_4(VAR_3, VAR_4);
 }
}
