
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct nlattr* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,struct nlattr const*) ;
 int FUNC_5 (struct nlattr const*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;

__attribute__((used)) static int FUNC_7(const struct nlattr *VAR_2, struct sk_buff *VAR_3)
{
 const struct nlattr *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_5(VAR_4);
 struct nlattr *VAR_6;
 int VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_3(VAR_3, VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_6(VAR_3, FUNC_0(VAR_4));
  if (VAR_7)
   return VAR_7;
  FUNC_2(VAR_3, VAR_6);
  break;
 default:
  if (FUNC_4(VAR_3, VAR_1, FUNC_1(VAR_2), VAR_4))
   return -VAR_0;
  break;
 }

 return 0;
}
