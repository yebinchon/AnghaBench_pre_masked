
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct run_softc {int nrxchains; } ;
struct rt2860_rxwi {scalar_t__* rssi; } ;



__attribute__((used)) static __inline uint8_t
FUNC_0(struct run_softc *VAR_0, const struct rt2860_rxwi *VAR_1)
{
 uint8_t VAR_2 = 0;

 if (VAR_0->nrxchains > 1) {
  if (VAR_1->rssi[1] > VAR_1->rssi[VAR_2])
   VAR_2 = 1;
  if (VAR_0->nrxchains > 2)
   if (VAR_1->rssi[2] > VAR_1->rssi[VAR_2])
    VAR_2 = 2;
 }
 return (VAR_2);
}
