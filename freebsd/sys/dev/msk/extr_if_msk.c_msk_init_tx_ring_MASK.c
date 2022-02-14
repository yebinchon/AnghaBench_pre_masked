
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msk_txdesc {int * tx_le; int * tx_m; } ;
struct msk_tx_desc {int dummy; } ;
struct msk_ring_data {int * msk_tx_ring; } ;
struct TYPE_2__ {int msk_tx_ring_map; int msk_tx_ring_tag; struct msk_txdesc* msk_txdesc; scalar_t__ msk_tx_high_addr; scalar_t__ msk_tx_cnt; scalar_t__ msk_tx_cons; scalar_t__ msk_tx_prod; scalar_t__ msk_last_csum; scalar_t__ msk_tso_mtu; } ;
struct msk_if_softc {TYPE_1__ msk_cdata; struct msk_ring_data msk_rdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct msk_if_softc *VAR_3)
{
 struct msk_ring_data *VAR_4;
 struct msk_txdesc *VAR_5;
 int VAR_6;

 VAR_3->msk_cdata.msk_tso_mtu = 0;
 VAR_3->msk_cdata.msk_last_csum = 0;
 VAR_3->msk_cdata.msk_tx_prod = 0;
 VAR_3->msk_cdata.msk_tx_cons = 0;
 VAR_3->msk_cdata.msk_tx_cnt = 0;
 VAR_3->msk_cdata.msk_tx_high_addr = 0;

 VAR_4 = &VAR_3->msk_rdata;
 FUNC_1(VAR_4->msk_tx_ring, sizeof(struct msk_tx_desc) * VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_3->msk_cdata.msk_txdesc[VAR_6];
  VAR_5->tx_m = ((void*)0);
  VAR_5->tx_le = &VAR_4->msk_tx_ring[VAR_6];
 }

 FUNC_0(VAR_3->msk_cdata.msk_tx_ring_tag,
     VAR_3->msk_cdata.msk_tx_ring_map,
     VAR_0 | VAR_1);
}
