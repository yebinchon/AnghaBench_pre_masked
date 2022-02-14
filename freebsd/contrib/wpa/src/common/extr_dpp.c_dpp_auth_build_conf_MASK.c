
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {int const* r_nonce; TYPE_3__* curve; int k2; int ke; TYPE_2__* own_bi; TYPE_1__* peer_bi; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_6__ {int hash_len; int nonce_len; } ;
struct TYPE_5__ {int* pubkey_hash; } ;
struct TYPE_4__ {int* pubkey_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int ,int,int*,size_t,int,int const**,size_t*,int*) ;
 struct wpabuf* FUNC_2 (int ,size_t) ;
 int FUNC_3 (struct dpp_authentication*) ;
 int FUNC_4 (struct wpabuf*,int const*) ;
 int FUNC_5 (struct wpabuf*,int const*) ;
 int FUNC_6 (struct wpabuf*,int) ;
 scalar_t__ FUNC_7 (struct dpp_authentication*,int*) ;
 scalar_t__ VAR_21 ;
 int FUNC_8 (int*,int const*,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int ,char*,int const*,size_t) ;
 int FUNC_11 (int ,char*,struct wpabuf*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct wpabuf*) ;
 int* FUNC_14 (struct wpabuf*) ;
 int* FUNC_15 (struct wpabuf*,size_t) ;
 int FUNC_16 (struct wpabuf*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_17(struct dpp_authentication *VAR_22,
        enum dpp_status_error VAR_23)
{
 struct wpabuf *VAR_24;
 u8 VAR_25[4 + VAR_4];
 size_t VAR_26;
 u8 VAR_27[4 + VAR_5];
 size_t VAR_28;
 const u8 *VAR_29[2];
 size_t VAR_30[2], VAR_31;
 u8 *VAR_32;
 u8 *VAR_33;
 u8 *VAR_34, *VAR_35;
 const u8 *VAR_36, *VAR_37;




 FUNC_12(VAR_18, "DPP: Build Authentication Confirmation");

 VAR_26 = 4 + VAR_22->curve->hash_len;
 VAR_28 = 4 + VAR_22->curve->nonce_len;

 VAR_31 = 4 + 1 + 2 * (4 + VAR_20) +
  4 + VAR_26 + VAR_28 + VAR_0;




 VAR_24 = FUNC_2(VAR_6, VAR_31);
 if (!VAR_24)
  goto fail;

 VAR_34 = FUNC_15(VAR_24, 0);

 VAR_36 = VAR_22->peer_bi->pubkey_hash;
 if (VAR_22->own_bi)
  VAR_37 = VAR_22->own_bi->pubkey_hash;
 else
  VAR_37 = ((void*)0);
 FUNC_6(VAR_24, VAR_23);
 FUNC_5(VAR_24, VAR_36);


 FUNC_4(VAR_24, VAR_37);
 VAR_35 = FUNC_15(VAR_24, 0);


 VAR_29[0] = FUNC_14(VAR_24) + 2;
 VAR_30[0] = 3 + 1 + 1 + 1;
 FUNC_10(VAR_18, "DDP: AES-SIV AD[0]", VAR_29[0], VAR_30[0]);


 VAR_29[1] = VAR_34;
 VAR_30[1] = VAR_35 - VAR_34;
 FUNC_10(VAR_18, "DDP: AES-SIV AD[1]", VAR_29[1], VAR_30[1]);

 if (VAR_23 == VAR_7) {

  FUNC_16(VAR_24, VAR_3);
  FUNC_16(VAR_24, VAR_26 + VAR_0);
  VAR_32 = FUNC_15(VAR_24, VAR_26 + VAR_0);
  FUNC_0(VAR_25, VAR_1);
  FUNC_0(&VAR_25[2], VAR_22->curve->hash_len);
  if (FUNC_7(VAR_22, VAR_25 + 4) < 0)
   goto fail;
  if (FUNC_1(VAR_22->ke, VAR_22->curve->hash_len,
        VAR_25, VAR_26,
        2, VAR_29, VAR_30, VAR_32) < 0)
   goto fail;
  FUNC_10(VAR_18, "DPP: {I-auth}ke",
       VAR_32, VAR_26 + VAR_0);
 } else {

  FUNC_16(VAR_24, VAR_3);
  FUNC_16(VAR_24, VAR_28 + VAR_0);
  VAR_33 = FUNC_15(VAR_24, VAR_28 + VAR_0);

  FUNC_0(VAR_27, VAR_2);
  FUNC_0(&VAR_27[2], VAR_22->curve->nonce_len);
  FUNC_8(VAR_27 + 4, VAR_22->r_nonce, VAR_22->curve->nonce_len);

  if (FUNC_1(VAR_22->k2, VAR_22->curve->hash_len,
        VAR_27, VAR_28,
        2, VAR_29, VAR_30, VAR_33) < 0)
   goto fail;
  FUNC_10(VAR_18, "DPP: {R-nonce}k2",
       VAR_33, VAR_28 + VAR_0);
 }
 FUNC_11(VAR_18,
   "DPP: Authentication Confirmation frame attributes",
   VAR_24);
 if (VAR_23 == VAR_7)
  FUNC_3(VAR_22);

 return VAR_24;

fail:
 FUNC_13(VAR_24);
 return ((void*)0);
}
