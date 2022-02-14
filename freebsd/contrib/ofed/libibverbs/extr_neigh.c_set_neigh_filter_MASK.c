
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_neigh {int dummy; } ;
struct get_neigh_handler {struct rtnl_neigh* filter_neigh; } ;



__attribute__((used)) static void FUNC_0(struct get_neigh_handler *VAR_0,
        struct rtnl_neigh *VAR_1) {
 VAR_0->filter_neigh = VAR_1;
}
