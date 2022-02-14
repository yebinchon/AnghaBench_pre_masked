
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; } ;
struct r88e_rx_phystat {int agc_rpt; } ;
typedef int int8_t ;


 int VAR_0 ;

int8_t
FUNC_0(struct rtwn_softc *VAR_1, void *VAR_2)
{
 struct r88e_rx_phystat *VAR_3 = (struct r88e_rx_phystat *)VAR_2;
 int8_t VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_3->agc_rpt & 0xe0) >> 5;
 VAR_5 = (VAR_3->agc_rpt & 0x1f);
 VAR_6 = 6 - 2 * VAR_5;

 switch (VAR_4) {
 case 7:
  if (VAR_5 > 27)
   VAR_6 = -100 + 6;
  else
   VAR_6 += -100 + 2 * 27;
  break;
 case 6:
  VAR_6 += -48 + 2 * 2;
  break;
 case 5:
  VAR_6 += -42 + 2 * 7;
  break;
 case 4:
  VAR_6 += -36 + 2 * 7;
  break;
 case 3:
  VAR_6 += -24 + 2 * 7;
  break;
 case 2:
  VAR_6 += -6 + 2 * 5;
  if (VAR_1->sc_flags & VAR_0)
   VAR_6 -= 6;
  break;
 case 1:
  VAR_6 += 8;
  break;
 case 0:
  VAR_6 += 14;
  break;
 }

 return (VAR_6);
}
