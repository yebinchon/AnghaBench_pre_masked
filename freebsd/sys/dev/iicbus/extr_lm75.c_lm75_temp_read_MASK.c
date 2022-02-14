
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct lm75_softc {scalar_t__ sc_hwtype; int sc_addr; int sc_dev; } ;
typedef int int16_t ;
typedef int buf8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct lm75_softc *VAR_8, uint8_t VAR_9, int *VAR_10)
{
 uint8_t VAR_11[2];
 uint16_t VAR_12;
 int VAR_13, VAR_14;

 if (FUNC_0(VAR_8->sc_dev, VAR_8->sc_addr, VAR_9, VAR_11, sizeof(VAR_11)) < 0)
  return (-1);
 VAR_12 = (uint16_t)((VAR_11[0] << 8) | (VAR_11[1] & 0xff));





 VAR_13 = 0;
 if (VAR_12 & VAR_5) {
  if (VAR_8->sc_hwtype == VAR_0)
   VAR_12 = ~(VAR_12 & VAR_1) + 1;
  else
   VAR_12 = ~(VAR_12 & VAR_6) + 1;
  VAR_13 = 1;
 }
 *VAR_10 = ((int16_t)VAR_12 >> 8) * 10;
 VAR_14 = 0;
 if (VAR_8->sc_hwtype == VAR_0) {
  if (VAR_12 & VAR_2)
   VAR_14 += 125;
  if (VAR_12 & VAR_3)
   VAR_14 += 250;
 }
 if (VAR_12 & VAR_4)
  VAR_14 += 500;
 VAR_14 /= 100;
 *VAR_10 += VAR_14;
 if (VAR_13)
  *VAR_10 = -(*VAR_10);
 *VAR_10 += VAR_7;

 return (0);
}
