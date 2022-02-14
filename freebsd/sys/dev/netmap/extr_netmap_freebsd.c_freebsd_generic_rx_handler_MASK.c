
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_generic_adapter {int (* save_if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_0, struct mbuf *VAR_1)
{
 int VAR_2;

 if (FUNC_5(!FUNC_1(VAR_0))) {
  FUNC_3(1, "Warning: RX packet intercepted, but no"
    " emulated adapter");
  return;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2) {
  struct netmap_generic_adapter *VAR_3 =
    (struct netmap_generic_adapter *)FUNC_0(VAR_0);
  VAR_3->save_if_input(VAR_0, VAR_1);
 }
}
