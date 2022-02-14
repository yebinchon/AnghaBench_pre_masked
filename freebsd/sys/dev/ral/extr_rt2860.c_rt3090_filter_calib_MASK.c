
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rt2860_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int FUNC_2 (struct rt2860_softc*,int,int) ;
 int FUNC_3 (struct rt2860_softc*,int) ;
 int FUNC_4 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct rt2860_softc *VAR_2, uint8_t VAR_3, uint8_t VAR_4,
    uint8_t *VAR_5)
{
 uint8_t VAR_6, VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10;
 int VAR_11;


 VAR_7 = FUNC_3(VAR_2, 24);
 VAR_7 = (VAR_7 & 0xc0) | VAR_3;
 FUNC_4(VAR_2, 24, VAR_7);


 VAR_6 = FUNC_3(VAR_2, 22);
 FUNC_4(VAR_2, 22, VAR_6 | VAR_1);


 FUNC_2(VAR_2, 24, 0x00);
 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {

  FUNC_2(VAR_2, 25, 0x90);
  FUNC_0(1000);

  VAR_8 = FUNC_1(VAR_2, 55);
  if (VAR_8 != 0)
   break;
 }
 if (VAR_11 == 100)
  return (VAR_0);


 FUNC_2(VAR_2, 24, 0x06);
 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {

  FUNC_2(VAR_2, 25, 0x90);
  FUNC_0(1000);

  VAR_9 = FUNC_1(VAR_2, 55);

  VAR_10 = VAR_8 - VAR_9;
  if (VAR_10 > VAR_4)
   break;


  VAR_7++;
  FUNC_4(VAR_2, 24, VAR_7);
 }
 if (VAR_11 < 100) {
  if (VAR_7 != VAR_3)
   VAR_7--;
  *VAR_5 = VAR_7;
  FUNC_4(VAR_2, 24, VAR_7);
 }


 FUNC_2(VAR_2, 24, 0x00);


 VAR_6 = FUNC_3(VAR_2, 22);
 FUNC_4(VAR_2, 22, VAR_6 & ~VAR_1);

 return (0);
}
