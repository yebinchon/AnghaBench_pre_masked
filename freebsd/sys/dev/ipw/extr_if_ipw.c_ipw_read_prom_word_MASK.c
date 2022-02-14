
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ipw_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ipw_softc*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct ipw_softc *VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10;
 int VAR_11;


 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_7, VAR_3);
 FUNC_0(VAR_7, VAR_3 | VAR_0);
 FUNC_0(VAR_7, VAR_3);


 FUNC_0(VAR_7, VAR_3 | VAR_1);
 FUNC_0(VAR_7, VAR_3 | VAR_1 | VAR_0);


 FUNC_0(VAR_7, VAR_3 | VAR_1);
 FUNC_0(VAR_7, VAR_3 | VAR_1 | VAR_0);
 FUNC_0(VAR_7, VAR_3);
 FUNC_0(VAR_7, VAR_3 | VAR_0);


 for (VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
  FUNC_0(VAR_7, VAR_3 |
      (((VAR_8 >> VAR_11) & 1) << VAR_4));
  FUNC_0(VAR_7, VAR_3 |
      (((VAR_8 >> VAR_11) & 1) << VAR_4) | VAR_0);
 }

 FUNC_0(VAR_7, VAR_3);


 VAR_10 = 0;
 for (VAR_11 = 15; VAR_11 >= 0; VAR_11--) {
  FUNC_0(VAR_7, VAR_3 | VAR_0);
  FUNC_0(VAR_7, VAR_3);
  VAR_9 = FUNC_1(VAR_7, VAR_6);
  VAR_10 |= ((VAR_9 & VAR_2) >> VAR_5) << VAR_11;
 }

 FUNC_0(VAR_7, 0);


 FUNC_0(VAR_7, VAR_3);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_7, VAR_0);

 return FUNC_2(VAR_10);
}
