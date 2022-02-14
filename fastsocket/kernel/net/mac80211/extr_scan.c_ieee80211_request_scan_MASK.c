
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {TYPE_1__* local; } ;
struct cfg80211_scan_request {int dummy; } ;
struct TYPE_2__ {int mtx; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,struct cfg80211_scan_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_0,
      struct cfg80211_scan_request *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->local->mtx);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->local->mtx);

 return VAR_2;
}
