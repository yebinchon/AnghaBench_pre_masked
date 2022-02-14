
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_gpio_softc {int * sc_mem_res; int sc_mem_rid; int * sc_irq_res; int sc_irq_rid; scalar_t__ sc_irq_hdl; int * sc_isrcs; int * sc_busdev; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ti_gpio_softc*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 struct ti_gpio_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ti_gpio_softc*,int) ;
 int FUNC_8 (struct ti_gpio_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct ti_gpio_softc *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(FUNC_6(&VAR_3->sc_mtx), ("gpio mutex not initialized"));


 if (VAR_3->sc_mem_res != ((void*)0))
  FUNC_7(VAR_3, 0xffffffff);
 if (VAR_3->sc_busdev != ((void*)0))
  FUNC_5(VAR_2);
 if (VAR_3->sc_isrcs != ((void*)0))
  FUNC_8(VAR_3);

 if (VAR_3->sc_irq_hdl) {
  FUNC_3(VAR_2, VAR_3->sc_irq_res,
      VAR_3->sc_irq_hdl);
 }
 if (VAR_3->sc_irq_res)
  FUNC_2(VAR_2, VAR_0, VAR_3->sc_irq_rid,
      VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res)
  FUNC_2(VAR_2, VAR_1, VAR_3->sc_mem_rid,
      VAR_3->sc_mem_res);
 FUNC_1(VAR_3);

 return (0);
}
