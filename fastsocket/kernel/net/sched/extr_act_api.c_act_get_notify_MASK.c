
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct tc_action*,int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(u32 VAR_5, struct nlmsghdr *VAR_6, struct tc_action *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;
 if (FUNC_3(VAR_9, VAR_7, VAR_5, VAR_6->nlmsg_seq, 0, VAR_8, 0, 0) <= 0) {
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 return FUNC_2(VAR_9, &VAR_4, VAR_5);
}
