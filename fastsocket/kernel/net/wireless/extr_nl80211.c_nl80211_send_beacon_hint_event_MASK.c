
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (struct wiphy*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct ieee80211_channel*,int) ;
 TYPE_1__ VAR_6 ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

void FUNC_13(struct wiphy *VAR_7,
        struct ieee80211_channel *VAR_8,
        struct ieee80211_channel *VAR_9)
{
 struct sk_buff *VAR_10;
 void *VAR_11;
 struct nlattr *VAR_12;

 VAR_10 = FUNC_10(VAR_5, VAR_0);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_5(VAR_10, 0, 0, 0, VAR_4);
 if (!VAR_11) {
  FUNC_9(VAR_10);
  return;
 }





 if (FUNC_8(VAR_10, VAR_3, FUNC_3(VAR_7)))
  goto nla_put_failure;


 VAR_12 = FUNC_7(VAR_10, VAR_2);
 if (!VAR_12)
  goto nla_put_failure;
 if (FUNC_4(VAR_10, VAR_8, 0))
  goto nla_put_failure;
 FUNC_6(VAR_10, VAR_12);


 VAR_12 = FUNC_7(VAR_10, VAR_1);
 if (!VAR_12)
  goto nla_put_failure;
 if (FUNC_4(VAR_10, VAR_9, 0))
  goto nla_put_failure;
 FUNC_6(VAR_10, VAR_12);

 FUNC_1(VAR_10, VAR_11);

 FUNC_11();
 FUNC_2(VAR_10, 0, VAR_6.id,
    VAR_0);
 FUNC_12();

 return;

nla_put_failure:
 FUNC_0(VAR_10, VAR_11);
 FUNC_9(VAR_10);
}
