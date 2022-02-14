
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int pending_bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ,int const*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;

void FUNC_5(struct wpa_supplicant *VAR_5,
           const u8 *VAR_6)
{





 FUNC_3(VAR_5, VAR_1, "SME: Allow pending authentication "
  "to proceed after disconnection event");
 FUNC_4(VAR_5, VAR_3);
 FUNC_2(VAR_5->pending_bssid, VAR_6, VAR_0);




 FUNC_0(VAR_4, VAR_5, ((void*)0));
 FUNC_1(VAR_2, 0, VAR_4, VAR_5,
          ((void*)0));
}
