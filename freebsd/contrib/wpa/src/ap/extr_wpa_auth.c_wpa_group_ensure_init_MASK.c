
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {void* reject_4way_hs_for_entropy; void* first_sta_seen; } ;
struct wpa_authenticator {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;
 scalar_t__ FUNC_2 (struct wpa_authenticator*,struct wpa_group*) ;
 scalar_t__ FUNC_3 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct wpa_authenticator *VAR_4,
      struct wpa_group *VAR_5)
{
 if (VAR_5->first_sta_seen)
  return;







 FUNC_4(VAR_1, "WPA: Re-initialize GMK/Counter on first "
     "station");
 if (FUNC_0() != 1) {
  FUNC_4(VAR_2, "WPA: Not enough entropy in random pool "
      "to proceed - reject first 4-way handshake");
  VAR_5->reject_4way_hs_for_entropy = VAR_3;
 } else {
  VAR_5->first_sta_seen = VAR_3;
  VAR_5->reject_4way_hs_for_entropy = VAR_0;
 }

 if (FUNC_2(VAR_4, VAR_5) < 0 ||
     FUNC_3(VAR_4, VAR_5) < 0 ||
     FUNC_1(VAR_4, VAR_5) < 0) {
  FUNC_4(VAR_2, "WPA: GMK/GTK setup failed");
  VAR_5->first_sta_seen = VAR_0;
  VAR_5->reject_4way_hs_for_entropy = VAR_3;
 }
}
