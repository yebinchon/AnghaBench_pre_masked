
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_neigh {int dummy; } ;
struct nl_addr {int dummy; } ;
struct get_neigh_handler {int dst; int oif; int neigh_cache; } ;


 struct nl_addr* FUNC_0 (struct nl_addr*) ;
 struct rtnl_neigh* FUNC_1 (int ,int ,int ) ;
 struct nl_addr* FUNC_2 (struct rtnl_neigh*) ;
 int FUNC_3 (struct rtnl_neigh*) ;

__attribute__((used)) static struct nl_addr *FUNC_4(struct get_neigh_handler *VAR_0)
{
 struct rtnl_neigh *VAR_1;
 struct nl_addr *VAR_2 = ((void*)0);




 VAR_1 = FUNC_1(VAR_0->neigh_cache,
          VAR_0->oif,
          VAR_0->dst);
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 if (((void*)0) != VAR_2)
  VAR_2 = FUNC_0(VAR_2);

 FUNC_3(VAR_1);
 return VAR_2;
}
