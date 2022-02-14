
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {int wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ set_tsf; scalar_t__ reset_tsf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,unsigned long long) ;
 int FUNC_3 (char const*,int,unsigned long long*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_6(
 struct ieee80211_sub_if_data *VAR_1, const char *VAR_2, int VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_1->local;
 unsigned long long VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 if (FUNC_4(VAR_2, "reset", 5) == 0) {
  if (VAR_4->ops->reset_tsf) {
   FUNC_1(VAR_4, VAR_1);
   FUNC_5(VAR_4->hw.wiphy, "debugfs reset TSF\n");
  }
 } else {
  if (VAR_3 > 10 && VAR_2[1] == '=') {
   if (VAR_2[0] == '+')
    VAR_7 = 1;
   else if (VAR_2[0] == '-')
    VAR_7 = -1;
   else
    return -VAR_0;
   VAR_2 += 2;
  }
  VAR_6 = FUNC_3(VAR_2, 10, &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_7)
   VAR_5 = FUNC_0(VAR_4, VAR_1) + VAR_7 * VAR_5;
  if (VAR_4->ops->set_tsf) {
   FUNC_2(VAR_4, VAR_1, VAR_5);
   FUNC_5(VAR_4->hw.wiphy,
       "debugfs set TSF to %#018llx\n", VAR_5);
  }
 }

 return VAR_3;
}
