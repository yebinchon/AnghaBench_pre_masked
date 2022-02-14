
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_rx_statuslen; int sc_rxbuf; int sc_rxdma; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath_softc*,int *,int *,char*,int ,int ) ;
 int FUNC_3 (struct ath_softc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct ath_softc *VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_2(VAR_3, &VAR_3->sc_rxdma, &VAR_3->sc_rxbuf,
     "rx", VAR_2, VAR_3->sc_rx_statuslen);
 if (VAR_4 != 0)
  return VAR_4;

 FUNC_0(VAR_3);
 (void) FUNC_3(VAR_3, VAR_0);
 (void) FUNC_3(VAR_3, VAR_1);
 FUNC_1(VAR_3);

 return (0);
}
