
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int req_smps; scalar_t__ powersave; TYPE_4__* associated; int mtx; } ;
struct TYPE_12__ {TYPE_5__ mgd; } ;
struct TYPE_7__ {scalar_t__ width; } ;
struct TYPE_8__ {TYPE_1__ chandef; } ;
struct TYPE_9__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_6__ u; TYPE_3__ vif; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
struct TYPE_10__ {int * bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int,int const*,int const*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ieee80211_sub_if_data *VAR_4,
        enum ieee80211_smps_mode VAR_5)
{
 const u8 *VAR_6;
 enum ieee80211_smps_mode VAR_7;
 int VAR_8;

 FUNC_1(&VAR_4->u.mgd.mtx);

 VAR_7 = VAR_4->u.mgd.req_smps;
 VAR_4->u.mgd.req_smps = VAR_5;

 if (VAR_7 == VAR_5 &&
     VAR_5 != VAR_0)
  return 0;






 if (!VAR_4->u.mgd.associated ||
     VAR_4->vif.bss_conf.chandef.width == VAR_3)
  return 0;

 VAR_6 = VAR_4->u.mgd.associated->bssid;

 if (VAR_5 == VAR_0) {
  if (VAR_4->u.mgd.powersave)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_2;
 }


 VAR_8 = FUNC_0(VAR_4, VAR_5,
      VAR_6, VAR_6);
 if (VAR_8)
  VAR_4->u.mgd.req_smps = VAR_7;

 return VAR_8;
}
