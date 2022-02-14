
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_managed {int uapsd_max_sp_len; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(
 const struct ieee80211_sub_if_data *VAR_0, char *VAR_1, int VAR_2)
{
 const struct ieee80211_if_managed *VAR_3 = &VAR_0->u.mgd;

 return FUNC_0(VAR_1, VAR_2, "0x%x\n", VAR_3->uapsd_max_sp_len);
}
