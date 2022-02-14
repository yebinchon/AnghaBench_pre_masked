
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct rtwn_softc {int sc_flags; } ;
struct r92c_rx_cck {int agc_rpt; } ;
typedef int int8_t ;


 int VAR_0 ;

int8_t
FUNC_0(struct rtwn_softc *VAR_1, void *VAR_2)
{
 static const int8_t VAR_3[] = { 16, -12, -26, -46 };
 struct r92c_rx_cck *VAR_4 = (struct r92c_rx_cck *)VAR_2;
 uint8_t VAR_5;
 int8_t VAR_6;

 if (VAR_1->sc_flags & VAR_0) {
  VAR_5 = (VAR_4->agc_rpt >> 5) & 0x03;
  VAR_6 = (VAR_4->agc_rpt & 0x1f) << 1;
 } else {
  VAR_5 = (VAR_4->agc_rpt >> 6) & 0x03;
  VAR_6 = VAR_4->agc_rpt & 0x3e;
 }
 VAR_6 = VAR_3[VAR_5] - VAR_6;

 return (VAR_6);
}
