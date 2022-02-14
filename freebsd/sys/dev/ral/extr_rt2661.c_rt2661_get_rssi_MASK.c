
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rt2661_softc {scalar_t__ rssi_5ghz_corr; scalar_t__ rssi_2ghz_corr; int sc_curchan; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct rt2661_softc *VAR_1, uint8_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = (VAR_2 >> 5) & 0x3;
 VAR_4 = VAR_2 & 0x1f;

 if (VAR_3 == 0) {






  return -1;
 }

 VAR_5 = (2 * VAR_4) - VAR_0;

 if (FUNC_0(VAR_1->sc_curchan)) {
  VAR_5 += VAR_1->rssi_2ghz_corr;

  if (VAR_3 == 1)
   VAR_5 -= 64;
  else if (VAR_3 == 2)
   VAR_5 -= 74;
  else if (VAR_3 == 3)
   VAR_5 -= 90;
 } else {
  VAR_5 += VAR_1->rssi_5ghz_corr;

  if (VAR_3 == 1)
   VAR_5 -= 64;
  else if (VAR_3 == 2)
   VAR_5 -= 86;
  else if (VAR_3 == 3)
   VAR_5 -= 100;
 }
 return VAR_5;
}
