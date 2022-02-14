
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int) ;
 int FUNC_3 (struct run_softc*,int,int*) ;
 int FUNC_4 (struct run_softc*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct run_softc *VAR_1, uint8_t VAR_2, uint8_t VAR_3,
    uint8_t *VAR_4)
{
 uint8_t VAR_5, VAR_6;
 uint8_t VAR_7, VAR_8, VAR_9;
 int VAR_10;


 FUNC_3(VAR_1, 24, &VAR_6);
 VAR_6 = (VAR_6 & 0xc0) | VAR_2;
 FUNC_4(VAR_1, 24, VAR_6);


 FUNC_3(VAR_1, 22, &VAR_5);
 FUNC_4(VAR_1, 22, VAR_5 | 0x01);


 FUNC_1(VAR_1, 24, 0x00);
 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {

  FUNC_1(VAR_1, 25, 0x90);
  FUNC_2(VAR_1, 10);

  FUNC_0(VAR_1, 55, &VAR_7);
  if (VAR_7 != 0)
   break;
 }
 if (VAR_10 == 100)
  return (VAR_0);


 FUNC_1(VAR_1, 24, 0x06);
 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {

  FUNC_1(VAR_1, 25, 0x90);
  FUNC_2(VAR_1, 10);

  FUNC_0(VAR_1, 55, &VAR_8);

  VAR_9 = VAR_7 - VAR_8;
  if (VAR_9 > VAR_3)
   break;


  VAR_6++;
  FUNC_4(VAR_1, 24, VAR_6);
 }
 if (VAR_10 < 100) {
  if (VAR_6 != VAR_2)
   VAR_6--;
  *VAR_4 = VAR_6;
  FUNC_4(VAR_1, 24, VAR_6);
 }


 FUNC_1(VAR_1, 24, 0x00);


 FUNC_3(VAR_1, 22, &VAR_5);
 FUNC_4(VAR_1, 22, VAR_5 & ~0x01);

 return (0);
}
