
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
typedef enum ieee80211_agg_stop_reason { ____Placeholder_ieee80211_agg_stop_reason } ieee80211_agg_stop_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sta_info*,int,int ,int ,int) ;
 int FUNC_1 (struct sta_info*,int,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sta_info *VAR_5,
      enum ieee80211_agg_stop_reason VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_5->ampdu_mlme.work);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_1(VAR_5, VAR_7, VAR_6);
  FUNC_0(VAR_5, VAR_7, VAR_3,
            VAR_4,
            VAR_6 != VAR_0 &&
            VAR_6 != VAR_1);
 }
}
