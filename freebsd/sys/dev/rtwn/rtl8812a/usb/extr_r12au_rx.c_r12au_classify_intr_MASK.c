
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;
struct r92c_rx_stat {int rxdw2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct rtwn_softc *VAR_5, void *VAR_6, int VAR_7)
{
 struct r92c_rx_stat *VAR_8 = VAR_6;
 uint32_t VAR_9 = FUNC_0(VAR_8->rxdw2);

 if (VAR_9 & VAR_1) {
  int VAR_10 = sizeof(struct r92c_rx_stat);

  if (VAR_7 < VAR_10 + 2)
   return (VAR_2);

  if (((uint8_t *)VAR_6)[VAR_10] == VAR_0)
   return (VAR_4);
  else
   return (VAR_3);
 } else
  return (VAR_2);
}
