
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_rxbuf; int sc_dmat; } ;
struct ath_buf {int * bf_m; int bf_dmamap; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int *,struct ath_buf*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_1, struct ath_buf *VAR_2)
{

 FUNC_0(VAR_1);





 if (VAR_2->bf_m) {
  FUNC_2(VAR_1->sc_dmat, VAR_2->bf_dmamap);
  FUNC_3(VAR_2->bf_m);
  VAR_2->bf_m = ((void*)0);
 }


 FUNC_1(&VAR_1->sc_rxbuf, VAR_2, VAR_0);
}
