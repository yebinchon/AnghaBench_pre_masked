
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int * nf10bmac_ctrl_res; int nf10bmac_ctrl_rid; int * nf10bmac_tx_mem_res; int nf10bmac_tx_mem_rid; int * nf10bmac_rx_mem_res; int nf10bmac_rx_mem_rid; int * nf10bmac_intr_res; int nf10bmac_intr_rid; int * nf10bmac_rx_irq_res; int nf10bmac_rx_irq_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct nf10bmac_softc* FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_2)
{
 struct nf10bmac_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->nf10bmac_rx_irq_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_0, VAR_3->nf10bmac_rx_irq_rid,
      VAR_3->nf10bmac_rx_irq_res);
  VAR_3->nf10bmac_rx_irq_res = ((void*)0);
 }
 if (VAR_3->nf10bmac_intr_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1,
      VAR_3->nf10bmac_intr_rid, VAR_3->nf10bmac_intr_res);
  VAR_3->nf10bmac_intr_res = ((void*)0);
 }
 if (VAR_3->nf10bmac_rx_mem_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1,
      VAR_3->nf10bmac_rx_mem_rid, VAR_3->nf10bmac_rx_mem_res);
  VAR_3->nf10bmac_rx_mem_res = ((void*)0);
 }
 if (VAR_3->nf10bmac_tx_mem_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1,
      VAR_3->nf10bmac_tx_mem_rid, VAR_3->nf10bmac_tx_mem_res);
  VAR_3->nf10bmac_tx_mem_res = ((void*)0);
 }
 if (VAR_3->nf10bmac_ctrl_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1,
      VAR_3->nf10bmac_ctrl_rid, VAR_3->nf10bmac_ctrl_res);
  VAR_3->nf10bmac_ctrl_res = ((void*)0);
 }
}
