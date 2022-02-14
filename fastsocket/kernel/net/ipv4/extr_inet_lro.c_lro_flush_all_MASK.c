
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_lro_mgr {int max_desc; struct net_lro_desc* lro_arr; } ;
struct net_lro_desc {scalar_t__ active; } ;


 int FUNC_0 (struct net_lro_mgr*,struct net_lro_desc*) ;

void FUNC_1(struct net_lro_mgr *VAR_0)
{
 int VAR_1;
 struct net_lro_desc *VAR_2 = VAR_0->lro_arr;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_desc; VAR_1++) {
  if (VAR_2[VAR_1].active)
   FUNC_0(VAR_0, &VAR_2[VAR_1]);
 }
}
