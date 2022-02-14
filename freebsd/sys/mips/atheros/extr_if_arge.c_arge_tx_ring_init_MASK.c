
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arge_txdesc {int * tx_m; } ;
struct TYPE_3__ {int arge_tx_ring_map; int arge_tx_ring_tag; struct arge_txdesc* arge_txdesc; scalar_t__ arge_tx_cnt; scalar_t__ arge_tx_cons; scalar_t__ arge_tx_prod; } ;
struct arge_ring_data {TYPE_2__* arge_tx_ring; } ;
struct arge_softc {TYPE_1__ arge_cdata; struct arge_ring_data arge_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int next_desc; int packet_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct arge_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(struct arge_softc *VAR_4)
{
 struct arge_ring_data *VAR_5;
 struct arge_txdesc *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_4->arge_cdata.arge_tx_prod = 0;
 VAR_4->arge_cdata.arge_tx_cons = 0;
 VAR_4->arge_cdata.arge_tx_cnt = 0;

 VAR_5 = &VAR_4->arge_rdata;
 FUNC_2(VAR_5->arge_tx_ring, sizeof(*VAR_5->arge_tx_ring));
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_8 == VAR_1 - 1)
   VAR_7 = FUNC_0(VAR_4, 0);
  else
   VAR_7 = FUNC_0(VAR_4, VAR_8 + 1);
  VAR_5->arge_tx_ring[VAR_8].packet_ctrl = VAR_0;
  VAR_5->arge_tx_ring[VAR_8].next_desc = VAR_7;
  VAR_6 = &VAR_4->arge_cdata.arge_txdesc[VAR_8];
  VAR_6->tx_m = ((void*)0);
 }

 FUNC_1(VAR_4->arge_cdata.arge_tx_ring_tag,
     VAR_4->arge_cdata.arge_tx_ring_map,
     VAR_2 | VAR_3);

 return (0);
}
