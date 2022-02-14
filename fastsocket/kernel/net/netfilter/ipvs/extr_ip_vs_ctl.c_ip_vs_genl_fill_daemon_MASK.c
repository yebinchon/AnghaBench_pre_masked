
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,char const*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, __be32 VAR_6,
      const char *VAR_7, __be32 VAR_8)
{
 struct nlattr *VAR_9;

 VAR_9 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3, VAR_6);
 FUNC_0(VAR_5, VAR_2, VAR_7);
 FUNC_1(VAR_5, VAR_4, VAR_8);

 FUNC_3(VAR_5, VAR_9);

 return 0;

nla_put_failure:
 FUNC_2(VAR_5, VAR_9);
 return -VAR_0;
}
