
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct net_lro_mgr {int max_desc; } ;
struct net_lro_desc {scalar_t__ active; } ;
struct iphdr {int dummy; } ;


 int FUNC_0 (struct net_lro_mgr*,int ) ;
 int FUNC_1 (struct net_lro_desc*,struct iphdr*,struct tcphdr*) ;
 int VAR_0 ;

__attribute__((used)) static struct net_lro_desc *FUNC_2(struct net_lro_mgr *VAR_1,
      struct net_lro_desc *VAR_2,
      struct iphdr *VAR_3,
      struct tcphdr *VAR_4)
{
 struct net_lro_desc *VAR_5 = ((void*)0);
 struct net_lro_desc *VAR_6;
 int VAR_7 = VAR_1->max_desc;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_6 = &VAR_2[VAR_8];
  if (VAR_6->active)
   if (!FUNC_1(VAR_6, VAR_3, VAR_4)) {
    VAR_5 = VAR_6;
    goto out;
   }
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (!VAR_2[VAR_8].active) {
   VAR_5 = &VAR_2[VAR_8];
   goto out;
  }
 }

 FUNC_0(VAR_1, VAR_0);
out:
 return VAR_5;
}
