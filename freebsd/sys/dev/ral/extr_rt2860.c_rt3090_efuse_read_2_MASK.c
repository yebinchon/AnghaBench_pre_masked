
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rt2860_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int FUNC_2 (struct rt2860_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint16_t
FUNC_3(struct rt2860_softc *VAR_7, uint16_t VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10;
 int VAR_11;

 VAR_8 *= 2;







 VAR_9 = FUNC_1(VAR_7, VAR_5);
 VAR_9 &= ~(VAR_3 | VAR_0);
 VAR_9 |= (VAR_8 & ~0xf) << VAR_1 | VAR_2;
 FUNC_2(VAR_7, VAR_5, VAR_9);
 for (VAR_11 = 0; VAR_11 < 500; VAR_11++) {
  VAR_9 = FUNC_1(VAR_7, VAR_5);
  if (!(VAR_9 & VAR_2))
   break;
  FUNC_0(2);
 }
 if (VAR_11 == 500)
  return 0xffff;

 if ((VAR_9 & VAR_4) == VAR_4)
  return 0xffff;


 VAR_10 = VAR_6 - (VAR_8 & 0xc);
 VAR_9 = FUNC_1(VAR_7, VAR_10);

 return (VAR_8 & 2) ? VAR_9 >> 16 : VAR_9 & 0xffff;
}
