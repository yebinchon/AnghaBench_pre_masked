
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; int protocol; } ;
struct hlist_head {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int lock; struct hlist_head* ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct hlist_head*) ;
 struct net* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct hlist_head*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct iphdr *VAR_4, int VAR_5)
{
 struct sock *VAR_6;
 struct hlist_head *VAR_7;
 int VAR_8 = 0;
 struct net *VAR_9;

 FUNC_6(&VAR_2.lock);
 VAR_7 = &VAR_2.ht[VAR_5];
 if (FUNC_3(VAR_7))
  goto out;

 VAR_9 = FUNC_2(VAR_3->dev);
 VAR_6 = FUNC_0(VAR_9, FUNC_1(VAR_7), VAR_4->protocol,
        VAR_4->saddr, VAR_4->daddr,
        VAR_3->dev->ifindex);

 while (VAR_6) {
  VAR_8 = 1;
  if (VAR_4->protocol != VAR_1 || !FUNC_4(VAR_6, VAR_3)) {
   struct sk_buff *VAR_10 = FUNC_9(VAR_3, VAR_0);


   if (VAR_10)
    FUNC_5(VAR_6, VAR_10);
  }
  VAR_6 = FUNC_0(VAR_9, FUNC_8(VAR_6), VAR_4->protocol,
         VAR_4->saddr, VAR_4->daddr,
         VAR_3->dev->ifindex);
 }
out:
 FUNC_7(&VAR_2.lock);
 return VAR_8;
}
