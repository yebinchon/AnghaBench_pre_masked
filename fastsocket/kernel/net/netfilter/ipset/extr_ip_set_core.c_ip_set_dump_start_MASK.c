
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_len; } ;
struct netlink_callback {scalar_t__* args; TYPE_1__* nlh; int skb; } ;
struct ip_set {int name; int lock; TYPE_3__* variant; TYPE_2__* type; int family; } ;
typedef scalar_t__ ip_set_id_t ;
struct TYPE_8__ {scalar_t__ pid; } ;
struct TYPE_7__ {int (* head ) (struct ip_set*,struct sk_buff*) ;int (* list ) (struct ip_set*,struct sk_buff*,struct netlink_callback*) ;} ;
struct TYPE_6__ {int features; int revision; int name; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 TYPE_4__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct netlink_callback*) ;
 struct ip_set** VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct nlmsghdr*,int) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,scalar_t__,int ,unsigned int,int ) ;
 int FUNC_14 (struct ip_set*,struct sk_buff*) ;
 int FUNC_15 (struct ip_set*,struct sk_buff*,struct netlink_callback*) ;

__attribute__((used)) static int
FUNC_16(struct sk_buff *VAR_20, struct netlink_callback *VAR_21)
{
 ip_set_id_t VAR_22 = VAR_14, VAR_23;
 struct ip_set *VAR_24 = ((void*)0);
 struct nlmsghdr *VAR_25 = ((void*)0);
 unsigned int VAR_26 = FUNC_0(VAR_21->skb).pid ? VAR_17 : 0;
 int VAR_27 = 0;

 if (VAR_21->args[0] == VAR_1) {
  VAR_27 = FUNC_5(VAR_21);
  if (VAR_27 < 0) {
   VAR_25 = FUNC_9(VAR_21->skb);


   if (VAR_25->nlmsg_flags & VAR_16)
    FUNC_7(VAR_21->skb, VAR_25, VAR_27);
   return VAR_27;
  }
 }

 if (VAR_21->args[1] >= VAR_19)
  goto out;

 VAR_23 = VAR_21->args[0] == VAR_3 ? VAR_21->args[1] + 1 : VAR_19;
dump_last:
 FUNC_10("args[0]: %ld args[1]: %ld\n", VAR_21->args[0], VAR_21->args[1]);
 for (; VAR_21->args[1] < VAR_23; VAR_21->args[1]++) {
  VAR_22 = (ip_set_id_t) VAR_21->args[1];
  VAR_24 = VAR_18[VAR_22];
  if (VAR_24 == ((void*)0)) {
   if (VAR_21->args[0] == VAR_3) {
    VAR_27 = -VAR_6;
    goto out;
   }
   continue;
  }



  if (VAR_21->args[0] != VAR_3 &&
      ((VAR_21->args[0] == VAR_0) ==
       !!(VAR_24->type->features & VAR_13)))
   continue;
  FUNC_10("List set: %s\n", VAR_24->name);
  if (!VAR_21->args[2]) {

   FUNC_10("reference set\n");
   FUNC_3(VAR_22);
  }
  VAR_25 = FUNC_13(VAR_20, FUNC_0(VAR_21->skb).pid,
    VAR_21->nlh->nlmsg_seq, VAR_26,
    VAR_12);
  if (!VAR_25) {
   VAR_27 = -VAR_5;
   goto release_refcount;
  }
  FUNC_2(VAR_20, VAR_8, VAR_15);
  FUNC_1(VAR_20, VAR_10, VAR_24->name);
  switch (VAR_21->args[2]) {
  case 0:

   FUNC_1(VAR_20, VAR_11,
           VAR_24->type->name);
   FUNC_2(VAR_20, VAR_7,
       VAR_24->family);
   FUNC_2(VAR_20, VAR_9,
       VAR_24->type->revision);
   VAR_27 = VAR_24->variant->head(VAR_24, VAR_20);
   if (VAR_27 < 0)
    goto release_refcount;

  default:
   FUNC_11(&VAR_24->lock);
   VAR_27 = VAR_24->variant->list(VAR_24, VAR_20, VAR_21);
   FUNC_12(&VAR_24->lock);
   if (!VAR_21->args[2]) {

    if (VAR_21->args[0] == VAR_3)
     VAR_21->args[1] = VAR_14;
    else
     VAR_21->args[1]++;
   }
   goto release_refcount;
  }
 }

 if (VAR_21->args[0] == VAR_0) {
  VAR_21->args[0] = VAR_2;
  VAR_21->args[1] = 0;
  goto dump_last;
 }
 goto out;

nla_put_failure:
 VAR_27 = -VAR_4;
release_refcount:

 if (VAR_27 || !VAR_21->args[2]) {
  FUNC_10("release set %s\n", VAR_18[VAR_22]->name);
  FUNC_6(VAR_22);
 }
out:
 if (VAR_25) {
  FUNC_8(VAR_20, VAR_25);
  FUNC_10("nlmsg_len: %u\n", VAR_25->nlmsg_len);
  FUNC_4(VAR_25);
 }

 return VAR_27 < 0 ? VAR_27 : VAR_20->len;
}
