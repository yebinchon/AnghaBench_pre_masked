
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
typedef enum ctattr_expect { ____Placeholder_ctattr_expect } ctattr_expect ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline int
FUNC_3(struct sk_buff *VAR_1,
    const struct nf_conntrack_tuple *VAR_2,
    enum ctattr_expect VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3 | VAR_0);
 if (!VAR_4)
  goto nla_put_failure;
 if (FUNC_0(VAR_1, VAR_2) < 0)
  goto nla_put_failure;
 FUNC_1(VAR_1, VAR_4);

 return 0;

nla_put_failure:
 return -1;
}
