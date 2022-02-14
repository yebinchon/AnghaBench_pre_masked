
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_spi_softc {int sc_sclk; int sc_mosi; int sc_miso; int sc_cs0; int sc_cs1; int sc_cs2; int sc_cs3; int sc_freq; int sc_dev; int sc_busdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct gpio_spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (struct gpio_spi_softc*,int) ;
 scalar_t__ FUNC_9 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 uint32_t VAR_7;
 struct gpio_spi_softc *VAR_8;

 VAR_8 = FUNC_5(VAR_6);
 VAR_8->sc_dev = VAR_6;
 VAR_8->sc_busdev = FUNC_4(VAR_6);


 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "sclk", &VAR_7))
   return (VAR_0);
 VAR_8->sc_sclk = VAR_7 & 0xff;

 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "mosi", &VAR_7))
   return (VAR_0);
 VAR_8->sc_mosi = VAR_7 & 0xff;


 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "miso", &VAR_7))
   VAR_7 = 0xff;
 VAR_8->sc_miso = VAR_7 & 0xff;

 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "cs0", &VAR_7))
   return (VAR_0);
 VAR_8->sc_cs0 = VAR_7 & 0xff;


 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "cs1", &VAR_7))
  VAR_7 = 0xff;
 VAR_8->sc_cs1 = VAR_7 & 0xff;

 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "cs2", &VAR_7))
  VAR_7 = 0xff;
 VAR_8->sc_cs2 = VAR_7 & 0xff;

 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "cs3", &VAR_7))
  VAR_7 = 0xff;
 VAR_8->sc_cs3 = VAR_7 & 0xff;


 if (FUNC_9(FUNC_3(VAR_6),
     FUNC_6(VAR_6), "freq", &VAR_7)) {
  VAR_7 = 100000;
 }
 VAR_8->sc_freq = VAR_7;

 if (VAR_5) {
  FUNC_7(VAR_6, "frequency: %d Hz\n",
      VAR_8->sc_freq);
  FUNC_7(VAR_6,
      "Use GPIO pins: sclk=%d, mosi=%d, miso=%d, "
      "cs0=%d, cs1=%d, cs2=%d, cs3=%d\n",
      VAR_8->sc_sclk, VAR_8->sc_mosi, VAR_8->sc_miso,
      VAR_8->sc_cs0, VAR_8->sc_cs1, VAR_8->sc_cs2, VAR_8->sc_cs3);
 }


 FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_sclk,
     VAR_2|VAR_3);
 FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_mosi,
     VAR_2|VAR_3);
 if (VAR_8->sc_miso != 0xff) {
  FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_miso,
      VAR_1|VAR_3);
 }

 FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_cs0,
     VAR_2|VAR_4);

 if (VAR_8->sc_cs1 != 0xff)
  FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_cs1,
      VAR_2|VAR_4);
 if (VAR_8->sc_cs2 != 0xff)
  FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_cs2,
      VAR_2|VAR_4);
 if (VAR_8->sc_cs3 != 0xff)
  FUNC_0(VAR_8->sc_busdev, VAR_8->sc_dev, VAR_8->sc_cs3,
      VAR_2|VAR_4);

 FUNC_8(VAR_8, -1);

 FUNC_2(VAR_6, "spibus", -1);
 return (FUNC_1(VAR_6));
}
