
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int (* reg_notifier ) (struct wiphy*,struct regulatory_request*) ;int * bands; } ;
struct regulatory_request {int dfs_region; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {int dfs_region; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (struct wiphy*,int,int ) ;
 scalar_t__ FUNC_3 (struct wiphy*,int) ;
 int FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wiphy*) ;
 int FUNC_6 (struct wiphy*,struct regulatory_request*) ;

__attribute__((used)) static void FUNC_7(struct wiphy *VAR_1,
        enum nl80211_reg_initiator VAR_2)
{
 enum ieee80211_band VAR_3;
 struct regulatory_request *VAR_4 = FUNC_1();

 if (FUNC_3(VAR_1, VAR_2))
  return;

 VAR_4->dfs_region = FUNC_0()->dfs_region;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_1, VAR_2, VAR_1->bands[VAR_3]);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1);

 if (VAR_1->reg_notifier)
  VAR_1->reg_notifier(VAR_1, VAR_4);
}
