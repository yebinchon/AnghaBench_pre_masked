
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vge_txdesc {int * tx_desc; int * tx_m; } ;
struct TYPE_2__ {int vge_tx_ring_map; int vge_tx_ring_tag; struct vge_txdesc* vge_txdesc; scalar_t__ vge_tx_cnt; scalar_t__ vge_tx_considx; scalar_t__ vge_tx_prodidx; } ;
struct vge_ring_data {int * vge_tx_ring; } ;
struct vge_softc {TYPE_1__ vge_cdata; struct vge_ring_data vge_rdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vge_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct vge_softc *VAR_4)
{
 struct vge_ring_data *VAR_5;
 struct vge_txdesc *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 VAR_4->vge_cdata.vge_tx_prodidx = 0;
 VAR_4->vge_cdata.vge_tx_considx = 0;
 VAR_4->vge_cdata.vge_tx_cnt = 0;

 VAR_5 = &VAR_4->vge_rdata;
 FUNC_2(VAR_5->vge_tx_ring, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = &VAR_4->vge_cdata.vge_txdesc[VAR_7];
  VAR_6->tx_m = ((void*)0);
  VAR_6->tx_desc = &VAR_5->vge_tx_ring[VAR_7];
 }

 FUNC_1(VAR_4->vge_cdata.vge_tx_ring_tag,
     VAR_4->vge_cdata.vge_tx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
