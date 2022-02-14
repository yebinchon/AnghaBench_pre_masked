
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_l3proto {int (* tuple_to_nlattr ) (struct sk_buff*,struct nf_conntrack_tuple const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int (*) (struct sk_buff*,struct nf_conntrack_tuple const*)) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct nf_conntrack_tuple const*) ;

__attribute__((used)) static inline int
FUNC_4(struct sk_buff *VAR_2,
    const struct nf_conntrack_tuple *VAR_3,
    struct nf_conntrack_l3proto *VAR_4)
{
 int VAR_5 = 0;
 struct nlattr *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0 | VAR_1);
 if (!VAR_6)
  goto nla_put_failure;

 if (FUNC_0(VAR_4->tuple_to_nlattr))
  VAR_5 = VAR_4->tuple_to_nlattr(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_6);

 return VAR_5;

nla_put_failure:
 return -1;
}
