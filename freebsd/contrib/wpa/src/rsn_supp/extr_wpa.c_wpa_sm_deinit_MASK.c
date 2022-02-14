
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int dpp_z; int owe_ecdh; int fils_ft_ies; int fils_ecdh; int test_assoc_ie; struct wpa_sm* assoc_resp_ies; struct wpa_sm* ctx; struct wpa_sm* ap_rsn_ie; struct wpa_sm* ap_wpa_ie; struct wpa_sm* assoc_wpa_ie; int pmksa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wpa_sm*,int *) ;
 int FUNC_2 (struct wpa_sm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_sm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct wpa_sm *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_3(VAR_2->pmksa);
 FUNC_1(VAR_1, VAR_2, ((void*)0));
 FUNC_1(VAR_0, VAR_2, ((void*)0));
 FUNC_2(VAR_2->assoc_wpa_ie);
 FUNC_2(VAR_2->ap_wpa_ie);
 FUNC_2(VAR_2->ap_rsn_ie);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2->ctx);
 FUNC_2(VAR_2);
}
