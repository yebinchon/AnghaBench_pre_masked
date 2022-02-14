
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

int FUNC_4(struct sk_buff *VAR_4, u32 *VAR_5)
{
 struct nlattr *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5[VAR_7]) {
   VAR_8++;
   FUNC_0(VAR_4, VAR_7+1, VAR_5[VAR_7]);
  }
 }

 if (!VAR_8) {
  FUNC_1(VAR_4, VAR_6);
  return 0;
 }

 return FUNC_2(VAR_4, VAR_6);

nla_put_failure:
 FUNC_1(VAR_4, VAR_6);
 return -VAR_0;
}
