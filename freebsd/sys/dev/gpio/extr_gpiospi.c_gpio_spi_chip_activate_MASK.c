
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_spi_softc {int sc_dev; int sc_cs3; int sc_busdev; int sc_cs2; int sc_cs1; int sc_cs0; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gpio_spi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct gpio_spi_softc *VAR_0, int VAR_1)
{


 switch (VAR_1) {
 case 0:
  FUNC_0(VAR_0->sc_busdev, VAR_0->sc_dev,
      VAR_0->sc_cs0, 0);
  break;
 case 1:
  FUNC_0(VAR_0->sc_busdev, VAR_0->sc_dev,
      VAR_0->sc_cs1, 0);
  break;
 case 2:
  FUNC_0(VAR_0->sc_busdev, VAR_0->sc_dev,
      VAR_0->sc_cs2, 0);
  break;
 case 3:
  FUNC_0(VAR_0->sc_busdev, VAR_0->sc_dev,
      VAR_0->sc_cs3, 0);
  break;
 default:
  FUNC_1(VAR_0->sc_dev, "don't have CS%d\n", VAR_1);
 }

 FUNC_2(VAR_0);
}
