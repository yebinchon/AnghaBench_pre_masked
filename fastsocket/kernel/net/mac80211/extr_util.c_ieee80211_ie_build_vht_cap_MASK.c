
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_sta_vht_cap {int vht_mcs; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

u8 *FUNC_3(u8 *VAR_1, struct ieee80211_sta_vht_cap *VAR_2,
          u32 VAR_3)
{
 __le32 VAR_4;

 *VAR_1++ = VAR_0;
 *VAR_1++ = sizeof(struct ieee80211_vht_cap);
 FUNC_2(VAR_1, 0, sizeof(struct ieee80211_vht_cap));


 VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_1, &VAR_4, sizeof(u32));
 VAR_1 += sizeof(u32);


 FUNC_1(VAR_1, &VAR_2->vht_mcs, sizeof(VAR_2->vht_mcs));
 VAR_1 += sizeof(VAR_2->vht_mcs);

 return VAR_1;
}
