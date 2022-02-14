
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dpp_resp_max_tries; int dpp_resp_retry_time; struct dpp_authentication* dpp_auth; } ;
struct dpp_authentication {unsigned int auth_resp_tries; int resp_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpp_authentication*) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (unsigned int,unsigned int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_3)
{
 struct dpp_authentication *VAR_4 = VAR_3->dpp_auth;
 unsigned int VAR_5, VAR_6;

 if (!VAR_4 || !VAR_4->resp_msg)
  return;

 if (VAR_3->dpp_resp_max_tries)
  VAR_6 = VAR_3->dpp_resp_max_tries;
 else
  VAR_6 = 5;
 VAR_4->auth_resp_tries++;
 if (VAR_4->auth_resp_tries >= VAR_6) {
  FUNC_4(VAR_1, "DPP: No confirm received from initiator - stopping exchange");
  FUNC_3(VAR_3);
  FUNC_0(VAR_3->dpp_auth);
  VAR_3->dpp_auth = ((void*)0);
  return;
 }

 if (VAR_3->dpp_resp_retry_time)
  VAR_5 = VAR_3->dpp_resp_retry_time;
 else
  VAR_5 = 1000;
 FUNC_4(VAR_0,
     "DPP: Schedule retransmission of Authentication Response frame in %u ms",
  VAR_5);
 FUNC_1(VAR_2, VAR_3, ((void*)0));
 FUNC_2(VAR_5 / 1000,
          (VAR_5 % 1000) * 1000,
          VAR_2, VAR_3, ((void*)0));
}
