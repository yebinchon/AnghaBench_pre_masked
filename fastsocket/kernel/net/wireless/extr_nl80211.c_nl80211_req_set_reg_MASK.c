
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
typedef enum nl80211_user_reg_hint_type { ____Placeholder_nl80211_user_reg_hint_type } nl80211_user_reg_hint_type ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;


 int VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 int VAR_7;
 char *VAR_8 = ((void*)0);
 enum nl80211_user_reg_hint_type VAR_9;







 if (FUNC_4(!FUNC_2(VAR_4)))
  return -VAR_0;

 if (!VAR_6->attrs[VAR_2])
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_6->attrs[VAR_2]);

 if (VAR_6->attrs[VAR_3])
  VAR_9 =
    FUNC_1(VAR_6->attrs[VAR_3]);
 else
  VAR_9 = 128;

 switch (VAR_9) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_8, VAR_9);

 return VAR_7;
}
