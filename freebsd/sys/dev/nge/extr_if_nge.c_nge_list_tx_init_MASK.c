
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nge_txdesc {int * tx_m; } ;
struct TYPE_3__ {int nge_tx_ring_map; int nge_tx_ring_tag; struct nge_txdesc* nge_txdesc; scalar_t__ nge_tx_cnt; scalar_t__ nge_tx_cons; scalar_t__ nge_tx_prod; } ;
struct nge_ring_data {TYPE_2__* nge_tx_ring; } ;
struct nge_softc {TYPE_1__ nge_cdata; struct nge_ring_data nge_rdata; } ;
struct nge_desc {int dummy; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int nge_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nge_softc*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nge_softc *VAR_3)
{
 struct nge_ring_data *VAR_4;
 struct nge_txdesc *VAR_5;
 bus_addr_t VAR_6;
 int VAR_7;

 VAR_3->nge_cdata.nge_tx_prod = 0;
 VAR_3->nge_cdata.nge_tx_cons = 0;
 VAR_3->nge_cdata.nge_tx_cnt = 0;

 VAR_4 = &VAR_3->nge_rdata;
 FUNC_3(VAR_4->nge_tx_ring, sizeof(struct nge_desc) * VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_7 == VAR_2 - 1)
   VAR_6 = FUNC_1(VAR_3, 0);
  else
   VAR_6 = FUNC_1(VAR_3, VAR_7 + 1);
  VAR_4->nge_tx_ring[VAR_7].nge_next = FUNC_4(FUNC_0(VAR_6));
  VAR_5 = &VAR_3->nge_cdata.nge_txdesc[VAR_7];
  VAR_5->tx_m = ((void*)0);
 }

 FUNC_2(VAR_3->nge_cdata.nge_tx_ring_tag,
     VAR_3->nge_cdata.nge_tx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
