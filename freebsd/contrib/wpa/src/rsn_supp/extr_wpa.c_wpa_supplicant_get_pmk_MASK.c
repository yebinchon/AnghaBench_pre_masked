
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {int pmk_len; int xxkey_len; scalar_t__ key_mgmt; scalar_t__ proto; int bssid; TYPE_1__* ctx; struct rsn_pmksa_cache_entry* cur_pmksa; scalar_t__ ft_protocol; int pmksa; int network_ctx; int own_addr; int * pmk; int * fils_cache_id; scalar_t__ fils_cache_id_set; int * xxkey; scalar_t__ eapol; } ;
struct rsn_pmksa_cache_entry {int pmkid; } ;
typedef int buf ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 struct rsn_pmksa_cache_entry* FUNC_6 (int ,int *,int,int *,int *,int ,unsigned char const*,int ,int ,scalar_t__,int const*) ;
 struct rsn_pmksa_cache_entry* FUNC_7 (int ,unsigned char const*,int const*,int *,int ) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,char*,int const*,int ) ;
 int FUNC_10 (int ,char*,int *,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int ,char*) ;
 int FUNC_16 (int ,char*) ;
 int * FUNC_17 (struct wpa_sm*,int ,int *,int ,size_t*,int *) ;
 int FUNC_18 (struct wpa_sm*,int ,int ,int *,size_t) ;
 int FUNC_19 (struct wpa_sm*) ;
 int FUNC_20 (struct wpa_sm*) ;

__attribute__((used)) static int FUNC_21(struct wpa_sm *VAR_12,
      const unsigned char *VAR_13,
      const u8 *VAR_14)
{
 int VAR_15 = 0;

 if (VAR_14 && !VAR_12->cur_pmksa) {




  VAR_12->cur_pmksa = FUNC_7(VAR_12->pmksa, VAR_13, VAR_14,
      ((void*)0), 0);
  if (VAR_12->cur_pmksa) {
   FUNC_8(VAR_12->ctx->msg_ctx, VAR_2,
    "RSN: found matching PMKID from PMKSA cache");
  } else {
   FUNC_8(VAR_12->ctx->msg_ctx, VAR_2,
    "RSN: no matching PMKID found");
   VAR_15 = 1;
  }
 }

 if (VAR_14 && VAR_12->cur_pmksa &&
     FUNC_4(VAR_14, VAR_12->cur_pmksa->pmkid, VAR_5) == 0) {
  FUNC_9(VAR_2, "RSN: matched PMKID", VAR_14, VAR_5);
  FUNC_19(VAR_12);
  FUNC_10(VAR_2, "RSN: PMK from PMKSA cache",
    VAR_12->pmk, VAR_12->pmk_len);
  FUNC_1(VAR_12->eapol);
 } else if (FUNC_14(VAR_12->key_mgmt) && VAR_12->eapol) {
  int VAR_16, VAR_17;




  if (FUNC_12(VAR_12->key_mgmt))
   VAR_17 = VAR_7;
  else
   VAR_17 = VAR_6;
  VAR_16 = FUNC_0(VAR_12->eapol, VAR_12->pmk, VAR_17);
  if (VAR_16) {
   if (VAR_17 == VAR_6) {




    VAR_16 = FUNC_0(VAR_12->eapol, VAR_12->pmk, 16);
    VAR_17 = 16;
   }
  }
  if (VAR_16 == 0) {
   struct rsn_pmksa_cache_entry *VAR_18 = ((void*)0);
   const u8 *VAR_19 = ((void*)0);






   FUNC_10(VAR_2, "WPA: PMK from EAPOL state "
     "machines", VAR_12->pmk, VAR_17);
   VAR_12->pmk_len = VAR_17;
   FUNC_20(VAR_12);
   if (VAR_12->proto == VAR_11 &&
       !FUNC_13(VAR_12->key_mgmt) &&
       !FUNC_11(VAR_12->key_mgmt)) {
    VAR_18 = FUNC_6(VAR_12->pmksa,
           VAR_12->pmk, VAR_17, ((void*)0),
           ((void*)0), 0,
           VAR_13, VAR_12->own_addr,
           VAR_12->network_ctx,
           VAR_12->key_mgmt,
           VAR_19);
   }
   if (!VAR_12->cur_pmksa && VAR_14 &&
       FUNC_7(VAR_12->pmksa, VAR_13, VAR_14, ((void*)0),
        0)) {
    FUNC_8(VAR_12->ctx->msg_ctx, VAR_2,
     "RSN: the new PMK matches with the "
     "PMKID");
    VAR_15 = 0;
   } else if (VAR_18 && !VAR_12->cur_pmksa && VAR_14) {







    FUNC_15(VAR_12->ctx->msg_ctx, VAR_3,
     "RSN: PMKID mismatch - authentication server may have derived different MSK?!");
    return -1;
   }

   if (!VAR_12->cur_pmksa)
    VAR_12->cur_pmksa = VAR_18;





  } else {
   FUNC_15(VAR_12->ctx->msg_ctx, VAR_4,
    "WPA: Failed to get master session key from "
    "EAPOL state machines - key handshake "
    "aborted");
   if (VAR_12->cur_pmksa) {
    FUNC_8(VAR_12->ctx->msg_ctx, VAR_2,
     "RSN: Cancelled PMKSA caching "
     "attempt");
    VAR_12->cur_pmksa = ((void*)0);
    VAR_15 = 1;
   } else if (!VAR_15) {
    return -1;
   }
  }
 }

 if (VAR_15 && FUNC_14(VAR_12->key_mgmt) &&
     !FUNC_13(VAR_12->key_mgmt) &&
     !FUNC_11(VAR_12->key_mgmt) && VAR_12->key_mgmt != VAR_10)
 {

  u8 *VAR_20;
  size_t VAR_21;

  FUNC_8(VAR_12->ctx->msg_ctx, VAR_2,
   "RSN: no PMKSA entry found - trigger "
   "full EAP authentication");
  VAR_20 = FUNC_17(VAR_12, VAR_1,
      ((void*)0), 0, &VAR_21, ((void*)0));
  if (VAR_20) {
   FUNC_18(VAR_12, VAR_12->bssid, VAR_0,
       VAR_20, VAR_21);
   FUNC_3(VAR_20);
   return -2;
  }

  return -1;
 }

 return 0;
}
