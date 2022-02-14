
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dpp_listen_work {unsigned int freq; } ;
struct wpa_supplicant {unsigned int dpp_listen_freq; scalar_t__ dpp_listen_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpas_dpp_listen_work* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,unsigned int,char*,int ,int ,struct wpas_dpp_listen_work*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpas_dpp_listen_work*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_2,
     unsigned int VAR_3)
{
 struct wpas_dpp_listen_work *VAR_4;

 if (VAR_2->dpp_listen_work) {
  FUNC_2(VAR_0,
      "DPP: Reject start_listen since dpp_listen_work already exists");
  return -1;
 }

 if (VAR_2->dpp_listen_freq)
  FUNC_3(VAR_2);
 VAR_2->dpp_listen_freq = VAR_3;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (!VAR_4)
  return -1;
 VAR_4->freq = VAR_3;

 if (FUNC_1(VAR_2, VAR_3, "dpp-listen", 0, VAR_1,
      VAR_4) < 0) {
  FUNC_4(VAR_4);
  return -1;
 }

 return 0;
}
