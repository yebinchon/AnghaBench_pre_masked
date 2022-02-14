
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int plink_state; } ;
struct ieee80211_sub_if_data {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ num_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sta_info*,int ) ;
 struct sta_info* FUNC_1 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_2 (struct sta_info*,int ) ;

__attribute__((used)) static struct sta_info *
FUNC_3(struct ieee80211_sub_if_data *VAR_7, u8 *VAR_8)
{
 struct sta_info *VAR_9;

 if (VAR_7->local->num_sta >= VAR_4)
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->plink_state = VAR_5;

 FUNC_2(VAR_9, VAR_2);
 FUNC_2(VAR_9, VAR_1);
 FUNC_2(VAR_9, VAR_3);

 FUNC_0(VAR_9, VAR_6);

 return VAR_9;
}
