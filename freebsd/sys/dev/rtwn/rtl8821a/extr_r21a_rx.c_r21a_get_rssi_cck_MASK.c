
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r12a_rx_phystat {int* cfosho; } ;
typedef int int8_t ;



int8_t
FUNC_0(struct rtwn_softc *VAR_0, void *VAR_1)
{
 struct r12a_rx_phystat *VAR_2 = (struct r12a_rx_phystat *)VAR_1;
 int8_t VAR_3, VAR_4;

 VAR_3 = (VAR_2->cfosho[0] & 0xe0) >> 5;
 VAR_4 = -6 - 2*(VAR_2->cfosho[0] & 0x1f);

 switch (VAR_3) {
 case 5:
  VAR_4 -= 32;
  break;
 case 4:
  VAR_4 -= 24;
  break;
 case 2:
  VAR_4 -= 11;
  break;
 case 1:
  VAR_4 += 5;
  break;
 case 0:
  VAR_4 += 21;
  break;
 }

 return (VAR_4);
}
