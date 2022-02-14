
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saf1761_otg_softc {int sc_bus; scalar_t__ sc_irq_res; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct saf1761_otg_softc*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct saf1761_otg_softc *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_0);

 if (VAR_1->sc_irq_res) {



  FUNC_2(VAR_1);
 }
 FUNC_3(&VAR_1->sc_bus, ((void*)0));

 return (0);
}
