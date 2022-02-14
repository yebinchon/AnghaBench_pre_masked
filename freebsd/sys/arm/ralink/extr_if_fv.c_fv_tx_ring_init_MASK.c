
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fv_txdesc {int * tx_m; } ;
struct TYPE_3__ {int fv_tx_ring_map; int fv_tx_ring_tag; struct fv_txdesc* fv_txdesc; scalar_t__ fv_tx_pkts; scalar_t__ fv_tx_cnt; scalar_t__ fv_tx_cons; scalar_t__ fv_tx_prod; } ;
struct fv_ring_data {TYPE_2__* fv_tx_ring; } ;
struct fv_softc {TYPE_1__ fv_cdata; struct fv_ring_data fv_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int fv_link; scalar_t__ fv_addr; scalar_t__ fv_devcs; scalar_t__ fv_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fv_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_3(struct fv_softc *VAR_4)
{
 struct fv_ring_data *VAR_5;
 struct fv_txdesc *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_4->fv_cdata.fv_tx_prod = 0;
 VAR_4->fv_cdata.fv_tx_cons = 0;
 VAR_4->fv_cdata.fv_tx_cnt = 0;
 VAR_4->fv_cdata.fv_tx_pkts = 0;

 VAR_5 = &VAR_4->fv_rdata;
 FUNC_2(VAR_5->fv_tx_ring, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_8 == VAR_2 - 1)
   VAR_7 = FUNC_0(VAR_4, 0);
  else
   VAR_7 = FUNC_0(VAR_4, VAR_8 + 1);
  VAR_5->fv_tx_ring[VAR_8].fv_stat = 0;
  VAR_5->fv_tx_ring[VAR_8].fv_devcs = 0;
  VAR_5->fv_tx_ring[VAR_8].fv_addr = 0;
  VAR_5->fv_tx_ring[VAR_8].fv_link = VAR_7;
  VAR_6 = &VAR_4->fv_cdata.fv_txdesc[VAR_8];
  VAR_6->tx_m = ((void*)0);
 }

 FUNC_1(VAR_4->fv_cdata.fv_tx_ring_tag,
     VAR_4->fv_cdata.fv_tx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
