
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_spi_softc {int sc_freq; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct gpio_spi_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->sc_freq / 1000000;
 if (VAR_1 == 0)
  VAR_1 = 1;

 FUNC_0(VAR_1);
}
