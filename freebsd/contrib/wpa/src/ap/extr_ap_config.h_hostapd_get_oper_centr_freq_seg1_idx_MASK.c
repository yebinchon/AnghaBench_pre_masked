
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_config {int vht_oper_centr_freq_seg1_idx; int he_oper_centr_freq_seg1_idx; scalar_t__ ieee80211ax; } ;



__attribute__((used)) static inline u8
FUNC_0(struct hostapd_config *VAR_0)
{




 return VAR_0->vht_oper_centr_freq_seg1_idx;
}
