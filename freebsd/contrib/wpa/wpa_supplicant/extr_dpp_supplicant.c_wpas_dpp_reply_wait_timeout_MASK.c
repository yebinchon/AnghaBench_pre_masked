
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dpp_resp_wait_time; int dpp_in_response_listen; struct dpp_authentication* dpp_auth; int dpp_last_init; } ;
struct os_reltime {int sec; int usec; } ;
struct dpp_authentication {unsigned int curr_freq; unsigned int neg_freq; scalar_t__ auth_req_ack; int waiting_auth_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpp_authentication*) ;
 int FUNC_1 (unsigned int,unsigned int,void (*) (void*,void*),struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct os_reltime*) ;
 int FUNC_4 (struct os_reltime*,int *,struct os_reltime*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int FUNC_8 (struct wpa_supplicant*,unsigned int) ;
 int FUNC_9 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_10(void *VAR_3, void *VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_3;
 struct dpp_authentication *VAR_6 = VAR_5->dpp_auth;
 unsigned int VAR_7;
 struct os_reltime VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 if (!VAR_6 || !VAR_6->waiting_auth_resp)
  return;

 VAR_10 = VAR_5->dpp_resp_wait_time ?
  VAR_5->dpp_resp_wait_time : 2000;
 FUNC_3(&VAR_8);
 FUNC_4(&VAR_8, &VAR_5->dpp_last_init, &VAR_9);
 VAR_11 = VAR_9.sec * 1000 + VAR_9.usec / 1000;
 FUNC_6(VAR_1,
     "DPP: Reply wait timeout - wait_time=%u diff_ms=%u",
     VAR_10, VAR_11);

 if (VAR_6->auth_req_ack && VAR_11 >= VAR_10) {


  FUNC_6(VAR_2,
      "DPP: No response received from responder - stopping initiation attempt");
  FUNC_5(VAR_5, VAR_2, VAR_0);
  FUNC_2(VAR_5);
  FUNC_9(VAR_5);
  FUNC_0(VAR_6);
  VAR_5->dpp_auth = ((void*)0);
  return;
 }

 if (VAR_11 >= VAR_10) {


  FUNC_6(VAR_1,
      "DPP: Continue Initiator channel iteration");
  FUNC_2(VAR_5);
  FUNC_9(VAR_5);
  FUNC_7(VAR_5);
  return;
 }







 VAR_10 -= VAR_11;

 VAR_7 = VAR_6->curr_freq;
 if (VAR_6->neg_freq > 0)
  VAR_7 = VAR_6->neg_freq;
 FUNC_6(VAR_1,
     "DPP: Continue reply wait on channel %u MHz for %u ms",
     VAR_7, VAR_10);
 VAR_5->dpp_in_response_listen = 1;
 FUNC_8(VAR_5, VAR_7);

 FUNC_1(VAR_10 / 1000, (VAR_10 % 1000) * 1000,
          FUNC_10, VAR_5, ((void*)0));
}
