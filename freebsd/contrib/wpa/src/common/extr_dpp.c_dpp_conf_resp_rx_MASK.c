
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {int conf_resp_status; int e_nonce; TYPE_1__* curve; int ke; } ;
struct TYPE_2__ {scalar_t__ nonce_len; int hash_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__ const*,scalar_t__,int,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (struct dpp_authentication*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__*,size_t) ;
 scalar_t__* FUNC_3 (scalar_t__*,size_t,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct dpp_authentication*,scalar_t__ const*,scalar_t__) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (scalar_t__ const*,int ,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_9 (int ,char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_10 (int ,char*,scalar_t__ const) ;
 scalar_t__* FUNC_11 (struct wpabuf const*) ;
 size_t FUNC_12 (struct wpabuf const*) ;

int FUNC_13(struct dpp_authentication *VAR_7,
       const struct wpabuf *VAR_8)
{
 const u8 *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 const u8 *VAR_17[1];
 size_t VAR_18[1];
 u8 *VAR_19 = ((void*)0);
 size_t VAR_20 = 0;
 int VAR_21 = -1;

 VAR_7->conf_resp_status = 255;

 if (FUNC_2(FUNC_11(VAR_8), FUNC_12(VAR_8)) < 0) {
  FUNC_1(VAR_7, "Invalid attribute in config response");
  return -1;
 }

 VAR_9 = FUNC_3(FUNC_11(VAR_8), FUNC_12(VAR_8),
        VAR_4,
        &VAR_13);
 if (!VAR_9 || VAR_13 < VAR_0) {
  FUNC_1(VAR_7,
         "Missing or invalid required Wrapped Data attribute");
  return -1;
 }

 FUNC_8(VAR_6, "DPP: AES-SIV ciphertext",
      VAR_9, VAR_13);
 VAR_20 = VAR_13 - VAR_0;
 VAR_19 = FUNC_6(VAR_20);
 if (!VAR_19)
  return -1;

 VAR_17[0] = FUNC_11(VAR_8);
 VAR_18[0] = VAR_9 - 4 - (const u8 *) FUNC_11(VAR_8);
 FUNC_8(VAR_6, "DDP: AES-SIV AD", VAR_17[0], VAR_18[0]);

 if (FUNC_0(VAR_7->ke, VAR_7->curve->hash_len,
       VAR_9, VAR_13,
       1, VAR_17, VAR_18, VAR_19) < 0) {
  FUNC_1(VAR_7, "AES-SIV decryption failed");
  goto fail;
 }
 FUNC_8(VAR_6, "DPP: AES-SIV cleartext",
      VAR_19, VAR_20);

 if (FUNC_2(VAR_19, VAR_20) < 0) {
  FUNC_1(VAR_7, "Invalid attribute in unwrapped data");
  goto fail;
 }

 VAR_10 = FUNC_3(VAR_19, VAR_20,
          VAR_2,
          &VAR_14);
 if (!VAR_10 || VAR_14 != VAR_7->curve->nonce_len) {
  FUNC_1(VAR_7,
         "Missing or invalid Enrollee Nonce attribute");
  goto fail;
 }
 FUNC_8(VAR_6, "DPP: Enrollee Nonce", VAR_10, VAR_14);
 if (FUNC_7(VAR_10, VAR_7->e_nonce, VAR_14) != 0) {
  FUNC_1(VAR_7, "Enrollee Nonce mismatch");
  goto fail;
 }

 VAR_11 = FUNC_3(FUNC_11(VAR_8), FUNC_12(VAR_8),
         VAR_3, &VAR_15);
 if (!VAR_11 || VAR_15 < 1) {
  FUNC_1(VAR_7,
         "Missing or invalid required DPP Status attribute");
  goto fail;
 }
 VAR_7->conf_resp_status = VAR_11[0];
 FUNC_10(VAR_6, "DPP: Status %u", VAR_11[0]);
 if (VAR_11[0] != VAR_5) {
  FUNC_1(VAR_7, "Configurator rejected configuration");
  goto fail;
 }

 VAR_12 = FUNC_3(VAR_19, VAR_20,
    VAR_1, &VAR_16);
 if (!VAR_12) {
  FUNC_1(VAR_7,
         "Missing required Configuration Object attribute");
  goto fail;
 }
 FUNC_9(VAR_6, "DPP: configurationObject JSON",
     VAR_12, VAR_16);
 if (FUNC_4(VAR_7, VAR_12, VAR_16) < 0)
  goto fail;

 VAR_21 = 0;

fail:
 FUNC_5(VAR_19);
 return VAR_21;
}
