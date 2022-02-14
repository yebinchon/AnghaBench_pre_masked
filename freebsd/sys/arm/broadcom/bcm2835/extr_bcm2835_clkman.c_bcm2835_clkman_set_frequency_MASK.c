
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm2835_clkman_softc {int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm2835_clkman_softc*,int) ;
 int FUNC_2 (struct bcm2835_clkman_softc*,int,int) ;
 int FUNC_3 (struct bcm2835_clkman_softc*,int,int) ;
 struct bcm2835_clkman_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

uint32_t
FUNC_6(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct bcm2835_clkman_softc *VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 VAR_4 = FUNC_4(VAR_1);

 if (VAR_2 != VAR_0) {
  FUNC_5(VAR_4->sc_dev,
      "Unsupported unit 0x%x", VAR_2);
  return (0);
 }

 FUNC_2(VAR_4, VAR_2, 6);
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (!(VAR_6&0x80))
   break;
  FUNC_0(1000);
 }
 if (VAR_6 & 0x80) {
  FUNC_5(VAR_4->sc_dev,
      "Failed to stop clock for unit 0x%x", VAR_2);
  return (0);
 }
 if (VAR_3 == 0)
  return (0);

 VAR_6 = 500000000/VAR_3;
 if (VAR_6 < 4) {
  FUNC_5(VAR_4->sc_dev,
      "Frequency too high for unit 0x%x (max: 125 MHz)",
      VAR_2);
  return (0);
 }
 if (VAR_6 > 0xfff) {
  FUNC_5(VAR_4->sc_dev,
      "Frequency too low for unit 0x%x (min: 123 kHz)",
      VAR_2);
  return (0);
 }
 VAR_3 = 500000000/VAR_6;
 FUNC_3(VAR_4, VAR_2, VAR_6 << 12);

 FUNC_2(VAR_4, VAR_2, 0x16);
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if ((VAR_6&0x80))
   break;
  FUNC_0(1000);
 }
 if (!(VAR_6 & 0x80)) {
  FUNC_5(VAR_4->sc_dev,
      "Failed to start clock for unit 0x%x", VAR_2);
  return (0);
 }
 return (VAR_3);
}
