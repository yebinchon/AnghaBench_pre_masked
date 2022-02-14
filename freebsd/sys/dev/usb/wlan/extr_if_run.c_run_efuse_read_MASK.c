
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct run_softc*,int) ;
 int FUNC_1 (struct run_softc*,int,int*) ;
 int FUNC_2 (struct run_softc*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct run_softc *VAR_8, uint16_t VAR_9, uint16_t *VAR_10, int VAR_11)
{
 uint32_t VAR_12;
 uint16_t VAR_13;
 int VAR_14, VAR_15;

 if ((VAR_14 = FUNC_1(VAR_8, VAR_6, &VAR_12)) != 0)
  return (VAR_14);

 if (VAR_11 == 2)
  VAR_9 *= 2;







 VAR_12 &= ~(VAR_4 | VAR_1);
 VAR_12 |= (VAR_9 & ~0xf) << VAR_2 | VAR_3;
 FUNC_2(VAR_8, VAR_6, VAR_12);
 for (VAR_15 = 0; VAR_15 < 100; VAR_15++) {
  if ((VAR_14 = FUNC_1(VAR_8, VAR_6, &VAR_12)) != 0)
   return (VAR_14);
  if (!(VAR_12 & VAR_3))
   break;
  FUNC_0(VAR_8, 2);
 }
 if (VAR_15 == 100)
  return (VAR_0);

 if ((VAR_12 & VAR_5) == VAR_5) {
  *VAR_10 = 0xffff;
  return (0);
 }

 VAR_13 = VAR_7 - (VAR_9 & 0xc);
 if ((VAR_14 = FUNC_1(VAR_8, VAR_13, &VAR_12)) != 0)
  return (VAR_14);

 VAR_12 >>= (8 * (VAR_9 & 0x3));
 *VAR_10 = (VAR_9 & 1) ? VAR_12 >> 16 : VAR_12 & 0xffff;

 return (0);
}
