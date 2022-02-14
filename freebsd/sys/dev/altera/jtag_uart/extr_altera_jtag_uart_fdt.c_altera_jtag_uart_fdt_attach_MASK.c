
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag_uart_softc {int * ajus_mem_res; scalar_t__ ajus_mem_rid; int * ajus_irq_res; scalar_t__ ajus_irq_rid; int ajus_unit; int ajus_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 void* FUNC_1 (int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 struct altera_jtag_uart_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5)
{
 struct altera_jtag_uart_softc *VAR_6;
 int VAR_7;

 VAR_7 = 0;
 VAR_6 = FUNC_3(VAR_5);
 VAR_6->ajus_dev = VAR_5;
 VAR_6->ajus_unit = FUNC_4(VAR_5);
 VAR_6->ajus_mem_rid = 0;
 VAR_6->ajus_mem_res = FUNC_1(VAR_5, VAR_4,
     &VAR_6->ajus_mem_rid, VAR_1);
 if (VAR_6->ajus_mem_res == ((void*)0)) {
  FUNC_5(VAR_5, "couldn't map memory\n");
  VAR_7 = VAR_0;
  goto out;
 }





 VAR_6->ajus_irq_rid = 0;
 VAR_6->ajus_irq_res = FUNC_1(VAR_5, VAR_3,
     &VAR_6->ajus_irq_rid, VAR_1 | VAR_2);
 if (VAR_6->ajus_irq_res == ((void*)0))
  FUNC_5(VAR_5,
      "IRQ unavailable; selecting polled operation\n");
 VAR_7 = FUNC_0(VAR_6);
out:
 if (VAR_7) {
  if (VAR_6->ajus_irq_res != ((void*)0))
   FUNC_2(VAR_5, VAR_3,
       VAR_6->ajus_irq_rid, VAR_6->ajus_irq_res);
  if (VAR_6->ajus_mem_res != ((void*)0))
   FUNC_2(VAR_5, VAR_4,
       VAR_6->ajus_mem_rid, VAR_6->ajus_mem_res);
 }
 return (VAR_7);
}
