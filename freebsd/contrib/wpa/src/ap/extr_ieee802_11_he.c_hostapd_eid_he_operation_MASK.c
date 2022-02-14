
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_he_operation {int he_oper_params; int he_mcs_nss_set; } ;
struct hostapd_data {TYPE_3__* iface; } ;
struct TYPE_6__ {TYPE_2__* conf; int current_mode; } ;
struct TYPE_4__ {int he_default_pe_duration; int he_rts_threshold; int he_bss_color; int he_basic_mcs_nss_set; scalar_t__ he_twt_required; } ;
struct TYPE_5__ {TYPE_1__ he_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_he_operation*,int ,int) ;

u8 * FUNC_3(struct hostapd_data *VAR_6, u8 *VAR_7)
{
 struct ieee80211_he_operation *VAR_8;
 u8 *VAR_9 = VAR_7;
 int VAR_10 = 6;
 u32 VAR_11 = 0;

 if (!VAR_6->iface->current_mode)
  return VAR_7;

 *VAR_9++ = VAR_4;
 *VAR_9++ = 1 + VAR_10;
 *VAR_9++ = VAR_5;

 VAR_8 = (struct ieee80211_he_operation *) VAR_9;
 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 if (VAR_6->iface->conf->he_op.he_default_pe_duration)
  VAR_11 |= (VAR_6->iface->conf->he_op.he_default_pe_duration <<
      VAR_1);

 if (VAR_6->iface->conf->he_op.he_twt_required)
  VAR_11 |= VAR_3;

 if (VAR_6->iface->conf->he_op.he_rts_threshold)
  VAR_11 |= (VAR_6->iface->conf->he_op.he_rts_threshold <<
      VAR_2);

 if (VAR_6->iface->conf->he_op.he_bss_color)
  VAR_11 |= (VAR_6->iface->conf->he_op.he_bss_color <<
      VAR_0);


 VAR_8->he_mcs_nss_set =
  FUNC_0(VAR_6->iface->conf->he_op.he_basic_mcs_nss_set);



 VAR_8->he_oper_params = FUNC_1(VAR_11);

 VAR_9 += VAR_10;

 return VAR_9;
}
