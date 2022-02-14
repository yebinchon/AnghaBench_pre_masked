
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msk_rxdesc {struct msk_rx_desc* rx_le; struct mbuf* rx_m; } ;
struct msk_rx_desc {void* msk_control; } ;
struct TYPE_2__ {struct msk_rxdesc* msk_rxdesc; } ;
struct msk_if_softc {TYPE_1__ msk_cdata; } ;
struct mbuf {int m_len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static __inline void
FUNC_2(struct msk_if_softc *VAR_4, int VAR_5)
{
 struct msk_rx_desc *VAR_6;
 struct msk_rxdesc *VAR_7;
 struct mbuf *VAR_8;







 VAR_7 = &VAR_4->msk_cdata.msk_rxdesc[VAR_5];
 VAR_8 = VAR_7->rx_m;
 VAR_6 = VAR_7->rx_le;
 VAR_6->msk_control = FUNC_1(VAR_8->m_len | VAR_3 | VAR_0);
}
