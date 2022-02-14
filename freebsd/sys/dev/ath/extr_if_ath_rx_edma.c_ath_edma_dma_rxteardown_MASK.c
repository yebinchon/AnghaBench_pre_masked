
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dd_desc_len; } ;
struct ath_softc {int sc_rxbuf; TYPE_1__ sc_rxdma; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath_softc*,TYPE_1__*,int *) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*,int ) ;
 int FUNC_5 (struct ath_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ath_softc *VAR_2)
{

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2, VAR_0);
 FUNC_5(VAR_2, VAR_0);

 FUNC_4(VAR_2, VAR_1);
 FUNC_5(VAR_2, VAR_1);
 FUNC_1(VAR_2);



 if (VAR_2->sc_rxdma.dd_desc_len != 0)
  FUNC_2(VAR_2, &VAR_2->sc_rxdma, &VAR_2->sc_rxbuf);

 return (0);
}
