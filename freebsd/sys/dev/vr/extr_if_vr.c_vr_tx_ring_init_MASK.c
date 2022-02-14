
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vr_txdesc {int * tx_m; } ;
struct TYPE_3__ {int vr_tx_ring_map; int vr_tx_ring_tag; struct vr_txdesc* vr_txdesc; scalar_t__ vr_tx_pkts; scalar_t__ vr_tx_cnt; scalar_t__ vr_tx_cons; scalar_t__ vr_tx_prod; } ;
struct vr_ring_data {TYPE_2__* vr_tx_ring; } ;
struct vr_softc {TYPE_1__ vr_cdata; struct vr_ring_data vr_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int vr_nextphys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vr_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct vr_softc *VAR_4)
{
 struct vr_ring_data *VAR_5;
 struct vr_txdesc *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_4->vr_cdata.vr_tx_prod = 0;
 VAR_4->vr_cdata.vr_tx_cons = 0;
 VAR_4->vr_cdata.vr_tx_cnt = 0;
 VAR_4->vr_cdata.vr_tx_pkts = 0;

 VAR_5 = &VAR_4->vr_rdata;
 FUNC_3(VAR_5->vr_tx_ring, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_8 == VAR_2 - 1)
   VAR_7 = FUNC_1(VAR_4, 0);
  else
   VAR_7 = FUNC_1(VAR_4, VAR_8 + 1);
  VAR_5->vr_tx_ring[VAR_8].vr_nextphys = FUNC_4(FUNC_0(VAR_7));
  VAR_6 = &VAR_4->vr_cdata.vr_txdesc[VAR_8];
  VAR_6->tx_m = ((void*)0);
 }

 FUNC_2(VAR_4->vr_cdata.vr_tx_ring_tag,
     VAR_4->vr_cdata.vr_tx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
