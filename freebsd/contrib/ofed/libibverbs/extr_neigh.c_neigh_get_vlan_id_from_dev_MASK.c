
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtnl_link {int dummy; } ;
struct get_neigh_handler {int oif; int link_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtnl_link* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct rtnl_link*) ;
 int FUNC_2 (struct rtnl_link*) ;
 int FUNC_3 (struct rtnl_link*) ;

uint16_t FUNC_4(struct get_neigh_handler *VAR_2)
{
 struct rtnl_link *VAR_3;
 int VAR_4 = 0xffff;

 VAR_3 = FUNC_0(VAR_2->link_cache, VAR_2->oif);
 if (VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return VAR_4;
 }

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 return VAR_4 >= 0 && VAR_4 <= 0xfff ? VAR_4 : 0xffff;
}
