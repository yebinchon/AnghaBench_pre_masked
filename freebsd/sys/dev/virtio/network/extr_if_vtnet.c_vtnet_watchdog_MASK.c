
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtnet_txq {int vtntx_watchdog; int vtntx_id; TYPE_1__* vtntx_sc; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {struct ifnet* vtnet_ifp; } ;


 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct vtnet_txq*) ;
 int FUNC_2 (struct ifnet*,char*,int ) ;
 scalar_t__ FUNC_3 (struct vtnet_txq*) ;
 int FUNC_4 (struct vtnet_txq*) ;

__attribute__((used)) static int
FUNC_5(struct vtnet_txq *VAR_0)
{
 struct ifnet *VAR_1;

 VAR_1 = VAR_0->vtntx_sc->vtnet_ifp;

 FUNC_0(VAR_0);
 if (VAR_0->vtntx_watchdog == 1) {
  if (FUNC_3(VAR_0) != 0)
   FUNC_4(VAR_0);
 }

 if (VAR_0->vtntx_watchdog == 0 || --VAR_0->vtntx_watchdog) {
  FUNC_1(VAR_0);
  return (0);
 }
 FUNC_1(VAR_0);

 FUNC_2(VAR_1, "watchdog timeout on queue %d\n", VAR_0->vtntx_id);
 return (1);
}
