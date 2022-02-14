
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;
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
 int FUNC_1 (struct sk_buff*,int ,int ,int ,struct nf_conn*) ;
 int FUNC_2 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_6 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_7 (struct nf_conn*) ;
 struct nf_conn* FUNC_8 (struct nf_conntrack_tuple_hash*) ;
 struct nfgenmsg* FUNC_9 (struct nlmsghdr const*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct sock *VAR_13, struct sk_buff *VAR_14,
   const struct nlmsghdr *VAR_15,
   const struct nlattr * const VAR_16[])
{
 struct nf_conntrack_tuple_hash *VAR_17;
 struct nf_conntrack_tuple VAR_18;
 struct nf_conn *VAR_19;
 struct sk_buff *VAR_20 = ((void*)0);
 struct nfgenmsg *VAR_21 = FUNC_9(VAR_15);
 u_int8_t VAR_22 = VAR_21->nfgen_family;
 int VAR_23 = 0;

 if (VAR_15->nlmsg_flags & VAR_9) {
  struct netlink_dump_control VAR_24 = {
   .dump = VAR_11,
   .done = VAR_10,
  };
  return FUNC_4(VAR_13, VAR_14, VAR_15, &VAR_24);
 }

 if (VAR_16[VAR_0])
  VAR_23 = FUNC_2(VAR_16, &VAR_18, VAR_0, VAR_22);
 else if (VAR_16[VAR_1])
  VAR_23 = FUNC_2(VAR_16, &VAR_18, VAR_1, VAR_22);
 else
  return -VAR_2;

 if (VAR_23 < 0)
  return VAR_23;

 VAR_17 = FUNC_6(&VAR_12, &VAR_18);
 if (!VAR_17)
  return -VAR_3;

 VAR_19 = FUNC_8(VAR_17);

 VAR_23 = -VAR_4;
 VAR_20 = FUNC_10(VAR_8, VAR_5);
 if (VAR_20 == ((void*)0)) {
  FUNC_7(VAR_19);
  return -VAR_4;
 }

 FUNC_11();
 VAR_23 = FUNC_1(VAR_20, FUNC_0(VAR_14).pid, VAR_15->nlmsg_seq,
      VAR_6, VAR_19);
 FUNC_12();
 FUNC_7(VAR_19);
 if (VAR_23 <= 0)
  goto free;

 VAR_23 = FUNC_5(VAR_13, VAR_20, FUNC_0(VAR_14).pid, VAR_7);
 if (VAR_23 < 0)
  goto out;

 return 0;

free:
 FUNC_3(VAR_20);
out:
 return VAR_23;
}
