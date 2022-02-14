
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2661_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int FUNC_2 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static uint8_t
FUNC_4(struct rt2661_softc *VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  if (!(FUNC_1(VAR_3, VAR_2) & VAR_0))
   break;
  FUNC_0(1);
 }
 if (VAR_6 == 100) {
  FUNC_3(VAR_3->sc_dev, "could not read from BBP\n");
  return 0;
 }

 VAR_5 = VAR_0 | VAR_1 | VAR_4 << 8;
 FUNC_2(VAR_3, VAR_2, VAR_5);

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (!(VAR_5 & VAR_0))
   return VAR_5 & 0xff;
  FUNC_0(1);
 }

 FUNC_3(VAR_3->sc_dev, "could not read from BBP\n");
 return 0;
}
