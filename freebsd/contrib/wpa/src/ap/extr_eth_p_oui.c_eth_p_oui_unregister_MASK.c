
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_p_oui_iface {int l2; int list; int receiver; struct eth_p_oui_iface* iface; } ;
struct eth_p_oui_ctx {int l2; int list; int receiver; struct eth_p_oui_ctx* iface; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct eth_p_oui_iface*) ;

void FUNC_4(struct eth_p_oui_ctx *VAR_0)
{
 struct eth_p_oui_iface *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->iface;

 FUNC_0(&VAR_0->list);
 FUNC_3(VAR_0);

 if (FUNC_1(&VAR_1->receiver)) {
  FUNC_0(&VAR_1->list);
  FUNC_2(VAR_1->l2);
  FUNC_3(VAR_1);
 }
}
