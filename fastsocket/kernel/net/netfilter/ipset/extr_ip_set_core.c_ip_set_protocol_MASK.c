
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,size_t,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct sock *VAR_9, struct sk_buff *VAR_10,
  const struct nlmsghdr *VAR_11,
  const struct nlattr * const VAR_12[])
{
 struct sk_buff *VAR_13;
 struct nlmsghdr *VAR_14;
 int VAR_15 = 0;

 if (FUNC_8(VAR_12[VAR_3] == ((void*)0)))
  return -VAR_5;

 VAR_13 = FUNC_6(VAR_8, VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_13, FUNC_0(VAR_10).pid, VAR_11->nlmsg_seq, 0,
    VAR_4);
 if (!VAR_14)
  goto nlmsg_failure;
 FUNC_1(VAR_13, VAR_3, VAR_6);
 FUNC_5(VAR_13, VAR_14);

 VAR_15 = FUNC_3(VAR_9, VAR_13, FUNC_0(VAR_10).pid, VAR_7);
 if (VAR_15 < 0)
  return VAR_15;

 return 0;

nla_put_failure:
 FUNC_4(VAR_13, VAR_14);
nlmsg_failure:
 FUNC_2(VAR_13);
 return -VAR_0;
}
