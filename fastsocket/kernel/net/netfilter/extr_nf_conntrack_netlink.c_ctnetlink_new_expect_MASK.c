
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct nf_conntrack_expect* FUNC_1 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nf_conntrack_expect*,struct nlattr const* const*) ;
 int FUNC_3 (struct nlattr const* const*,int ,int ,int ) ;
 int FUNC_4 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr const*) ;
 int FUNC_6 (struct nlmsghdr const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct sock *VAR_10, struct sk_buff *VAR_11,
       const struct nlmsghdr *VAR_12,
       const struct nlattr * const VAR_13[])
{
 struct nf_conntrack_tuple VAR_14;
 struct nf_conntrack_expect *VAR_15;
 struct nfgenmsg *VAR_16 = FUNC_5(VAR_12);
 u_int8_t VAR_17 = VAR_16->nfgen_family;
 int VAR_18 = 0;

 if (!VAR_13[VAR_2]
     || !VAR_13[VAR_0]
     || !VAR_13[VAR_1])
  return -VAR_4;

 VAR_18 = FUNC_4(VAR_13, &VAR_14, VAR_2, VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_7(&VAR_9);
 VAR_15 = FUNC_1(&VAR_8, &VAR_14);

 if (!VAR_15) {
  FUNC_8(&VAR_9);
  VAR_18 = -VAR_5;
  if (VAR_12->nlmsg_flags & VAR_6) {
   VAR_18 = FUNC_3(VAR_13,
            VAR_17,
            FUNC_0(VAR_11).pid,
            FUNC_6(VAR_12));
  }
  return VAR_18;
 }

 VAR_18 = -VAR_3;
 if (!(VAR_12->nlmsg_flags & VAR_7))
  VAR_18 = FUNC_2(VAR_15, VAR_13);
 FUNC_8(&VAR_9);

 return VAR_18;
}
