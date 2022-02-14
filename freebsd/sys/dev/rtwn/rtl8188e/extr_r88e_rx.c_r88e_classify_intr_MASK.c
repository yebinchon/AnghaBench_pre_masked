
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r92c_rx_stat {int rxdw3; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct rtwn_softc *VAR_4, void *VAR_5, int VAR_6)
{
 struct r92c_rx_stat *VAR_7 = VAR_5;
 int VAR_8 = FUNC_0(FUNC_1(VAR_7->rxdw3), VAR_0);

 switch (VAR_8) {
 case 130:
  return (VAR_1);
 case 129:
 case 128:
  return (VAR_3);
 case 131:
  return (VAR_2);
 default:
  return (VAR_1);
 }
}
