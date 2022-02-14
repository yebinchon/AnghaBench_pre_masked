
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {int flags; int data_dmap; int rndis_pkt_dmap; int rndis_pkt; int * m; struct hn_tx_ring* txr; } ;
struct hn_tx_ring {int hn_tx_data_dtag; int hn_tx_rndis_dtag; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct hn_txdesc *VAR_1)
{
 struct hn_tx_ring *VAR_2 = VAR_1->txr;

 FUNC_0(VAR_1->m == ((void*)0), ("still has mbuf installed"));
 FUNC_0((VAR_1->flags & VAR_0) == 0, ("still dma mapped"));

 FUNC_2(VAR_2->hn_tx_rndis_dtag, VAR_1->rndis_pkt_dmap);
 FUNC_3(VAR_2->hn_tx_rndis_dtag, VAR_1->rndis_pkt,
     VAR_1->rndis_pkt_dmap);
 FUNC_1(VAR_2->hn_tx_data_dtag, VAR_1->data_dmap);
}
