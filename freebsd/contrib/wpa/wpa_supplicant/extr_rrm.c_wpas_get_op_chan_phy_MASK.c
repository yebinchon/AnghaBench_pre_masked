
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vht_operation {int vht_op_info_chwidth; int vht_op_info_chan_center_freq_seg0_idx; int vht_op_info_chan_center_freq_seg1_idx; } ;
struct ieee80211_ht_operation {int ht_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int const*,size_t,int ) ;
 scalar_t__ FUNC_2 (int,int,int,int*,int*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(int VAR_12, const u8 *VAR_13, size_t VAR_14,
    u8 *VAR_15, u8 *VAR_16, u8 *VAR_17)
{
 const u8 *VAR_18;
 int VAR_19 = 0, VAR_20 = 0;
 struct ieee80211_ht_operation *VAR_21 = ((void*)0);
 struct ieee80211_vht_operation *VAR_22 = ((void*)0);
 u8 VAR_23, VAR_24;

 VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_10);
 if (VAR_18 && VAR_18[1] >= sizeof(struct ieee80211_ht_operation)) {
  u8 VAR_25;

  VAR_21 = (struct ieee80211_ht_operation *) (VAR_18 + 2);
  VAR_25 = VAR_21->ht_param &
   VAR_6;
  if (VAR_25 == VAR_4)
   VAR_19 = 1;
  else if (VAR_25 ==
    VAR_5)
   VAR_19 = -1;
 }

 VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_11);
 if (VAR_18 && VAR_18[1] >= sizeof(struct ieee80211_vht_operation)) {
  VAR_22 = (struct ieee80211_vht_operation *) (VAR_18 + 2);

  switch (VAR_22->vht_op_info_chwidth) {
  case 1:
   VAR_23 = VAR_22->vht_op_info_chan_center_freq_seg0_idx;
   VAR_24 = VAR_22->vht_op_info_chan_center_freq_seg1_idx;
   if (VAR_24 && FUNC_0(VAR_24 - VAR_23) == 8)
    VAR_20 = VAR_0;
   else if (VAR_24)
    VAR_20 = VAR_2;
   else
    VAR_20 = VAR_1;
   break;
  case 2:
   VAR_20 = VAR_0;
   break;
  case 3:
   VAR_20 = VAR_2;
   break;
  default:
   VAR_20 = VAR_3;
   break;
  }
 }

 if (FUNC_2(VAR_12, VAR_19, VAR_20, VAR_15,
       VAR_16) == VAR_8) {
  FUNC_4(VAR_7,
      "Cannot determine operating class and channel");
  return -1;
 }

 *VAR_17 = FUNC_3(VAR_12, VAR_21 != ((void*)0),
        VAR_22 != ((void*)0));
 if (*VAR_17 == VAR_9) {
  FUNC_4(VAR_7, "Cannot determine phy type");
  return -1;
 }

 return 0;
}
