
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vht_operation {int vht_op_info_chan_center_freq_seg0_idx; int vht_op_info_chan_center_freq_seg1_idx; int vht_op_info_chwidth; int vht_basic_mcs_set; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {int vht_oper_centr_freq_seg0_idx; int vht_oper_centr_freq_seg1_idx; int vht_oper_chwidth; scalar_t__ channel; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_vht_operation*,int ,int) ;

u8 * FUNC_2(struct hostapd_data *VAR_1, u8 *VAR_2)
{
 struct ieee80211_vht_operation *VAR_3;
 u8 *VAR_4 = VAR_2;

 *VAR_4++ = VAR_0;
 *VAR_4++ = sizeof(*VAR_3);

 VAR_3 = (struct ieee80211_vht_operation *) VAR_4;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));






 VAR_3->vht_op_info_chan_center_freq_seg0_idx =
  VAR_1->iconf->vht_oper_centr_freq_seg0_idx;
 VAR_3->vht_op_info_chan_center_freq_seg1_idx =
  VAR_1->iconf->vht_oper_centr_freq_seg1_idx;

 VAR_3->vht_op_info_chwidth = VAR_1->iconf->vht_oper_chwidth;
 if (VAR_1->iconf->vht_oper_chwidth == 2) {




  VAR_3->vht_op_info_chwidth = 1;
  VAR_3->vht_op_info_chan_center_freq_seg1_idx =
   VAR_3->vht_op_info_chan_center_freq_seg0_idx;
  if (VAR_1->iconf->channel <
      VAR_1->iconf->vht_oper_centr_freq_seg0_idx)
   VAR_3->vht_op_info_chan_center_freq_seg0_idx -= 8;
  else
   VAR_3->vht_op_info_chan_center_freq_seg0_idx += 8;
 } else if (VAR_1->iconf->vht_oper_chwidth == 3) {




  VAR_3->vht_op_info_chwidth = 1;
 }



 VAR_3->vht_basic_mcs_set = FUNC_0(0xfffc);
 VAR_4 += sizeof(*VAR_3);

 return VAR_4;
}
