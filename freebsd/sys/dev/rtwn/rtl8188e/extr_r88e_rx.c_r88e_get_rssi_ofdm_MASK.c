
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r88e_rx_phystat {int sig_qual; } ;
typedef int int8_t ;



int8_t
FUNC_0(struct rtwn_softc *VAR_0, void *VAR_1)
{
 struct r88e_rx_phystat *VAR_2 = (struct r88e_rx_phystat *)VAR_1;
 int VAR_3;


 VAR_3 = ((VAR_2->sig_qual >> 1) & 0x7f) - 110;

 return (VAR_3);
}
