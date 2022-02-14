
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int IEEE80211_SA_FROMDS; int IEEE80211_BSSID_FROMDS; int IEEE80211_DA_FROMDS; int frame_control; } ;
typedef int hdr ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int *,int,int ,int ,int *,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct ieee80211_hdr*,int ,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, const u8 *VAR_5,
       const u8 *VAR_6, int VAR_7)
{
 struct ieee80211_hdr VAR_8;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.frame_control = FUNC_0(VAR_3,
      VAR_2);

 VAR_8.frame_control |=
  FUNC_1(VAR_1);
 FUNC_3(VAR_8.IEEE80211_DA_FROMDS, VAR_6, VAR_0);
 FUNC_3(VAR_8.IEEE80211_BSSID_FROMDS, VAR_5, VAR_0);
 FUNC_3(VAR_8.IEEE80211_SA_FROMDS, VAR_5, VAR_0);

 FUNC_2(VAR_4, (u8 *)&VAR_8, sizeof(VAR_8), 0, 0, ((void*)0), 0);
}
