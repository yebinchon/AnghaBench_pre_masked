
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct ip_set {TYPE_1__* type; int family; int name; } ;
typedef size_t ip_set_id_t ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int revision; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,size_t,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int VAR_14 ;
 size_t FUNC_3 (int ) ;
 struct ip_set** VAR_15 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct sock *VAR_16, struct sk_buff *VAR_17,
       const struct nlmsghdr *VAR_18,
       const struct nlattr * const VAR_19[])
{
 const struct ip_set *VAR_20;
 struct sk_buff *VAR_21;
 struct nlmsghdr *VAR_22;
 ip_set_id_t VAR_23;
 int VAR_24 = 0;

 if (FUNC_12(FUNC_10(VAR_19) ||
       VAR_19[VAR_7] == ((void*)0)))
  return -VAR_10;

 VAR_23 = FUNC_3(FUNC_6(VAR_19[VAR_7]));
 if (VAR_23 == VAR_11)
  return -VAR_1;
 VAR_20 = VAR_15[VAR_23];

 VAR_21 = FUNC_9(VAR_14, VAR_3);
 if (VAR_21 == ((void*)0))
  return -VAR_2;

 VAR_22 = FUNC_11(VAR_21, FUNC_0(VAR_17).pid, VAR_18->nlmsg_seq, 0,
    VAR_9);
 if (!VAR_22)
  goto nlmsg_failure;
 FUNC_2(VAR_21, VAR_5, VAR_12);
 FUNC_1(VAR_21, VAR_7, VAR_20->name);
 FUNC_1(VAR_21, VAR_8, VAR_20->type->name);
 FUNC_2(VAR_21, VAR_4, VAR_20->family);
 FUNC_2(VAR_21, VAR_6, VAR_20->type->revision);
 FUNC_8(VAR_21, VAR_22);

 VAR_24 = FUNC_5(VAR_16, VAR_21, FUNC_0(VAR_17).pid, VAR_13);
 if (VAR_24 < 0)
  return VAR_24;

 return 0;

nla_put_failure:
 FUNC_7(VAR_21, VAR_22);
nlmsg_failure:
 FUNC_4(VAR_21);
 return -VAR_0;
}
