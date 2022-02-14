
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm_ctx {int msg_ctx; } ;
struct wpa_sm {int renew_snonce; int dot11RSNAConfigPMKLifetime; int dot11RSNAConfigPMKReauthThreshold; int dot11RSNAConfigSATimeout; struct wpa_sm_ctx* ctx; int * pmksa; int pmksa_candidates; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_sm*) ;
 struct wpa_sm* FUNC_2 (int) ;
 int * FUNC_3 (int ,struct wpa_sm*,struct wpa_sm*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

struct wpa_sm * FUNC_5(struct wpa_sm_ctx *VAR_2)
{
 struct wpa_sm *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_3->pmksa_candidates);
 VAR_3->renew_snonce = 1;
 VAR_3->ctx = VAR_2;

 VAR_3->dot11RSNAConfigPMKLifetime = 43200;
 VAR_3->dot11RSNAConfigPMKReauthThreshold = 70;
 VAR_3->dot11RSNAConfigSATimeout = 60;

 VAR_3->pmksa = FUNC_3(VAR_1, VAR_3, VAR_3);
 if (VAR_3->pmksa == ((void*)0)) {
  FUNC_4(VAR_3->ctx->msg_ctx, VAR_0,
   "RSN: PMKSA cache initialization failed");
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
