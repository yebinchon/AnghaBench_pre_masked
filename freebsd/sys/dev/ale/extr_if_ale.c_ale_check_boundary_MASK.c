
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ale_rx_page; scalar_t__ ale_tx_cmb_paddr; scalar_t__ ale_tx_ring_paddr; } ;
struct ale_softc {TYPE_2__ ale_cdata; scalar_t__ ale_pagesize; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_3__ {scalar_t__ cmb_paddr; scalar_t__ page_paddr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct ale_softc *VAR_5)
{
 bus_addr_t VAR_6[VAR_1], VAR_7;
 bus_addr_t VAR_8[VAR_1], VAR_9;

 VAR_8[0] = VAR_5->ale_cdata.ale_rx_page[0].page_paddr +
     VAR_5->ale_pagesize;
 VAR_8[1] = VAR_5->ale_cdata.ale_rx_page[1].page_paddr +
     VAR_5->ale_pagesize;
 VAR_9 = VAR_5->ale_cdata.ale_tx_ring_paddr + VAR_3;
 VAR_7 = VAR_5->ale_cdata.ale_tx_cmb_paddr + VAR_2;
 VAR_6[0] = VAR_5->ale_cdata.ale_rx_page[0].cmb_paddr + VAR_0;
 VAR_6[1] = VAR_5->ale_cdata.ale_rx_page[1].cmb_paddr + VAR_0;

 if ((FUNC_0(VAR_9) !=
     FUNC_0(VAR_5->ale_cdata.ale_tx_ring_paddr)) ||
     (FUNC_0(VAR_8[0]) !=
     FUNC_0(VAR_5->ale_cdata.ale_rx_page[0].page_paddr)) ||
     (FUNC_0(VAR_8[1]) !=
     FUNC_0(VAR_5->ale_cdata.ale_rx_page[1].page_paddr)) ||
     (FUNC_0(VAR_7) !=
     FUNC_0(VAR_5->ale_cdata.ale_tx_cmb_paddr)) ||
     (FUNC_0(VAR_6[0]) !=
     FUNC_0(VAR_5->ale_cdata.ale_rx_page[0].cmb_paddr)) ||
     (FUNC_0(VAR_6[1]) !=
     FUNC_0(VAR_5->ale_cdata.ale_rx_page[1].cmb_paddr)))
  return (VAR_4);

 if ((FUNC_0(VAR_9) != FUNC_0(VAR_8[0])) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_8[1])) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_6[0])) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_6[1])) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_7)))
  return (VAR_4);

 return (0);
}
