
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct ath_softc {int* sc_rixmap; } ;



int
FUNC_0(const struct ath_softc *VAR_0, uint8_t VAR_1)
{
 int VAR_2 = VAR_0->sc_rixmap[VAR_1];

 return (VAR_2 == 0xff ? 0 : VAR_2);
}
