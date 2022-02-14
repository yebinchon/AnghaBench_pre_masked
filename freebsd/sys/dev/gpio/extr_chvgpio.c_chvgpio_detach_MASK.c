
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chvgpio_softc {int * sc_mem_res; int sc_mem_rid; int * sc_irq_res; int sc_irq_rid; int * intr_handle; int sc_dev; scalar_t__ sc_busdev; } ;
typedef int device_t ;


 int FUNC_0 (struct chvgpio_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 struct chvgpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct chvgpio_softc *VAR_3;
 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->sc_busdev)
  FUNC_4(VAR_2);

 if (VAR_3->intr_handle != ((void*)0))
     FUNC_2(VAR_3->sc_dev, VAR_3->sc_irq_res, VAR_3->intr_handle);
 if (VAR_3->sc_irq_res != ((void*)0))
  FUNC_1(VAR_2, VAR_0, VAR_3->sc_irq_rid, VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res != ((void*)0))
  FUNC_1(VAR_2, VAR_1, VAR_3->sc_mem_rid, VAR_3->sc_mem_res);

 FUNC_0(VAR_3);

    return (0);
}
