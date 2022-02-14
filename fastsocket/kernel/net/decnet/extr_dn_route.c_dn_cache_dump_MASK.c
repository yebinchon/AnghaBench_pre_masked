
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct rtmsg {int rtm_flags; } ;
struct netlink_callback {int* args; TYPE_4__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int dn_next; } ;
struct TYPE_7__ {TYPE_2__ dst; } ;
struct dn_route {TYPE_1__ u; } ;
struct TYPE_11__ {int pid; } ;
struct TYPE_10__ {int nlmsg_seq; } ;
struct TYPE_9__ {int chain; } ;


 int VAR_0 ;
 TYPE_6__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 struct net VAR_6 ;
 struct dn_route* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 struct net* FUNC_10 (int ) ;

int FUNC_11(struct sk_buff *VAR_7, struct netlink_callback *VAR_8)
{
 struct net *VAR_9 = FUNC_10(VAR_7->sk);
 struct dn_route *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9 != &VAR_6)
  return 0;

 if (FUNC_2(VAR_8->nlh, 0) < sizeof(struct rtmsg))
  return -VAR_0;
 if (!(((struct rtmsg *)FUNC_1(VAR_8->nlh))->rtm_flags&VAR_2))
  return 0;

 VAR_12 = VAR_8->args[0];
 VAR_14 = VAR_13 = VAR_8->args[1];
 for(VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
  if (VAR_11 < VAR_12)
   continue;
  if (VAR_11 > VAR_12)
   VAR_14 = 0;
  FUNC_6();
  for(VAR_10 = FUNC_5(VAR_5[VAR_11].chain), VAR_13 = 0;
   VAR_10;
   VAR_10 = FUNC_5(VAR_10->u.dst.dn_next), VAR_13++) {
   if (VAR_13 < VAR_14)
    continue;
   FUNC_9(VAR_7, FUNC_4(&VAR_10->u.dst));
   if (FUNC_3(VAR_7, FUNC_0(VAR_8->skb).pid,
     VAR_8->nlh->nlmsg_seq, VAR_3,
     1, VAR_1) <= 0) {
    FUNC_8(VAR_7);
    FUNC_7();
    goto done;
   }
   FUNC_8(VAR_7);
  }
  FUNC_7();
 }

done:
 VAR_8->args[0] = VAR_11;
 VAR_8->args[1] = VAR_13;
 return VAR_7->len;
}
