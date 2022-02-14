
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int are_rx_ring_map; int are_rx_ring_tag; struct are_rxdesc* are_rxdesc; scalar_t__ are_rx_cons; } ;
struct are_ring_data {TYPE_2__* are_rx_ring; } ;
struct are_softc {TYPE_1__ are_cdata; struct are_ring_data are_rdata; } ;
struct are_rxdesc {TYPE_2__* desc; int * rx_m; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int are_link; scalar_t__ are_addr; int are_devcs; int are_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct are_softc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct are_softc*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(struct are_softc *VAR_8)
{
 struct are_ring_data *VAR_9;
 struct are_rxdesc *VAR_10;
 bus_addr_t VAR_11;
 int VAR_12;

 VAR_8->are_cdata.are_rx_cons = 0;

 VAR_9 = &VAR_8->are_rdata;
 FUNC_3(VAR_9->are_rx_ring, VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10 = &VAR_8->are_cdata.are_rxdesc[VAR_12];
  VAR_10->rx_m = ((void*)0);
  VAR_10->desc = &VAR_9->are_rx_ring[VAR_12];
  if (VAR_12 == VAR_3 - 1)
   VAR_11 = FUNC_0(VAR_8, 0);
  else
   VAR_11 = FUNC_0(VAR_8, VAR_12 + 1);
  VAR_9->are_rx_ring[VAR_12].are_stat = VAR_2;
  VAR_9->are_rx_ring[VAR_12].are_devcs = VAR_0;
  if (VAR_12 == VAR_3 - 1)
   VAR_9->are_rx_ring[VAR_12].are_devcs |= VAR_1;
  VAR_9->are_rx_ring[VAR_12].are_addr = 0;
  VAR_9->are_rx_ring[VAR_12].are_link = VAR_11;
  if (FUNC_1(VAR_8, VAR_12) != 0)
   return (VAR_7);
 }

 FUNC_2(VAR_8->are_cdata.are_rx_ring_tag,
     VAR_8->are_cdata.are_rx_ring_map,
     VAR_5 | VAR_6);

 return (0);
}
