
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct rtgenmsg {int rtgen_family; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {struct neigh_parms* next; } ;
struct neigh_table {int family; TYPE_1__ parms; struct neigh_table* next; } ;
struct neigh_parms {struct neigh_parms* next; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct neigh_parms*) ;
 struct neigh_table* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct neigh_table*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct neigh_table*,struct neigh_parms*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct net*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct net* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 struct net *VAR_6 = FUNC_8(VAR_4->sk);
 int VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10 = VAR_5->args[0];
 int VAR_11 = VAR_5->args[1];
 struct neigh_table *VAR_12;

 VAR_7 = ((struct rtgenmsg *) FUNC_5(VAR_5->nlh))->rtgen_family;

 FUNC_6(&VAR_3);
 for (VAR_12 = VAR_2, VAR_8 = 0; VAR_12; VAR_12 = VAR_12->next, VAR_8++) {
  struct neigh_parms *VAR_13;

  if (VAR_8 < VAR_10 || (VAR_7 && VAR_12->family != VAR_7))
   continue;

  if (FUNC_2(VAR_4, VAR_12, FUNC_0(VAR_5->skb).pid,
           VAR_5->nlh->nlmsg_seq, VAR_1,
           VAR_0) <= 0)
   break;

  for (VAR_9 = 0, VAR_13 = VAR_12->parms.next; VAR_13; VAR_13 = VAR_13->next) {
   if (!FUNC_4(FUNC_1(VAR_13), VAR_6))
    continue;

   if (VAR_9 < VAR_11)
    goto next;

   if (FUNC_3(VAR_4, VAR_12, VAR_13,
           FUNC_0(VAR_5->skb).pid,
           VAR_5->nlh->nlmsg_seq,
           VAR_1,
           VAR_0) <= 0)
    goto out;
  next:
   VAR_9++;
  }

  VAR_11 = 0;
 }
out:
 FUNC_7(&VAR_3);
 VAR_5->args[0] = VAR_8;
 VAR_5->args[1] = VAR_9;

 return VAR_4->len;
}
