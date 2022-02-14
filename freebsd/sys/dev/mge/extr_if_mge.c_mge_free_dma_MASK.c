
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mge_softc {int mge_desc_dtag; int mge_rx_dtag; int mge_tx_dtag; int mge_tx_desc; int mge_rx_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mge_softc*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mge_softc *VAR_2)
{


 FUNC_1(VAR_2, VAR_2->mge_rx_desc, VAR_0, VAR_2->mge_rx_dtag, 1);
 FUNC_1(VAR_2, VAR_2->mge_tx_desc, VAR_1, VAR_2->mge_tx_dtag, 0);


 FUNC_0(VAR_2->mge_tx_dtag);
 FUNC_0(VAR_2->mge_rx_dtag);

 FUNC_0(VAR_2->mge_desc_dtag);
}
