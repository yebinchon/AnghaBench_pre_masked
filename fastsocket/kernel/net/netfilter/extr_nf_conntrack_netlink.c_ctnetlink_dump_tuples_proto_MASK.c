
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
struct nf_conntrack_l4proto {int (* tuple_to_nlattr ) (struct sk_buff*,struct nf_conntrack_tuple const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (int (*) (struct sk_buff*,struct nf_conntrack_tuple const*)) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,struct nf_conntrack_tuple const*) ;

__attribute__((used)) static inline int
FUNC_5(struct sk_buff *VAR_3,
       const struct nf_conntrack_tuple *VAR_4,
       struct nf_conntrack_l4proto *VAR_5)
{
 int VAR_6 = 0;
 struct nlattr *VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_1 | VAR_2);
 if (!VAR_7)
  goto nla_put_failure;
 FUNC_0(VAR_3, VAR_0, VAR_4->dst.protonum);

 if (FUNC_1(VAR_5->tuple_to_nlattr))
  VAR_6 = VAR_5->tuple_to_nlattr(VAR_3, VAR_4);

 FUNC_2(VAR_3, VAR_7);

 return VAR_6;

nla_put_failure:
 return -1;
}
