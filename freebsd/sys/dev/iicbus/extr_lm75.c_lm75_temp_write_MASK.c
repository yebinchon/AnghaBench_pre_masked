
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct lm75_softc {int sc_addr; int sc_dev; } ;
typedef int buf8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct lm75_softc *VAR_3, uint8_t VAR_4, int VAR_5)
{
 uint8_t VAR_6[3];
 uint16_t VAR_7;

 VAR_5 = (VAR_5 - VAR_2) / 10;
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 if (VAR_5 < VAR_1)
  VAR_5 = VAR_1;

 VAR_7 = (uint16_t)VAR_5;
 VAR_7 <<= 8;

 VAR_6[0] = VAR_4;
 VAR_6[1] = VAR_7 >> 8;
 VAR_6[2] = VAR_7 & 0xff;
 if (FUNC_0(VAR_3->sc_dev, VAR_3->sc_addr, VAR_6, sizeof(VAR_6)) < 0)
  return (-1);

 return (0);
}
