
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct TYPE_9__ {int dev; int rt_next; } ;
struct TYPE_6__ {TYPE_4__ dst; } ;
struct rtable {TYPE_1__ u; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_10__ {int pid; } ;
struct TYPE_8__ {int chain; } ;
struct TYPE_7__ {int nlmsg_seq; } ;


 TYPE_5__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,struct net*) ;
 struct rtable* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct net*,struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_8 (struct rtable*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 struct net* FUNC_11 (int ) ;

int FUNC_12(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 struct rtable *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 struct net *VAR_11;

 VAR_11 = FUNC_11(VAR_4->sk);

 VAR_8 = VAR_5->args[0];
 if (VAR_8 < 0)
  VAR_8 = 0;
 VAR_10 = VAR_9 = VAR_5->args[1];
 for (VAR_7 = VAR_8; VAR_7 <= VAR_2; VAR_7++, VAR_10 = 0) {
  if (!VAR_3[VAR_7].chain)
   continue;
  FUNC_5();
  for (VAR_6 = FUNC_4(VAR_3[VAR_7].chain), VAR_9 = 0; VAR_6;
       VAR_6 = FUNC_4(VAR_6->u.dst.rt_next), VAR_9++) {
   if (!FUNC_3(FUNC_1(VAR_6->u.dst.dev), VAR_11) || VAR_9 < VAR_10)
    continue;
   if (FUNC_8(VAR_6))
    continue;
   FUNC_10(VAR_4, FUNC_2(&VAR_6->u.dst));
   if (FUNC_7(VAR_11, VAR_4, FUNC_0(VAR_5->skb).pid,
      VAR_5->nlh->nlmsg_seq, VAR_1,
      1, VAR_0) <= 0) {
    FUNC_9(VAR_4);
    FUNC_6();
    goto done;
   }
   FUNC_9(VAR_4);
  }
  FUNC_6();
 }

done:
 VAR_5->args[0] = VAR_7;
 VAR_5->args[1] = VAR_9;
 return VAR_4->len;
}
