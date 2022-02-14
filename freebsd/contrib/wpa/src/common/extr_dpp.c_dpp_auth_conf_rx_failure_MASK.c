
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef size_t u16 ;
struct dpp_authentication {int const* r_nonce; TYPE_1__* curve; int k2; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_2__ {size_t nonce_len; int hash_len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,size_t,int,int const**,size_t*,int const*) ;
 int FUNC_1 (int const*,size_t) ;
 int FUNC_2 (struct dpp_authentication*,char*) ;
 scalar_t__ FUNC_3 (int const*,size_t) ;
 int const* FUNC_4 (int const*,size_t,int ,size_t*) ;
 int const* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int const*,int const*,size_t) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;

__attribute__((used)) static int FUNC_8(struct dpp_authentication *VAR_6,
        const u8 *VAR_7,
        const u8 *VAR_8, size_t VAR_9,
        const u8 *VAR_10,
        u16 VAR_11,
        enum dpp_status_error VAR_12)
{
 const u8 *VAR_13[2];
 size_t VAR_14[2];
 u8 *VAR_15 = ((void*)0);
 size_t VAR_16 = 0;
 const u8 *VAR_17;
 u16 VAR_18;




 VAR_13[0] = VAR_7;
 VAR_14[0] = VAR_2;
 VAR_13[1] = VAR_8;
 VAR_14[1] = VAR_9;
 FUNC_7(VAR_5, "DDP: AES-SIV AD[0]", VAR_13[0], VAR_14[0]);
 FUNC_7(VAR_5, "DDP: AES-SIV AD[1]", VAR_13[1], VAR_14[1]);
 FUNC_7(VAR_5, "DPP: AES-SIV ciphertext",
      VAR_10, VAR_11);
 VAR_16 = VAR_11 - VAR_0;
 VAR_15 = FUNC_5(VAR_16);
 if (!VAR_15) {
  FUNC_2(VAR_6, "Authentication failed");
  goto fail;
 }
 if (FUNC_0(VAR_6->k2, VAR_6->curve->hash_len,
       VAR_10, VAR_11,
       2, VAR_13, VAR_14, VAR_15) < 0) {
  FUNC_2(VAR_6, "AES-SIV decryption failed");
  goto fail;
 }
 FUNC_7(VAR_5, "DPP: AES-SIV cleartext",
      VAR_15, VAR_16);

 if (FUNC_3(VAR_15, VAR_16) < 0) {
  FUNC_2(VAR_6, "Invalid attribute in unwrapped data");
  goto fail;
 }

 VAR_17 = FUNC_4(VAR_15, VAR_16, VAR_1,
          &VAR_18);
 if (!VAR_17 || VAR_18 != VAR_6->curve->nonce_len) {
  FUNC_2(VAR_6, "DPP: Missing or invalid R-nonce");
  goto fail;
 }
 if (FUNC_6(VAR_17, VAR_6->r_nonce, VAR_18) != 0) {
  FUNC_7(VAR_5, "DPP: Received R-nonce",
       VAR_17, VAR_18);
  FUNC_7(VAR_5, "DPP: Expected R-nonce",
       VAR_6->r_nonce, VAR_18);
  FUNC_2(VAR_6, "R-nonce mismatch");
  goto fail;
 }

 if (VAR_12 == VAR_4)
  FUNC_2(VAR_6, "Peer reported incompatible R-capab role");
 else if (VAR_12 == VAR_3)
  FUNC_2(VAR_6, "Peer reported authentication failure)");

fail:
 FUNC_1(VAR_15, VAR_16);
 return -1;
}
