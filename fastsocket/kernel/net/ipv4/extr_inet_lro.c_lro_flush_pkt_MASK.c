
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct net_lro_mgr {int lro_arr; } ;
struct net_lro_desc {scalar_t__ active; } ;
struct iphdr {int dummy; } ;


 int FUNC_0 (struct net_lro_mgr*,struct net_lro_desc*) ;
 struct net_lro_desc* FUNC_1 (struct net_lro_mgr*,int ,struct iphdr*,struct tcphdr*) ;

void FUNC_2(struct net_lro_mgr *VAR_0,
    struct iphdr *VAR_1, struct tcphdr *VAR_2)
{
 struct net_lro_desc *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_0->lro_arr, VAR_1, VAR_2);
 if (VAR_3->active)
  FUNC_0(VAR_0, VAR_3);
}
