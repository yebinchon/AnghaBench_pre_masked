
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fv_rx_ring_map; int fv_rx_ring_tag; struct fv_rxdesc* fv_rxdesc; scalar_t__ fv_rx_cons; } ;
struct fv_ring_data {TYPE_2__* fv_rx_ring; } ;
struct fv_softc {TYPE_1__ fv_cdata; struct fv_ring_data fv_rdata; } ;
struct fv_rxdesc {TYPE_2__* desc; int * rx_m; } ;
struct TYPE_4__ {scalar_t__ fv_addr; int fv_devcs; int fv_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (struct fv_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct fv_softc *VAR_7)
{
 struct fv_ring_data *VAR_8;
 struct fv_rxdesc *VAR_9;
 int VAR_10;

 VAR_7->fv_cdata.fv_rx_cons = 0;

 VAR_8 = &VAR_7->fv_rdata;
 FUNC_1(VAR_8->fv_rx_ring, VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_9 = &VAR_7->fv_cdata.fv_rxdesc[VAR_10];
  VAR_9->rx_m = ((void*)0);
  VAR_9->desc = &VAR_8->fv_rx_ring[VAR_10];
  VAR_8->fv_rx_ring[VAR_10].fv_stat = VAR_1;
  VAR_8->fv_rx_ring[VAR_10].fv_devcs = 0;
  if (VAR_10 == VAR_5 - 1)
   VAR_8->fv_rx_ring[VAR_10].fv_devcs |= VAR_0;
  VAR_8->fv_rx_ring[VAR_10].fv_addr = 0;
  if (FUNC_2(VAR_7, VAR_10) != 0)
   return (VAR_4);
 }

 FUNC_0(VAR_7->fv_cdata.fv_rx_ring_tag,
     VAR_7->fv_cdata.fv_rx_ring_map,
     VAR_2 | VAR_3);

 return (0);
}
