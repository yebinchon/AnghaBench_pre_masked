
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct nf_conn const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline int
FUNC_4(struct sk_buff *VAR_3, const struct nf_conn *VAR_4)
{
 struct nlattr *VAR_5;

 if (!(VAR_4->status & VAR_1))
  return 0;

 VAR_5 = FUNC_3(VAR_3, VAR_0 | VAR_2);
 if (!VAR_5)
  goto nla_put_failure;
 if (FUNC_0(VAR_3, FUNC_1(VAR_4)) < 0)
  goto nla_put_failure;
 FUNC_2(VAR_3, VAR_5);

 return 0;

nla_put_failure:
 return -1;
}
