
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int rx_mask; } ;
struct TYPE_12__ {int ampdu_params_info; TYPE_1__ mcs; } ;
struct TYPE_9__ {int rx_mask; } ;
struct TYPE_11__ {int ampdu_params_info; TYPE_2__ mcs; } ;
struct TYPE_13__ {TYPE_5__ ht_capa; TYPE_4__ ht_capa_mask; } ;
struct TYPE_14__ {TYPE_6__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_7__ u; } ;
struct TYPE_10__ {scalar_t__* rx_mask; } ;
struct ieee80211_sta_ht_cap {scalar_t__ ampdu_factor; scalar_t__ ampdu_density; TYPE_3__ mcs; int ht_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct ieee80211_sta_ht_cap*,int ) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_8,
         struct ieee80211_sta_ht_cap *VAR_9)
{
 u8 *VAR_10 = (u8 *)(&VAR_8->u.mgd.ht_capa.mcs.rx_mask);
 u8 *VAR_11 = (u8 *)(&VAR_8->u.mgd.ht_capa_mask.mcs.rx_mask);
 int VAR_12;

 if (!VAR_9->ht_supported)
  return;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  u8 VAR_13 = VAR_11[VAR_12];
  VAR_9->mcs.rx_mask[VAR_12] &= ~VAR_13;

  VAR_9->mcs.rx_mask[VAR_12] |= (VAR_13 & VAR_10[VAR_12]);
 }


 FUNC_0(VAR_8, VAR_9, VAR_6);
 FUNC_0(VAR_8, VAR_9, VAR_5);


 FUNC_0(VAR_8, VAR_9, VAR_4);


 FUNC_0(VAR_8, VAR_9, VAR_3);


 if (VAR_8->u.mgd.ht_capa_mask.ampdu_params_info &
     VAR_2) {
  u8 VAR_14 = VAR_8->u.mgd.ht_capa.ampdu_params_info
   & VAR_2;
  if (VAR_14 < VAR_9->ampdu_factor)
   VAR_9->ampdu_factor = VAR_14;
 }


 if (VAR_8->u.mgd.ht_capa_mask.ampdu_params_info &
     VAR_0) {
  u8 VAR_15 = (VAR_8->u.mgd.ht_capa.ampdu_params_info &
   VAR_0)
   >> VAR_1;
  if (VAR_15 > VAR_9->ampdu_density)
   VAR_9->ampdu_density = VAR_15;
 }
}
