
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_route {int dummy; } ;
struct rtnl_nexthop {int dummy; } ;
struct rtnl_link {int dummy; } ;
struct nl_object {int dummy; } ;
struct nl_addr {int dummy; } ;
struct get_neigh_handler {int oif; int * src; void* found_ll_addr; int * dst; int link_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,void**) ;
 void* FUNC_1 (struct nl_addr*) ;
 int FUNC_2 (int *) ;
 struct rtnl_link* FUNC_3 (int ,int) ;
 struct nl_addr* FUNC_4 (struct rtnl_link*) ;
 int FUNC_5 (struct rtnl_link*) ;
 struct nl_addr* FUNC_6 (struct rtnl_route*) ;
 int FUNC_7 (struct rtnl_route*) ;
 struct rtnl_nexthop* FUNC_8 (struct rtnl_route*,int ) ;
 struct nl_addr* FUNC_9 (struct rtnl_nexthop*) ;
 int FUNC_10 (struct rtnl_nexthop*) ;

__attribute__((used)) static void FUNC_11(struct nl_object *VAR_7, void *VAR_8)
{
 struct get_neigh_handler *VAR_9 =
  (struct get_neigh_handler *)VAR_8;

 struct rtnl_route *VAR_10 = (struct rtnl_route *)VAR_7;
 struct nl_addr *VAR_11 = ((void*)0);
 struct nl_addr *VAR_12 = FUNC_6(VAR_10);
 int VAR_13;
 int VAR_14 = FUNC_7(VAR_10);
 struct rtnl_link *VAR_15;

 struct rtnl_nexthop *VAR_16 = FUNC_8(VAR_10, 0);

 if (VAR_16 != ((void*)0))
  VAR_11 = FUNC_9(VAR_16);
 VAR_13 = FUNC_10(VAR_16);

 if (VAR_11) {
  FUNC_2(VAR_9->dst);
  VAR_9->dst = FUNC_1(VAR_11);
 }

 if (VAR_1 == VAR_14 ||
     VAR_5 == VAR_14 ||
     VAR_3 == VAR_14 ||
     VAR_4 == VAR_14) {
  VAR_6 = VAR_0;
  goto err;
 }

 if (!VAR_9->src && VAR_12)
  VAR_9->src = FUNC_1(VAR_12);

 if (VAR_9->oif < 0 && VAR_13 > 0)
  VAR_9->oif = VAR_13;


 if (VAR_2 == VAR_14) {
  struct nl_addr *VAR_17;

  VAR_15 = FUNC_3(VAR_9->link_cache,
         VAR_9->oif);

  if (VAR_15 == ((void*)0))
   goto err;

  VAR_17 = FUNC_4(VAR_15);

  if (VAR_17 == ((void*)0))
   goto err_link;

  VAR_9->found_ll_addr = FUNC_1(VAR_17);
  FUNC_5(VAR_15);
 } else {
  FUNC_0(
   VAR_9->dst,
   &VAR_9->found_ll_addr);
 }

 return;

err_link:
 FUNC_5(VAR_15);
err:
 if (VAR_9->src) {
  FUNC_2(VAR_9->src);
  VAR_9->src = ((void*)0);
 }
}
