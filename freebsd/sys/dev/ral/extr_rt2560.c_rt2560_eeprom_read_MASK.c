
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rt2560_softc {int dummy; } ;


 int FUNC_0 (struct rt2560_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rt2560_softc*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static uint16_t
FUNC_2(struct rt2560_softc *VAR_8, uint8_t VAR_9)
{
 uint32_t VAR_10;
 uint16_t VAR_11;
 int VAR_12;


 FUNC_1(VAR_8, 0);

 FUNC_1(VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_5 | VAR_1);
 FUNC_1(VAR_8, VAR_5);


 FUNC_1(VAR_8, VAR_5 | VAR_3);
 FUNC_1(VAR_8, VAR_5 | VAR_3 | VAR_1);


 FUNC_1(VAR_8, VAR_5 | VAR_3);
 FUNC_1(VAR_8, VAR_5 | VAR_3 | VAR_1);
 FUNC_1(VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_5 | VAR_1);


 VAR_12 = (FUNC_0(VAR_8, VAR_2) & VAR_0) ? 5 : 7;
 for (; VAR_12 >= 0; VAR_12--) {
  FUNC_1(VAR_8, VAR_5 |
      (((VAR_9 >> VAR_12) & 1) << VAR_6));
  FUNC_1(VAR_8, VAR_5 |
      (((VAR_9 >> VAR_12) & 1) << VAR_6) | VAR_1);
 }

 FUNC_1(VAR_8, VAR_5);


 VAR_11 = 0;
 for (VAR_12 = 15; VAR_12 >= 0; VAR_12--) {
  FUNC_1(VAR_8, VAR_5 | VAR_1);
  VAR_10 = FUNC_0(VAR_8, VAR_2);
  VAR_11 |= ((VAR_10 & VAR_4) >> VAR_7) << VAR_12;
  FUNC_1(VAR_8, VAR_5);
 }

 FUNC_1(VAR_8, 0);


 FUNC_1(VAR_8, VAR_5);
 FUNC_1(VAR_8, 0);
 FUNC_1(VAR_8, VAR_1);

 return VAR_11;
}
