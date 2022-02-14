
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;
typedef int __be32 ;
struct TYPE_2__ {int pid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,struct nf_conntrack_expect*) ;
 int FUNC_2 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 struct nf_conntrack_expect* FUNC_6 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_7 (struct nf_conntrack_expect*) ;
 int FUNC_8 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_9 (struct nlmsghdr const*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static int
FUNC_14(struct sock *VAR_13, struct sk_buff *VAR_14,
       const struct nlmsghdr *VAR_15,
       const struct nlattr * const VAR_16[])
{
 struct nf_conntrack_tuple VAR_17;
 struct nf_conntrack_expect *VAR_18;
 struct sk_buff *VAR_19;
 struct nfgenmsg *VAR_20 = FUNC_9(VAR_15);
 u_int8_t VAR_21 = VAR_20->nfgen_family;
 int VAR_22 = 0;

 if (VAR_15->nlmsg_flags & VAR_9) {
  struct netlink_dump_control VAR_23 = {
   .dump = VAR_11,
   .done = VAR_10,
  };
  return FUNC_4(VAR_13, VAR_14, VAR_15, &VAR_23);
 }

 if (VAR_16[VAR_1])
  VAR_22 = FUNC_2(VAR_16, &VAR_17, VAR_1, VAR_21);
 else
  return -VAR_2;

 if (VAR_22 < 0)
  return VAR_22;

 VAR_18 = FUNC_6(&VAR_12, &VAR_17);
 if (!VAR_18)
  return -VAR_3;

 if (VAR_16[VAR_0]) {
  __be32 VAR_24 = FUNC_8(VAR_16[VAR_0]);
  if (FUNC_11(VAR_24) != (u32)(unsigned long)VAR_18) {
   FUNC_7(VAR_18);
   return -VAR_3;
  }
 }

 VAR_22 = -VAR_4;
 VAR_19 = FUNC_10(VAR_8, VAR_5);
 if (VAR_19 == ((void*)0))
  goto out;

 FUNC_12();
 VAR_22 = FUNC_1(VAR_19, FUNC_0(VAR_14).pid,
          VAR_15->nlmsg_seq, VAR_6, VAR_18);
 FUNC_13();
 if (VAR_22 <= 0)
  goto free;

 FUNC_7(VAR_18);

 return FUNC_5(VAR_13, VAR_19, FUNC_0(VAR_14).pid, VAR_7);

free:
 FUNC_3(VAR_19);
out:
 FUNC_7(VAR_18);
 return VAR_22;
}
