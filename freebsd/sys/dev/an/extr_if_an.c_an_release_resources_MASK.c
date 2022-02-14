
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ an_dma_paddr; } ;
struct an_softc {scalar_t__ an_dtag; TYPE_1__* an_tx_buffer; TYPE_1__* an_rx_buffer; TYPE_1__ an_rid_buffer; scalar_t__ irq_res; int irq_rid; scalar_t__ mem_aux_res; int mem_aux_rid; scalar_t__ mem_res; int mem_rid; scalar_t__ port_res; int port_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct an_softc*,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 struct an_softc* FUNC_3 (int ) ;

void
FUNC_4(device_t VAR_5)
{
 struct an_softc *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 if (VAR_6->port_res) {
  FUNC_2(VAR_5, VAR_2,
         VAR_6->port_rid, VAR_6->port_res);
  VAR_6->port_res = 0;
 }
 if (VAR_6->mem_res) {
  FUNC_2(VAR_5, VAR_4,
         VAR_6->mem_rid, VAR_6->mem_res);
  VAR_6->mem_res = 0;
 }
 if (VAR_6->mem_aux_res) {
  FUNC_2(VAR_5, VAR_4,
         VAR_6->mem_aux_rid, VAR_6->mem_aux_res);
  VAR_6->mem_aux_res = 0;
 }
 if (VAR_6->irq_res) {
  FUNC_2(VAR_5, VAR_3,
         VAR_6->irq_rid, VAR_6->irq_res);
  VAR_6->irq_res = 0;
 }
 if (VAR_6->an_rid_buffer.an_dma_paddr) {
  FUNC_0(VAR_6, &VAR_6->an_rid_buffer);
 }
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_6->an_rx_buffer[VAR_7].an_dma_paddr) {
   FUNC_0(VAR_6, &VAR_6->an_rx_buffer[VAR_7]);
  }
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_6->an_tx_buffer[VAR_7].an_dma_paddr) {
   FUNC_0(VAR_6, &VAR_6->an_tx_buffer[VAR_7]);
  }
 if (VAR_6->an_dtag) {
  FUNC_1(VAR_6->an_dtag);
 }

}
