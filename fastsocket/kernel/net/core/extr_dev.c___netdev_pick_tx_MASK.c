
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int sk_dst_cache; } ;
struct sk_buff {scalar_t__ ooo_okay; struct sock* sk; } ;
struct net_device {int real_num_tx_queues; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 struct dst_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*,struct sk_buff*) ;

u16 FUNC_6(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 int VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 < 0 || VAR_1->ooo_okay ||
     VAR_3 >= VAR_0->real_num_tx_queues) {
  int VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 < 0)
   VAR_4 = FUNC_5(VAR_0, VAR_1);

  if (VAR_3 != VAR_4 && VAR_2) {
   struct dst_entry *VAR_5 =
        FUNC_1(VAR_2->sk_dst_cache, 1);

   if (VAR_5 && FUNC_4(VAR_1) == VAR_5)
    FUNC_3(VAR_2, VAR_4);

  }

  VAR_3 = VAR_4;
 }

 return VAR_3;
}
