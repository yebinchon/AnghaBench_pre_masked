
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_softc {int sc_irqres; int sc_dev; int sc_dma; int sc_irq; struct ncr53c9x_softc sc_ncr53c9x; } ;


 int FUNC_0 (struct ncr53c9x_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ncr53c9x_softc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct esp_softc *VAR_1)
{
 struct ncr53c9x_softc *VAR_2 = &VAR_1->sc_ncr53c9x;
 int VAR_3;

 FUNC_2(VAR_1->sc_dev, VAR_1->sc_irqres, VAR_1->sc_irq);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_3 = FUNC_3(VAR_1->sc_dma);
 if (VAR_3 != 0)
  return (VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1->sc_dev, VAR_0,
     FUNC_5(VAR_1->sc_irqres), VAR_1->sc_irqres);

 return (0);
}
