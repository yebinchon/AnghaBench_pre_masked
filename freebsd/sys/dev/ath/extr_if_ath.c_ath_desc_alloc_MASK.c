
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_txbuf_mgmt; int sc_txdma_mgmt; int sc_txbuf; int sc_txdma; int sc_tx_desclen; int sc_bbuf; int sc_bdma; int sc_txbuf_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*,int *,int *) ;
 int FUNC_1 (struct ath_softc*,int *,int *,char*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct ath_softc *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_5->sc_txdma, &VAR_5->sc_txbuf,
      "tx", VAR_5->sc_tx_desclen, VAR_3, VAR_1);
 if (VAR_6 != 0) {
  return VAR_6;
 }
 VAR_5->sc_txbuf_cnt = VAR_3;

 VAR_6 = FUNC_1(VAR_5, &VAR_5->sc_txdma_mgmt, &VAR_5->sc_txbuf_mgmt,
      "tx_mgmt", VAR_5->sc_tx_desclen, VAR_4,
      VAR_2);
 if (VAR_6 != 0) {
  FUNC_0(VAR_5, &VAR_5->sc_txdma, &VAR_5->sc_txbuf);
  return VAR_6;
 }






 VAR_6 = FUNC_1(VAR_5, &VAR_5->sc_bdma, &VAR_5->sc_bbuf,
   "beacon", VAR_5->sc_tx_desclen, VAR_0, 1);
 if (VAR_6 != 0) {
  FUNC_0(VAR_5, &VAR_5->sc_txdma, &VAR_5->sc_txbuf);
  FUNC_0(VAR_5, &VAR_5->sc_txdma_mgmt,
      &VAR_5->sc_txbuf_mgmt);
  return VAR_6;
 }
 return 0;
}
