
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct gpio_spi_softc {int sc_miso; int sc_sclk; int sc_dev; int sc_busdev; int sc_mosi; } ;


 int FUNC_0 (int ,int ,int,unsigned int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gpio_spi_softc*) ;

__attribute__((used)) static uint8_t
FUNC_3(struct gpio_spi_softc *VAR_2, int VAR_3, int VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6, VAR_7 = 0;
 unsigned int VAR_8;




 for (VAR_6 = 0x80; VAR_6 > 0; VAR_6 >>= 1) {
  if ((VAR_4 == VAR_1) ||
      (VAR_4 == VAR_0)) {



   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_mosi, (VAR_5 & VAR_6)?1:0);
   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_sclk, 0);
   FUNC_2(VAR_2);

   if (VAR_2->sc_miso != 0xff) {
    FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev,
        VAR_2->sc_miso, &VAR_8);
    VAR_7 |= VAR_8?VAR_6:0;
   }

   FUNC_2(VAR_2);
   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_sclk, 1);
   FUNC_2(VAR_2);
  } else {



   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_mosi, (VAR_5 & VAR_6)?1:0);
   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_sclk, 1);
   FUNC_2(VAR_2);

   if (VAR_2->sc_miso != 0xff) {
    FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev,
        VAR_2->sc_miso, &VAR_8);
    VAR_7 |= VAR_8?VAR_6:0;
   }

   FUNC_2(VAR_2);
   FUNC_1(VAR_2->sc_busdev, VAR_2->sc_dev,
       VAR_2->sc_sclk, 0);
   FUNC_2(VAR_2);
  }
 }

 return (VAR_7 & 0xff);
}
