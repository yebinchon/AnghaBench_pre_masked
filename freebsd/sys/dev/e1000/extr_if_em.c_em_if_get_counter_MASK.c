
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {scalar_t__ latecol; scalar_t__ ecol; scalar_t__ cexterr; scalar_t__ mpc; scalar_t__ roc; scalar_t__ ruc; scalar_t__ algnerrc; scalar_t__ crcerrs; scalar_t__ rxerrc; scalar_t__ colc; } ;
struct adapter {scalar_t__ watchdog_events; TYPE_1__ stats; scalar_t__ dropped_pkts; } ;
typedef int ift_counter ;
typedef int if_ctx_t ;





 scalar_t__ FUNC_0 (struct ifnet*,int) ;
 struct ifnet* FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(if_ctx_t VAR_0, ift_counter VAR_1)
{
 struct adapter *VAR_2 = FUNC_2(VAR_0);
 struct ifnet *VAR_3 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 130:
  return (VAR_2->stats.colc);
 case 129:
  return (VAR_2->dropped_pkts + VAR_2->stats.rxerrc +
      VAR_2->stats.crcerrs + VAR_2->stats.algnerrc +
      VAR_2->stats.ruc + VAR_2->stats.roc +
      VAR_2->stats.mpc + VAR_2->stats.cexterr);
 case 128:
  return (VAR_2->stats.ecol + VAR_2->stats.latecol +
      VAR_2->watchdog_events);
 default:
  return (FUNC_0(VAR_3, VAR_1));
 }
}
