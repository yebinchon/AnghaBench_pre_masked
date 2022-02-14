
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adc_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intrhand; int sc_evdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_adc_softc*) ;
 int FUNC_1 (struct ti_adc_softc*) ;
 int FUNC_2 (struct ti_adc_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 struct ti_adc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ti_adc_softc*) ;
 int FUNC_9 (struct ti_adc_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct ti_adc_softc *VAR_3;

 VAR_3 = FUNC_6(VAR_2);


 FUNC_0(VAR_3);
 FUNC_8(VAR_3);
 FUNC_9(VAR_3);





 FUNC_2(VAR_3);

 FUNC_1(VAR_3);

 if (VAR_3->sc_intrhand)
  FUNC_5(VAR_2, VAR_3->sc_irq_res, VAR_3->sc_intrhand);
 if (VAR_3->sc_irq_res)
  FUNC_4(VAR_2, VAR_0, 0, VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res)
  FUNC_4(VAR_2, VAR_1, 0, VAR_3->sc_mem_res);

 return (FUNC_3(VAR_2));
}
