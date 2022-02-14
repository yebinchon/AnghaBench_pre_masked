
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_frag_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_lro_mgr {int features; } ;
typedef int __wsum ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_lro_mgr*,struct skb_frag_struct*,int,int,int *,int ,void*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct net_lro_mgr *VAR_1,
         struct skb_frag_struct *VAR_2,
         int VAR_3, int VAR_4, void *VAR_5, __wsum VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), 0,
     VAR_5, VAR_6);
 if (!VAR_7)
  return;

 if (VAR_1->features & VAR_0)
  FUNC_1(VAR_7);
 else
  FUNC_2(VAR_7);
}
