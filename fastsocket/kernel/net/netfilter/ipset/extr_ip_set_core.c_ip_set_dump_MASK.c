
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlattr const* const*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct sock *VAR_3, struct sk_buff *VAR_4,
     const struct nlmsghdr *VAR_5,
     const struct nlattr * const VAR_6[])
{
 if (FUNC_2(FUNC_1(VAR_6)))
  return -VAR_0;

 {
  struct netlink_dump_control VAR_7 = {
   .dump = VAR_2,
   .done = VAR_1,
  };
  return FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_7);
 }
}
