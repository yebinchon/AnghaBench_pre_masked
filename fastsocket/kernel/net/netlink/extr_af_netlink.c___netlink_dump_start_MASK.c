
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_protocol; } ;
struct sk_buff {int users; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_sock {int cb_mutex; struct netlink_callback* cb; } ;
struct netlink_dump_control {int min_dump_alloc; int module; int done; int dump; } ;
struct netlink_callback_extended {int module; int min_dump_alloc; } ;
struct netlink_callback {struct sk_buff* skb; struct nlmsghdr const* nlh; int done; int dump; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 struct netlink_callback* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct netlink_callback*) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (int ,int ,int ) ;
 struct netlink_callback_extended* FUNC_8 (struct netlink_callback*) ;
 struct netlink_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct sock *VAR_7, struct sk_buff *VAR_8,
         const struct nlmsghdr *VAR_9,
         struct netlink_dump_control *VAR_10)
{
 struct netlink_callback *VAR_11;
 struct netlink_callback_extended *VAR_12;
 struct sock *VAR_13;
 struct netlink_sock *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_2(VAR_6, VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 VAR_12 = FUNC_8(VAR_11);
 VAR_11->dump = VAR_10->dump;
 VAR_11->done = VAR_10->done;
 VAR_11->nlh = VAR_9;
 VAR_12->module = VAR_10->module;
 VAR_12->min_dump_alloc = VAR_10->min_dump_alloc;
 FUNC_1(&VAR_8->users);
 VAR_11->skb = VAR_8;

 VAR_13 = FUNC_7(FUNC_10(VAR_7), VAR_7->sk_protocol, FUNC_0(VAR_8).pid);
 if (VAR_13 == ((void*)0)) {
  FUNC_5(VAR_11);
  return -VAR_1;
 }
 VAR_14 = FUNC_9(VAR_13);

 FUNC_3(VAR_14->cb_mutex);

 if (VAR_14->cb) {
  FUNC_4(VAR_14->cb_mutex);
  FUNC_5(VAR_11);
  VAR_15 = -VAR_0;
  goto out;
 }

 if (!FUNC_12(VAR_12->module)) {
  FUNC_4(VAR_14->cb_mutex);
  FUNC_5(VAR_11);
  VAR_15 = -VAR_4;
  goto out;
 }

 VAR_14->cb = VAR_11;
 FUNC_4(VAR_14->cb_mutex);

 VAR_15 = FUNC_6(VAR_13);
out:
 FUNC_11(VAR_13);

 if (VAR_15)
  return VAR_15;




 return -VAR_2;
}
