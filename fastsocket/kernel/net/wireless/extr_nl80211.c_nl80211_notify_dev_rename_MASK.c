
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (struct cfg80211_registered_device*,struct sk_buff*,int ,int ,int ,int,int *,int *,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cfg80211_registered_device *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 if (FUNC_1(VAR_3, VAR_4, 0, 0, 0,
          0, ((void*)0), ((void*)0), ((void*)0)) < 0) {
  FUNC_2(VAR_4);
  return;
 }

 FUNC_0(FUNC_4(&VAR_3->wiphy), VAR_4, 0,
    VAR_2.id, VAR_0);
}
