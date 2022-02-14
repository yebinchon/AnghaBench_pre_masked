
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int uapsd_queues; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct ieee80211_sub_if_data *VAR_2, const char *VAR_3, int VAR_4)
{
 struct ieee80211_if_managed *VAR_5 = &VAR_2->u.mgd;
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;

 VAR_5->uapsd_queues = VAR_6;

 return VAR_4;
}
