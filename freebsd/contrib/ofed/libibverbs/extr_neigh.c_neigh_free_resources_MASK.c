
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_neigh_handler {int * sock; int * link_cache; int * route_cache; int * neigh_cache; int * found_ll_addr; int * dst; int * src; int * filter_neigh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct get_neigh_handler *VAR_0)
{

 if (VAR_0->filter_neigh != ((void*)0)) {
  FUNC_5(VAR_0->filter_neigh);
  VAR_0->filter_neigh = ((void*)0);
 }

 if (VAR_0->src != ((void*)0)) {
  FUNC_0(VAR_0->src);
  VAR_0->src = ((void*)0);
 }

 if (VAR_0->dst != ((void*)0)) {
  FUNC_0(VAR_0->dst);
  VAR_0->dst = ((void*)0);
 }

 if (VAR_0->found_ll_addr != ((void*)0)) {
  FUNC_0(VAR_0->found_ll_addr);
  VAR_0->found_ll_addr = ((void*)0);
 }

 if (VAR_0->neigh_cache != ((void*)0)) {
  FUNC_2(VAR_0->neigh_cache);
  FUNC_1(VAR_0->neigh_cache);
  VAR_0->neigh_cache = ((void*)0);
 }

 if (VAR_0->route_cache != ((void*)0)) {
  FUNC_2(VAR_0->route_cache);
  FUNC_1(VAR_0->route_cache);
  VAR_0->route_cache = ((void*)0);
 }

 if (VAR_0->link_cache != ((void*)0)) {
  FUNC_2(VAR_0->link_cache);
  FUNC_1(VAR_0->link_cache);
  VAR_0->link_cache = ((void*)0);
 }

 if (VAR_0->sock != ((void*)0)) {
  FUNC_3(VAR_0->sock);
  FUNC_4(VAR_0->sock);
  VAR_0->sock = ((void*)0);
 }
}
