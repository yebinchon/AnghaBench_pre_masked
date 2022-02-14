
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rt2860_softc {int dummy; } ;


 int FUNC_0 (struct rt2860_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint16_t
FUNC_2(struct rt2860_softc *VAR_7, uint16_t VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10;
 int VAR_11;


 FUNC_1(VAR_7, 0);

 FUNC_1(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_4 | VAR_0);
 FUNC_1(VAR_7, VAR_4);


 FUNC_1(VAR_7, VAR_4 | VAR_1);
 FUNC_1(VAR_7, VAR_4 | VAR_1 | VAR_0);


 FUNC_1(VAR_7, VAR_4 | VAR_1);
 FUNC_1(VAR_7, VAR_4 | VAR_1 | VAR_0);
 FUNC_1(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_4 | VAR_0);


 VAR_11 = ((FUNC_0(VAR_7, VAR_2) & 0x30) == 0) ? 5 : 7;
 for (; VAR_11 >= 0; VAR_11--) {
  FUNC_1(VAR_7, VAR_4 |
      (((VAR_8 >> VAR_11) & 1) << VAR_5));
  FUNC_1(VAR_7, VAR_4 |
      (((VAR_8 >> VAR_11) & 1) << VAR_5) | VAR_0);
 }

 FUNC_1(VAR_7, VAR_4);


 VAR_10 = 0;
 for (VAR_11 = 15; VAR_11 >= 0; VAR_11--) {
  FUNC_1(VAR_7, VAR_4 | VAR_0);
  VAR_9 = FUNC_0(VAR_7, VAR_2);
  VAR_10 |= ((VAR_9 & VAR_3) >> VAR_6) << VAR_11;
  FUNC_1(VAR_7, VAR_4);
 }

 FUNC_1(VAR_7, 0);


 FUNC_1(VAR_7, VAR_4);
 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_7, VAR_0);

 return VAR_10;
}
