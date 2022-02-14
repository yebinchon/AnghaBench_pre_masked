
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_l4proto {int (* to_nlattr ) (struct sk_buff*,struct nlattr*,struct nf_conn*) ;} ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*,struct nf_conn*) ;

__attribute__((used)) static inline int
FUNC_6(struct sk_buff *VAR_2, struct nf_conn *VAR_3)
{
 struct nf_conntrack_l4proto *VAR_4;
 struct nlattr *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(FUNC_1(VAR_3), FUNC_2(VAR_3));
 if (!VAR_4->to_nlattr)
  return 0;

 VAR_5 = FUNC_4(VAR_2, VAR_0 | VAR_1);
 if (!VAR_5)
  goto nla_put_failure;

 VAR_6 = VAR_4->to_nlattr(VAR_2, VAR_5, VAR_3);

 FUNC_3(VAR_2, VAR_5);

 return VAR_6;

nla_put_failure:
 return -1;
}
