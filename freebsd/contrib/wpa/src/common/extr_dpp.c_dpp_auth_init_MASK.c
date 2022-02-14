
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct hostapd_hw_modes {int dummy; } ;
struct dpp_curve_params {int dummy; } ;
struct dpp_bootstrap_info {int* pubkey_hash; int pubkey; TYPE_1__* curve; } ;
struct dpp_authentication {int initiator; int waiting_auth_resp; int allowed_roles; int configurator; int* i_nonce; size_t secret_len; size_t Mx_len; int req_msg; TYPE_1__* curve; struct dpp_bootstrap_info* own_bi; struct dpp_bootstrap_info* peer_bi; int k1; int Mx; void* own_protocol_key; void* msg_ctx; } ;
struct TYPE_3__ {size_t nonce_len; int prime_len; int hash_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct dpp_authentication*,struct wpabuf*,size_t,int const*,int const*,unsigned int) ;
 int FUNC_1 (struct dpp_authentication*) ;
 scalar_t__ FUNC_2 (struct dpp_authentication*) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (void*,int ,int ,size_t*) ;
 void* FUNC_5 (TYPE_1__*) ;
 struct wpabuf* FUNC_6 (void*,int ) ;
 int const* VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ FUNC_7 (struct dpp_authentication*,struct hostapd_hw_modes*,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_8 (struct dpp_curve_params const**,int ,scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_9 (struct wpabuf*,TYPE_1__*) ;
 int FUNC_10 (int*,int const*,int) ;
 struct dpp_authentication* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int*,size_t) ;
 int FUNC_13 (int ,char*,int*,size_t) ;
 int FUNC_14 (int ,char*,int ,size_t) ;
 int FUNC_15 (int ,char*) ;
 struct wpabuf* FUNC_16 (int) ;
 int FUNC_17 (struct wpabuf*) ;

struct dpp_authentication * FUNC_18(void *VAR_16,
       struct dpp_bootstrap_info *VAR_17,
       struct dpp_bootstrap_info *VAR_18,
       u8 VAR_19,
       unsigned int VAR_20,
       struct hostapd_hw_modes *VAR_21,
       u16 VAR_22)
{
 struct dpp_authentication *VAR_23;
 size_t VAR_24;
 size_t VAR_25;
 struct wpabuf *VAR_26 = ((void*)0);
 const u8 *VAR_27, *VAR_28;




 VAR_23 = FUNC_11(sizeof(*VAR_23));
 if (!VAR_23)
  return ((void*)0);
 VAR_23->msg_ctx = VAR_16;
 VAR_23->initiator = 1;
 VAR_23->waiting_auth_resp = 1;
 VAR_23->allowed_roles = VAR_19;
 VAR_23->configurator = !!(VAR_19 & VAR_0);
 VAR_23->peer_bi = VAR_17;
 VAR_23->own_bi = VAR_18;
 VAR_23->curve = VAR_17->curve;

 if (FUNC_2(VAR_23) < 0 ||
     FUNC_7(VAR_23, VAR_21, VAR_22) < 0)
  goto fail;
 VAR_24 = VAR_23->curve->nonce_len;
 if (FUNC_12(VAR_23->i_nonce, VAR_24)) {
  FUNC_15(VAR_8, "DPP: Failed to generate I-nonce");
  goto fail;
 }

 FUNC_13(VAR_7, "DPP: I-nonce", VAR_23->i_nonce, VAR_24);
 VAR_23->own_protocol_key = FUNC_5(VAR_23->curve);

 if (!VAR_23->own_protocol_key)
  goto fail;

 VAR_26 = FUNC_6(VAR_23->own_protocol_key, 0);
 if (!VAR_26)
  goto fail;


 if (FUNC_4(VAR_23->own_protocol_key, VAR_23->peer_bi->pubkey,
       VAR_23->Mx, &VAR_25) < 0)
  goto fail;
 VAR_23->secret_len = VAR_25;

 FUNC_14(VAR_7, "DPP: ECDH shared secret (M.x)",
   VAR_23->Mx, VAR_23->secret_len);
 VAR_23->Mx_len = VAR_23->secret_len;

 if (FUNC_3(VAR_23->Mx, VAR_23->secret_len, VAR_23->k1,
     VAR_23->curve->hash_len) < 0)
  goto fail;

 VAR_27 = VAR_23->peer_bi->pubkey_hash;
 VAR_28 = VAR_23->own_bi->pubkey_hash;
 VAR_23->req_msg = FUNC_0(VAR_23, VAR_26, VAR_24, VAR_27,
        VAR_28, VAR_20);
 if (!VAR_23->req_msg)
  goto fail;

out:
 FUNC_17(VAR_26);
 return VAR_23;
fail:
 FUNC_1(VAR_23);
 VAR_23 = ((void*)0);
 goto out;
}
