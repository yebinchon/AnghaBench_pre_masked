
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int dpp_listen_freq; TYPE_1__* dpp_auth; scalar_t__ dpp_in_response_listen; } ;
struct TYPE_2__ {unsigned int neg_freq; unsigned int curr_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct wpa_supplicant*,unsigned int) ;
 int FUNC_2 (struct wpa_supplicant*) ;

void FUNC_3(struct wpa_supplicant *VAR_1,
       unsigned int VAR_2)
{
 FUNC_2(VAR_1);

 if (VAR_1->dpp_auth && VAR_1->dpp_in_response_listen) {
  unsigned int VAR_3;


  if (VAR_1->dpp_auth->neg_freq > 0)
   VAR_3 = VAR_1->dpp_auth->neg_freq;
  else
   VAR_3 = VAR_1->dpp_auth->curr_freq;
  FUNC_0(VAR_0,
      "DPP: Continue wait on %u MHz for the ongoing DPP provisioning session",
      VAR_3);
  FUNC_1(VAR_1, VAR_3);
  return;
 }

 if (VAR_1->dpp_listen_freq) {

  FUNC_1(VAR_1, VAR_1->dpp_listen_freq);
 }
}
