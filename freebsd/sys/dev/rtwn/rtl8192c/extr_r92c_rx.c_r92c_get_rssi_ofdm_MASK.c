
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r92c_rx_phystat {int pwdb_all; } ;
typedef int int8_t ;



int8_t
FUNC_0(struct rtwn_softc *VAR_0, void *VAR_1)
{
 struct r92c_rx_phystat *VAR_2 = (struct r92c_rx_phystat *)VAR_1;
 int VAR_3;


 VAR_3 = ((VAR_2->pwdb_all >> 1) & 0x7f) - 110;

 return (VAR_3);
}
