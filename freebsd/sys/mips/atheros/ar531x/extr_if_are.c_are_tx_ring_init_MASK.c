
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct are_txdesc {int * tx_m; } ;
struct TYPE_3__ {int are_tx_ring_map; int are_tx_ring_tag; struct are_txdesc* are_txdesc; scalar_t__ are_tx_pkts; scalar_t__ are_tx_cnt; scalar_t__ are_tx_cons; scalar_t__ are_tx_prod; } ;
struct are_ring_data {TYPE_2__* are_tx_ring; } ;
struct are_softc {TYPE_1__ are_cdata; struct are_ring_data are_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {int are_link; scalar_t__ are_addr; scalar_t__ are_devcs; scalar_t__ are_stat; } ;


 int FUNC_0 (struct are_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_3(struct are_softc *VAR_4)
{
 struct are_ring_data *VAR_5;
 struct are_txdesc *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_4->are_cdata.are_tx_prod = 0;
 VAR_4->are_cdata.are_tx_cons = 0;
 VAR_4->are_cdata.are_tx_cnt = 0;
 VAR_4->are_cdata.are_tx_pkts = 0;

 VAR_5 = &VAR_4->are_rdata;
 FUNC_2(VAR_5->are_tx_ring, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_8 == VAR_0 - 1)
   VAR_7 = FUNC_0(VAR_4, 0);
  else
   VAR_7 = FUNC_0(VAR_4, VAR_8 + 1);
  VAR_5->are_tx_ring[VAR_8].are_stat = 0;
  VAR_5->are_tx_ring[VAR_8].are_devcs = 0;
  VAR_5->are_tx_ring[VAR_8].are_addr = 0;
  VAR_5->are_tx_ring[VAR_8].are_link = VAR_7;
  VAR_6 = &VAR_4->are_cdata.are_txdesc[VAR_8];
  VAR_6->tx_m = ((void*)0);
 }

 FUNC_1(VAR_4->are_cdata.are_tx_ring_tag,
     VAR_4->are_cdata.are_tx_ring_map,
     VAR_2 | VAR_3);

 return (0);
}
