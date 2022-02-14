
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;
struct get_neigh_handler {scalar_t__ oif; int * found_ll_addr; int src; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nl_msg*,int *,struct get_neigh_handler*) ;
 int * FUNC_1 (struct get_neigh_handler*) ;

__attribute__((used)) static int FUNC_2(struct nl_msg *VAR_4, void *VAR_5)
{
 struct get_neigh_handler *VAR_6 =
  (struct get_neigh_handler *)VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_3, VAR_6);
 if (VAR_7 < 0) {
  VAR_2 = VAR_1;
  return VAR_7;
 }

 if (!VAR_6->dst || !VAR_6->src ||
     VAR_6->oif <= 0) {
  VAR_2 = VAR_0;
  return -1;
 }

 if (((void*)0) != VAR_6->found_ll_addr)
  goto found;

 VAR_6->found_ll_addr =
  FUNC_1(VAR_6);

found:
 return VAR_6->found_ll_addr ? 0 : -1;
}
