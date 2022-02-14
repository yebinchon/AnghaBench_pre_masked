
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,size_t,char const*) ;
 int FUNC_2 (struct sk_buff*,size_t,int ) ;
 int VAR_12 ;
 int FUNC_3 (char const*,int ,int *,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 char* FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct nlattr const* const) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct sock *VAR_13, struct sk_buff *VAR_14,
     const struct nlmsghdr *VAR_15,
     const struct nlattr * const VAR_16[])
{
 struct sk_buff *VAR_17;
 struct nlmsghdr *VAR_18;
 u8 VAR_19, VAR_20, VAR_21;
 const char *VAR_22;
 int VAR_23 = 0;

 if (FUNC_14(FUNC_12(VAR_16) ||
       VAR_16[VAR_7] == ((void*)0) ||
       VAR_16[VAR_3] == ((void*)0)))
  return -VAR_9;

 VAR_19 = FUNC_7(VAR_16[VAR_3]);
 VAR_22 = FUNC_6(VAR_16[VAR_7]);
 VAR_23 = FUNC_3(VAR_22, VAR_19, &VAR_20, &VAR_21);
 if (VAR_23)
  return VAR_23;

 VAR_17 = FUNC_10(VAR_12, VAR_2);
 if (VAR_17 == ((void*)0))
  return -VAR_1;

 VAR_18 = FUNC_13(VAR_17, FUNC_0(VAR_14).pid, VAR_15->nlmsg_seq, 0,
    VAR_8);
 if (!VAR_18)
  goto nlmsg_failure;
 FUNC_2(VAR_17, VAR_4, VAR_10);
 FUNC_1(VAR_17, VAR_7, VAR_22);
 FUNC_2(VAR_17, VAR_3, VAR_19);
 FUNC_2(VAR_17, VAR_5, VAR_21);
 FUNC_2(VAR_17, VAR_6, VAR_20);
 FUNC_9(VAR_17, VAR_18);

 FUNC_11("Send TYPE, nlmsg_len: %u\n", VAR_18->nlmsg_len);
 VAR_23 = FUNC_5(VAR_13, VAR_17, FUNC_0(VAR_14).pid, VAR_11);
 if (VAR_23 < 0)
  return VAR_23;

 return 0;

nla_put_failure:
 FUNC_8(VAR_17, VAR_18);
nlmsg_failure:
 FUNC_4(VAR_17);
 return -VAR_0;
}
