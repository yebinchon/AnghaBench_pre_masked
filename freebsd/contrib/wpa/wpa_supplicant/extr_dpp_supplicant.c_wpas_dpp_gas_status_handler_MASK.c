
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {struct dpp_authentication* dpp_auth; } ;
struct dpp_authentication {int peer_version; scalar_t__ conf_resp_status; int waiting_conf_result; struct wpabuf* conf_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dpp_authentication*) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(void *VAR_8, struct wpabuf *VAR_9, int VAR_10)
{
 struct wpa_supplicant *VAR_11 = VAR_8;
 struct dpp_authentication *VAR_12 = VAR_11->dpp_auth;

 if (!VAR_12) {
  FUNC_6(VAR_9);
  return;
 }
 if (VAR_12->conf_resp != VAR_9) {
  FUNC_5(VAR_3,
      "DPP: Ignore GAS status report (ok=%d) for unknown response",
   VAR_10);
  FUNC_6(VAR_9);
  return;
 }

 FUNC_5(VAR_3, "DPP: Configuration exchange completed (ok=%d)",
     VAR_10);
 FUNC_1(VAR_7, VAR_11, ((void*)0));
 FUNC_1(VAR_5, VAR_11, ((void*)0));
 FUNC_3(VAR_11);
 FUNC_7(VAR_11);
 if (VAR_10)
  FUNC_4(VAR_11, VAR_4, VAR_1);
 else
  FUNC_4(VAR_11, VAR_4, VAR_0);
 FUNC_0(VAR_11->dpp_auth);
 VAR_11->dpp_auth = ((void*)0);
 FUNC_6(VAR_9);
}
