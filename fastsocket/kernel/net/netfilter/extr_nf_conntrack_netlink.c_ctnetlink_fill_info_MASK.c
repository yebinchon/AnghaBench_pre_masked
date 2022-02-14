
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct nf_conn*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,struct nf_conn*) ;
 int FUNC_12 (struct nf_conn*) ;
 int FUNC_13 (struct nf_conn*,int ) ;
 int FUNC_14 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_17 (struct nlmsghdr*) ;
 int FUNC_18 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_19 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_20(struct sk_buff *VAR_8, u32 VAR_9, u32 VAR_10,
      int VAR_11, struct nf_conn *VAR_12)
{
 struct nlmsghdr *VAR_13;
 struct nfgenmsg *VAR_14;
 struct nlattr *VAR_15;
 unsigned int VAR_16 = VAR_9 ? VAR_7 : 0;

 VAR_11 |= VAR_5 << 8;
 VAR_13 = FUNC_19(VAR_8, VAR_9, VAR_10, VAR_11, sizeof(*VAR_14), VAR_16);
 if (VAR_13 == ((void*)0))
  goto nlmsg_failure;

 VAR_14 = FUNC_17(VAR_13);
 VAR_14->nfgen_family = FUNC_12(VAR_12);
 VAR_14->version = VAR_4;
 VAR_14->res_id = 0;

 VAR_15 = FUNC_15(VAR_8, VAR_0 | VAR_6);
 if (!VAR_15)
  goto nla_put_failure;
 if (FUNC_10(VAR_8, FUNC_13(VAR_12, VAR_2)) < 0)
  goto nla_put_failure;
 FUNC_14(VAR_8, VAR_15);

 VAR_15 = FUNC_15(VAR_8, VAR_1 | VAR_6);
 if (!VAR_15)
  goto nla_put_failure;
 if (FUNC_10(VAR_8, FUNC_13(VAR_12, VAR_3)) < 0)
  goto nla_put_failure;
 FUNC_14(VAR_8, VAR_15);

 if (FUNC_8(VAR_8, VAR_12) < 0 ||
     FUNC_9(VAR_8, VAR_12) < 0 ||
     FUNC_0(VAR_8, VAR_12, VAR_2) < 0 ||
     FUNC_0(VAR_8, VAR_12, VAR_3) < 0 ||
     FUNC_6(VAR_8, VAR_12) < 0 ||
     FUNC_1(VAR_8, VAR_12) < 0 ||
     FUNC_3(VAR_8, VAR_12) < 0 ||
     FUNC_7(VAR_8, VAR_12) < 0 ||
     FUNC_2(VAR_8, VAR_12) < 0 ||
     FUNC_11(VAR_8, VAR_12) < 0 ||
     FUNC_4(VAR_8, VAR_12) < 0 ||
     FUNC_5(VAR_8, VAR_12) < 0)
  goto nla_put_failure;

 FUNC_18(VAR_8, VAR_13);
 return VAR_8->len;

nlmsg_failure:
nla_put_failure:
 FUNC_16(VAR_8, VAR_13);
 return -1;
}
