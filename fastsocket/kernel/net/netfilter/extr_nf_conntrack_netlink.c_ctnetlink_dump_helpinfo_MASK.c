
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int (* to_nlattr ) (struct sk_buff*,struct nf_conn const*) ;int name; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct nf_conn_help* FUNC_1 (struct nf_conn const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 struct nf_conntrack_helper* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn const*) ;

__attribute__((used)) static inline int
FUNC_6(struct sk_buff *VAR_3, const struct nf_conn *VAR_4)
{
 struct nlattr *VAR_5;
 const struct nf_conn_help *VAR_6 = FUNC_1(VAR_4);
 struct nf_conntrack_helper *VAR_7;

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_4(VAR_6->helper);
 if (!VAR_7)
  goto out;

 VAR_5 = FUNC_3(VAR_3, VAR_0 | VAR_2);
 if (!VAR_5)
  goto nla_put_failure;
 FUNC_0(VAR_3, VAR_1, VAR_7->name);

 if (VAR_7->to_nlattr)
  VAR_7->to_nlattr(VAR_3, VAR_4);

 FUNC_2(VAR_3, VAR_5);
out:
 return 0;

nla_put_failure:
 return -1;
}
