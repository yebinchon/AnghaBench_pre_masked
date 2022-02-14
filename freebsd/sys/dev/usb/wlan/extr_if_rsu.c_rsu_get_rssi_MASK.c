
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct rsu_softc {int dummy; } ;
struct r92s_rx_phystat {int phydw1; } ;
struct r92s_rx_cck {int agc_rpt; } ;
typedef int int8_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int8_t
FUNC_1(struct rsu_softc *VAR_0, int VAR_1, void *VAR_2)
{
 static const int8_t VAR_3[] = { 14, -2, -20, -40 };
 struct r92s_rx_phystat *VAR_4;
 struct r92s_rx_cck *VAR_5;
 uint8_t VAR_6;
 int8_t VAR_7;

 if (VAR_1 <= 3) {
  VAR_5 = (struct r92s_rx_cck *)VAR_2;
  VAR_6 = (VAR_5->agc_rpt >> 6) & 0x3;
  VAR_7 = VAR_5->agc_rpt & 0x3e;
  VAR_7 = VAR_3[VAR_6] - VAR_7;
 } else {
  VAR_4 = (struct r92s_rx_phystat *)VAR_2;
  VAR_7 = ((FUNC_0(VAR_4->phydw1) >> 1) & 0x7f) - 106;
 }
 return (VAR_7);
}
