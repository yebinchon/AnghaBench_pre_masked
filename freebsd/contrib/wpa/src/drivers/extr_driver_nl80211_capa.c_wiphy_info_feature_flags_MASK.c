
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_driver_capa {int flags; int rrm_flags; int smps_modes; } ;
struct wiphy_info_data {int data_tx_status; int p2p_go_ctwindow_supported; int have_low_prio_scan; int mac_addr_rand_scan_supported; int mac_addr_rand_sched_scan_supported; int wmm_ac_supported; struct wpa_driver_capa* capa; } ;
struct nlattr {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wiphy_info_data *VAR_33,
         struct nlattr *VAR_34)
{
 u32 VAR_35;
 struct wpa_driver_capa *VAR_36 = VAR_33->capa;

 if (VAR_34 == ((void*)0))
  return;

 VAR_35 = FUNC_0(VAR_34);

 if (VAR_35 & VAR_14)
  VAR_33->data_tx_status = 1;

 if (VAR_35 & VAR_6)
  VAR_36->flags |= VAR_24;

 if (VAR_35 & VAR_11)
  VAR_36->flags |= VAR_27;

 if (VAR_35 & VAR_8)
  VAR_36->flags |= VAR_25;

 if (VAR_35 & VAR_1)
  VAR_36->flags |= VAR_22;

 if (VAR_35 & VAR_17) {
  FUNC_1(VAR_0, "nl80211: TDLS channel switch");
  VAR_36->flags |= VAR_28;
 }

 if (VAR_35 & VAR_9)
  VAR_33->p2p_go_ctwindow_supported = 1;

 if (VAR_35 & VAR_7)
  VAR_33->have_low_prio_scan = 1;

 if (VAR_35 & VAR_12)
  VAR_33->mac_addr_rand_scan_supported = 1;

 if (VAR_35 & VAR_13)
  VAR_33->mac_addr_rand_sched_scan_supported = 1;

 if (VAR_35 & VAR_15)
  VAR_36->smps_modes |= VAR_32;

 if (VAR_35 & VAR_3)
  VAR_36->smps_modes |= VAR_31;

 if (VAR_35 & VAR_16)
  VAR_33->wmm_ac_supported = 1;

 if (VAR_35 & VAR_2)
  VAR_36->rrm_flags |= VAR_20;

 if (VAR_35 & VAR_19)
  VAR_36->rrm_flags |= VAR_30;

 if (VAR_35 & VAR_10)
  VAR_36->rrm_flags |= VAR_26;

 if (VAR_35 & VAR_18)
  VAR_36->rrm_flags |= VAR_29;

 if (VAR_35 & VAR_5)
  VAR_36->flags |= VAR_23;

 if (VAR_35 & VAR_4)
  VAR_36->flags |= VAR_21;
}
