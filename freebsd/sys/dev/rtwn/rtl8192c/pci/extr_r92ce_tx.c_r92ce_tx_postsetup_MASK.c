
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtwn_pci_softc {int pc_mapsize; int pc_sh; int pc_st; } ;
struct r92ce_tx_desc {int pktlen; int txbufsize; int txbufaddr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct rtwn_pci_softc *VAR_1, void *VAR_2,
    bus_dma_segment_t VAR_3[])
{
 struct r92ce_tx_desc *VAR_4 = VAR_2;

 VAR_4->txbufaddr = FUNC_1(VAR_3[0].ds_addr);
 VAR_4->txbufsize = VAR_4->pktlen;
 FUNC_0(VAR_1->pc_st, VAR_1->pc_sh, 0, VAR_1->pc_mapsize,
     VAR_0);
}
