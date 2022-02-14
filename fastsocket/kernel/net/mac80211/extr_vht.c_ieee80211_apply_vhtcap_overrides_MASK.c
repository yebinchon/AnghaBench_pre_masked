
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct TYPE_13__ {TYPE_4__ supp_mcs; int vht_cap_info; } ;
struct TYPE_10__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct TYPE_11__ {int vht_cap_info; TYPE_2__ supp_mcs; } ;
struct TYPE_14__ {TYPE_5__ vht_capa; TYPE_3__ vht_capa_mask; } ;
struct TYPE_15__ {TYPE_6__ mgd; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_7__ u; TYPE_1__ vif; } ;
struct TYPE_16__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int cap; TYPE_8__ vht_mcs; int vht_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct ieee80211_sta_vht_cap*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_sub_if_data *VAR_12,
          struct ieee80211_sta_vht_cap *VAR_13)
{
 int VAR_14;
 u16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 if (!VAR_13->vht_supported)
  return;

 if (VAR_12->vif.type != VAR_11)
  return;

 FUNC_0(VAR_12, VAR_13,
          VAR_2);
 FUNC_0(VAR_12, VAR_13,
          VAR_5);
 FUNC_0(VAR_12, VAR_13,
          VAR_4);
 FUNC_0(VAR_12, VAR_13,
          VAR_8);
 FUNC_0(VAR_12, VAR_13,
          VAR_7);
 FUNC_0(VAR_12, VAR_13,
          VAR_6);
 FUNC_0(VAR_12, VAR_13,
          VAR_3);
 FUNC_0(VAR_12, VAR_13,
          VAR_9);


 if (VAR_12->u.mgd.vht_capa_mask.vht_cap_info &
     FUNC_2(VAR_0)) {
  u32 VAR_21, VAR_22;

  VAR_22 = FUNC_4(VAR_12->u.mgd.vht_capa.vht_cap_info) &
   VAR_0;
  VAR_22 >>= VAR_1;
  VAR_21 = VAR_13->cap & VAR_0;
  VAR_21 >>= VAR_1;

  if (VAR_22 < VAR_21) {
   VAR_13->cap &=
    ~VAR_0;
   VAR_13->cap |=
    VAR_22 << VAR_1;
  }
 }


 VAR_15 =
  FUNC_3(VAR_12->u.mgd.vht_capa_mask.supp_mcs.rx_mcs_map);
 VAR_17 = FUNC_3(VAR_12->u.mgd.vht_capa.supp_mcs.rx_mcs_map);
 VAR_17 &= VAR_15;
 VAR_16 = FUNC_3(VAR_13->vht_mcs.rx_mcs_map);

 VAR_18 =
  FUNC_3(VAR_12->u.mgd.vht_capa_mask.supp_mcs.tx_mcs_map);
 VAR_20 = FUNC_3(VAR_12->u.mgd.vht_capa.supp_mcs.tx_mcs_map);
 VAR_20 &= VAR_18;
 VAR_19 = FUNC_3(VAR_13->vht_mcs.tx_mcs_map);
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  u8 VAR_23, VAR_24, VAR_25;

  VAR_23 = (VAR_15 >> 2*VAR_14) & VAR_10;
  VAR_24 = (VAR_17 >> 2*VAR_14) & VAR_10;
  VAR_25 = (VAR_16 >> 2*VAR_14) & VAR_10;

  if (VAR_23 && ((VAR_25 != VAR_10 && VAR_24 < VAR_25) ||
     VAR_24 == VAR_10)) {
   VAR_16 &= ~(3 << 2*VAR_14);
   VAR_16 |= (VAR_17 & (3 << 2*VAR_14));
  }

  VAR_23 = (VAR_18 >> 2*VAR_14) & VAR_10;
  VAR_24 = (VAR_20 >> 2*VAR_14) & VAR_10;
  VAR_25 = (VAR_19 >> 2*VAR_14) & VAR_10;

  if (VAR_23 && ((VAR_25 != VAR_10 && VAR_24 < VAR_25) ||
     VAR_24 == VAR_10)) {
   VAR_19 &= ~(3 << 2*VAR_14);
   VAR_19 |= (VAR_20 & (3 << 2*VAR_14));
  }
 }
 VAR_13->vht_mcs.rx_mcs_map = FUNC_1(VAR_16);
 VAR_13->vht_mcs.tx_mcs_map = FUNC_1(VAR_19);
}
