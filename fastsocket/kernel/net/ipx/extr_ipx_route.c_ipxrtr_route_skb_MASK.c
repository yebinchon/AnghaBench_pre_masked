
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int node; } ;
struct ipxhdr {TYPE_1__ ipx_dest; } ;
struct ipx_route {int ir_intrfc; int ir_router_node; scalar_t__ ir_routed; } ;
struct TYPE_4__ {int ipx_dest_net; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct ipxhdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*,int ) ;
 struct ipx_route* FUNC_5 (int ) ;
 int FUNC_6 (struct ipx_route*) ;
 int FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct sk_buff *VAR_0)
{
 struct ipxhdr *VAR_1 = FUNC_1(VAR_0);
 struct ipx_route *VAR_2 = FUNC_5(FUNC_0(VAR_0)->ipx_dest_net);

 if (!VAR_2) {
  FUNC_7(VAR_0);
  return 0;
 }

 FUNC_2(VAR_2->ir_intrfc);
 FUNC_4(VAR_2->ir_intrfc, VAR_0, VAR_2->ir_routed ?
   VAR_2->ir_router_node : VAR_1->ipx_dest.node);
 FUNC_3(VAR_2->ir_intrfc);
 FUNC_6(VAR_2);

 return 0;
}
