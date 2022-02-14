
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_curve_params {int dummy; } ;
struct dpp_authentication {int* r_nonce; int* i_nonce; struct wpabuf* resp_msg; int k2; TYPE_3__* curve; TYPE_2__* peer_bi; TYPE_1__* own_bi; int ke; int secret_len; int Nx; int Nx_len; int peer_protocol_key; void* own_protocol_key; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_7__ {size_t nonce_len; int hash_len; int prime_len; } ;
struct TYPE_6__ {int* pubkey_hash; } ;
struct TYPE_5__ {int* pubkey_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (void*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int ,int,int*,int,int ,int *,int *,int*) ;
 struct wpabuf* FUNC_3 (struct dpp_authentication*,int,struct wpabuf*,size_t,int const*,int const*,int const*,int const*,int*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct dpp_authentication*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct dpp_authentication*,int ,int) ;
 scalar_t__ FUNC_7 (void*,int ,int ,size_t*) ;
 void* FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct dpp_authentication*,int*) ;
 struct wpabuf* FUNC_10 (void*,int ) ;
 int const* VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 void* FUNC_11 (struct dpp_curve_params const**,int ,scalar_t__) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_12 (struct wpabuf*,TYPE_3__*) ;
 int FUNC_13 (int*,int const*,int) ;
 int FUNC_14 (int*,int ,int) ;
 scalar_t__ FUNC_15 (int*,size_t) ;
 int FUNC_16 (int ,char*,int*,size_t) ;
 int FUNC_17 (int ,char*,int ,int ) ;
 int FUNC_18 (int ,char*) ;
 struct wpabuf* FUNC_19 (int) ;
 int FUNC_20 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_21(struct dpp_authentication *VAR_25)
{
 size_t VAR_26;
 size_t VAR_27;
 struct wpabuf *VAR_28, *VAR_29 = ((void*)0);
 u8 VAR_30[4 + VAR_2];
 u8 VAR_31[4 + VAR_2 + VAR_0], *VAR_32;
 size_t VAR_33;
 int VAR_34 = -1;
 const u8 *VAR_35, *VAR_36, *VAR_37, *VAR_38;
 enum dpp_status_error VAR_39 = VAR_3;




 FUNC_18(VAR_16, "DPP: Build Authentication Response");
 if (!VAR_25->own_bi)
  return -1;
 VAR_26 = VAR_25->curve->nonce_len;
 if (FUNC_15(VAR_25->r_nonce, VAR_26)) {
  FUNC_18(VAR_17, "DPP: Failed to generate R-nonce");
  goto fail;
 }

 FUNC_16(VAR_16, "DPP: R-nonce", VAR_25->r_nonce, VAR_26);

 FUNC_0(VAR_25->own_protocol_key);
 VAR_25->own_protocol_key = FUNC_8(VAR_25->curve);

 if (!VAR_25->own_protocol_key)
  goto fail;

 VAR_29 = FUNC_10(VAR_25->own_protocol_key, 0);
 if (!VAR_29)
  goto fail;


 if (FUNC_7(VAR_25->own_protocol_key, VAR_25->peer_protocol_key,
       VAR_25->Nx, &VAR_27) < 0)
  goto fail;

 FUNC_17(VAR_16, "DPP: ECDH shared secret (N.x)",
   VAR_25->Nx, VAR_25->secret_len);
 VAR_25->Nx_len = VAR_25->secret_len;

 if (FUNC_5(VAR_25->Nx, VAR_25->secret_len, VAR_25->k2,
     VAR_25->curve->hash_len) < 0)
  goto fail;

 if (VAR_25->own_bi && VAR_25->peer_bi) {

  if (FUNC_4(VAR_25) < 0)
   goto fail;
 }

 if (FUNC_6(VAR_25, VAR_25->ke, VAR_25->curve->hash_len) < 0)
  goto fail;


 FUNC_1(VAR_30, VAR_1);
 FUNC_1(&VAR_30[2], VAR_25->curve->hash_len);
 if (FUNC_9(VAR_25, VAR_30 + 4) < 0)
  goto fail;






 if (FUNC_2(VAR_25->ke, VAR_25->curve->hash_len,
       VAR_30, 4 + VAR_25->curve->hash_len,
       0, ((void*)0), ((void*)0), VAR_31) < 0)
  goto fail;
 VAR_33 = 4 + VAR_25->curve->hash_len + VAR_0;
 FUNC_16(VAR_16, "DPP: {R-auth}ke",
      VAR_31, VAR_33);
 VAR_32 = VAR_31;

 VAR_35 = VAR_25->own_bi->pubkey_hash;
 if (VAR_25->peer_bi)
  VAR_36 = VAR_25->peer_bi->pubkey_hash;
 else
  VAR_36 = ((void*)0);

 VAR_38 = VAR_25->i_nonce;
 VAR_37 = VAR_25->r_nonce;
 VAR_28 = FUNC_3(VAR_25, VAR_39, VAR_29, VAR_26,
      VAR_35, VAR_36,
      VAR_37, VAR_38,
      VAR_32, VAR_33,
      VAR_25->k2);
 if (!VAR_28)
  goto fail;
 FUNC_20(VAR_25->resp_msg);
 VAR_25->resp_msg = VAR_28;
 VAR_34 = 0;
fail:
 FUNC_20(VAR_29);
 return VAR_34;
}
