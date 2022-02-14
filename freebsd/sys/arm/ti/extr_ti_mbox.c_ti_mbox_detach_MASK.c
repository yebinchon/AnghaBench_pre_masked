
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_mbox_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct ti_mbox_softc* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct ti_mbox_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3->sc_intr)
  FUNC_1(VAR_2, VAR_3->sc_irq_res, VAR_3->sc_intr);
 if (VAR_3->sc_irq_res)
  FUNC_0(VAR_2, VAR_0, FUNC_3(VAR_3->sc_irq_res),
      VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res)
  FUNC_0(VAR_2, VAR_1, FUNC_3(VAR_3->sc_mem_res),
      VAR_3->sc_mem_res);

 return (0);
}
