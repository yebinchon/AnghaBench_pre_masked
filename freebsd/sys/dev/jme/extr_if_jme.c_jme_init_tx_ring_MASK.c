
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_txdesc {scalar_t__ tx_ndesc; int * tx_desc; int * tx_m; } ;
struct TYPE_2__ {int jme_tx_ring_map; int jme_tx_ring_tag; struct jme_txdesc* jme_txdesc; scalar_t__ jme_tx_cnt; scalar_t__ jme_tx_cons; scalar_t__ jme_tx_prod; } ;
struct jme_ring_data {int * jme_tx_ring; } ;
struct jme_softc {TYPE_1__ jme_cdata; struct jme_ring_data jme_rdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct jme_softc *VAR_4)
{
 struct jme_ring_data *VAR_5;
 struct jme_txdesc *VAR_6;
 int VAR_7;

 VAR_4->jme_cdata.jme_tx_prod = 0;
 VAR_4->jme_cdata.jme_tx_cons = 0;
 VAR_4->jme_cdata.jme_tx_cnt = 0;

 VAR_5 = &VAR_4->jme_rdata;
 FUNC_1(VAR_5->jme_tx_ring, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = &VAR_4->jme_cdata.jme_txdesc[VAR_7];
  VAR_6->tx_m = ((void*)0);
  VAR_6->tx_desc = &VAR_5->jme_tx_ring[VAR_7];
  VAR_6->tx_ndesc = 0;
 }

 FUNC_0(VAR_4->jme_cdata.jme_tx_ring_tag,
     VAR_4->jme_cdata.jme_tx_ring_map,
     VAR_0 | VAR_1);
}
