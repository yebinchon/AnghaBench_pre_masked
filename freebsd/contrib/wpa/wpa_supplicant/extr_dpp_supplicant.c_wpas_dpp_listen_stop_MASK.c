
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ dpp_listen_freq; scalar_t__ dpp_in_response_listen; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct wpa_supplicant*) ;

void FUNC_3(struct wpa_supplicant *VAR_1)
{
 VAR_1->dpp_in_response_listen = 0;
 if (!VAR_1->dpp_listen_freq)
  return;

 FUNC_1(VAR_0, "DPP: Stop listen on %u MHz",
     VAR_1->dpp_listen_freq);
 FUNC_0(VAR_1);
 VAR_1->dpp_listen_freq = 0;
 FUNC_2(VAR_1);
}
