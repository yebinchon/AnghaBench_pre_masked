
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_wdt_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intr; scalar_t__ sc_ev_tag; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 struct ti_wdt_softc* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct ti_wdt_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4->sc_ev_tag)
  FUNC_0(VAR_2, VAR_4->sc_ev_tag);
 if (VAR_4->sc_intr)
  FUNC_2(VAR_3, VAR_4->sc_irq_res, VAR_4->sc_intr);
 if (VAR_4->sc_irq_res)
  FUNC_1(VAR_3, VAR_0,
      FUNC_4(VAR_4->sc_irq_res), VAR_4->sc_irq_res);
 if (VAR_4->sc_mem_res)
  FUNC_1(VAR_3, VAR_1,
      FUNC_4(VAR_4->sc_mem_res), VAR_4->sc_mem_res);

 return (0);
}
