
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_neigh {int dummy; } ;
struct nl_object {int dummy; } ;
struct get_neigh_handler {int * found_ll_addr; scalar_t__ filter_neigh; } ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nl_object*,struct nl_object*) ;
 int * FUNC_2 (struct rtnl_neigh*) ;

__attribute__((used)) static void FUNC_3(struct nl_object *VAR_0, void *VAR_1)
{
 struct get_neigh_handler *VAR_2 =
  (struct get_neigh_handler *)VAR_1;

 if (FUNC_1(
  VAR_0,
  (struct nl_object *)VAR_2->filter_neigh)) {
  struct rtnl_neigh *VAR_3 = (struct rtnl_neigh *)VAR_0;

  if (VAR_2->found_ll_addr == ((void*)0)) {
   if (FUNC_2(VAR_3) == ((void*)0))
    return;

   VAR_2->found_ll_addr =
    FUNC_0(FUNC_2(VAR_3));
  }
 }
}
