
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct TYPE_3__ {int l3num; } ;
struct TYPE_4__ {TYPE_1__ src; } ;
struct nf_conntrack_expect {TYPE_2__ tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct nf_conntrack_expect const*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_3, u32 VAR_4, u32 VAR_5,
   int VAR_6, const struct nf_conntrack_expect *VAR_7)
{
 struct nlmsghdr *VAR_8;
 struct nfgenmsg *VAR_9;
 unsigned int VAR_10 = VAR_4 ? VAR_2 : 0;

 VAR_6 |= VAR_1 << 8;
 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, sizeof(*VAR_9), VAR_10);
 if (VAR_8 == ((void*)0))
  goto nlmsg_failure;

 VAR_9 = FUNC_2(VAR_8);
 VAR_9->nfgen_family = VAR_7->tuple.src.l3num;
 VAR_9->version = VAR_0;
 VAR_9->res_id = 0;

 if (FUNC_0(VAR_3, VAR_7) < 0)
  goto nla_put_failure;

 FUNC_3(VAR_3, VAR_8);
 return VAR_3->len;

nlmsg_failure:
nla_put_failure:
 FUNC_1(VAR_3, VAR_8);
 return -1;
}
