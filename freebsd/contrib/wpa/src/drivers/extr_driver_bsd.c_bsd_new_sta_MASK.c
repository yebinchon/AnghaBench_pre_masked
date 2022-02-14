
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211req_wpaie {int* wpa_ie; int wpa_macaddr; } ;
typedef int ie ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int*,int*,int,int ) ;
 scalar_t__ FUNC_1 (void*,int ,struct ieee80211req_wpaie*,int) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (struct ieee80211req_wpaie*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, void *VAR_4, u8 VAR_5[VAR_0])
{
 struct ieee80211req_wpaie VAR_6;
 int VAR_7 = 0;
 u8 *VAR_8 = ((void*)0);




 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(VAR_6.wpa_macaddr, VAR_5, VAR_0);
 if (FUNC_1(VAR_3, VAR_1, &VAR_6, sizeof(VAR_6)) < 0) {
  FUNC_4(VAR_2,
      "Failed to get WPA/RSN information element");
  goto no_ie;
 }
 VAR_8 = VAR_6.wpa_ie;
 VAR_7 = VAR_6.wpa_ie[1];
 if (VAR_7 == 0)
  VAR_8 = ((void*)0);
 else
  VAR_7 += 2;

no_ie:
 FUNC_0(VAR_4, VAR_5, VAR_8, VAR_7, 0);
}
