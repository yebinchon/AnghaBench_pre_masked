
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ wpa_state; int bssid; int own_addr; int assoc_freq; int mbo_wnm_token; int current_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int const*,size_t) ;
 int FUNC_8 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_9(struct wpa_supplicant *VAR_6,
        const u8 *VAR_7, size_t VAR_8)
{
 struct wpabuf *VAR_9;
 int VAR_10;






 if (VAR_6->wpa_state != VAR_5 || !VAR_6->current_bss ||
     !FUNC_0(VAR_6->current_bss, VAR_0))
  return;

 VAR_9 = FUNC_3(4 + VAR_8);
 if (!VAR_9)
  return;

 FUNC_8(VAR_9, VAR_2);
 FUNC_8(VAR_9, VAR_4);
 VAR_6->mbo_wnm_token++;
 if (VAR_6->mbo_wnm_token == 0)
  VAR_6->mbo_wnm_token++;
 FUNC_8(VAR_9, VAR_6->mbo_wnm_token);
 FUNC_8(VAR_9, VAR_3);

 FUNC_7(VAR_9, VAR_7, VAR_8);

 VAR_10 = FUNC_1(VAR_6, VAR_6->assoc_freq, 0, VAR_6->bssid,
      VAR_6->own_addr, VAR_6->bssid,
      FUNC_5(VAR_9), FUNC_6(VAR_9), 0);
 if (VAR_10 < 0)
  FUNC_2(VAR_1,
      "Failed to send WNM-Notification Request frame with non-preferred channel list");

 FUNC_4(VAR_9);
}
