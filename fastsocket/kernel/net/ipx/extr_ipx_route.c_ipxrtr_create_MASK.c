
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipx_route_definition {int ipx_router_node; int ipx_network; int ipx_router_network; } ;
struct ipx_interface {int dummy; } ;


 int VAR_0 ;
 struct ipx_interface* FUNC_0 (int ) ;
 int FUNC_1 (struct ipx_interface*) ;
 int FUNC_2 (int ,struct ipx_interface*,int ) ;

__attribute__((used)) static int FUNC_3(struct ipx_route_definition *VAR_1)
{
 struct ipx_interface *VAR_2;
 int VAR_3 = -VAR_0;


 VAR_2 = FUNC_0(VAR_1->ipx_router_network);
 if (!VAR_2)
  goto out;
 VAR_3 = FUNC_2(VAR_1->ipx_network, VAR_2, VAR_1->ipx_router_node);
 FUNC_1(VAR_2);
out:
 return VAR_3;
}
