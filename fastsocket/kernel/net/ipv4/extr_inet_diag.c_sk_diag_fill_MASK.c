
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet_timewait_sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*,int,int ,int ,int ,struct nlmsghdr const*) ;
 int FUNC_1 (struct inet_timewait_sock*,struct sk_buff*,int,int ,int ,int ,struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_1, struct sk_buff *VAR_2,
   int VAR_3, u32 VAR_4, u32 VAR_5, u16 VAR_6,
   const struct nlmsghdr *VAR_7)
{
 if (VAR_1->sk_state == VAR_0)
  return FUNC_1((struct inet_timewait_sock *)VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
