
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct netlink_skb_parms {int pid; } ;
struct dn_fib_node {int fn_key; int fn_scope; int fn_type; } ;


 int FUNC_0 (struct dn_fib_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int,int ,int ,int ,int *,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,int *,int ,int ,struct nlmsghdr*,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(int VAR_5, struct dn_fib_node *VAR_6, int VAR_7, u32 VAR_8,
   struct nlmsghdr *VAR_9, struct netlink_skb_parms *VAR_10)
{
 struct sk_buff *VAR_11;
 u32 VAR_12 = VAR_10 ? VAR_10->pid : 0;
 int VAR_13 = -VAR_1;

 VAR_11 = FUNC_5(FUNC_3(FUNC_0(VAR_6)), VAR_2);
 if (VAR_11 == ((void*)0))
  goto errout;

 VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_9->nlmsg_seq, VAR_5, VAR_8,
          VAR_6->fn_type, VAR_6->fn_scope, &VAR_6->fn_key, VAR_7,
          FUNC_0(VAR_6), 0);
 if (VAR_13 < 0) {

  FUNC_1(VAR_13 == -VAR_0);
  FUNC_4(VAR_11);
  goto errout;
 }
 FUNC_6(VAR_11, &VAR_4, VAR_12, VAR_3, VAR_9, VAR_2);
 return;
errout:
 if (VAR_13 < 0)
  FUNC_7(&VAR_4, VAR_3, VAR_13);
}
