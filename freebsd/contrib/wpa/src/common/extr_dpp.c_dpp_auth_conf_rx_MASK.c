
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct dpp_authentication {TYPE_3__* curve; int ke; TYPE_2__* peer_bi; TYPE_1__* own_bi; scalar_t__ waiting_auth_conf; scalar_t__ initiator; } ;
struct TYPE_6__ {scalar_t__ hash_len; } ;
struct TYPE_5__ {scalar_t__* pubkey_hash; } ;
struct TYPE_4__ {scalar_t__* pubkey_hash; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__ const*,scalar_t__,int,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,size_t) ;
 int FUNC_2 (struct dpp_authentication*,scalar_t__ const*,scalar_t__ const*,size_t,scalar_t__ const*,scalar_t__,scalar_t__ const) ;
 int FUNC_3 (struct dpp_authentication*,char*) ;
 int FUNC_4 (struct dpp_authentication*) ;
 scalar_t__ FUNC_5 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_6 (struct dpp_authentication*,scalar_t__*) ;
 scalar_t__* FUNC_7 (scalar_t__ const*,size_t,int ,scalar_t__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__* FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (scalar_t__ const*,scalar_t__*,scalar_t__) ;
 int FUNC_10 (int ,char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_11 (int ,char*,...) ;

int FUNC_12(struct dpp_authentication *VAR_17, const u8 *VAR_18,
       const u8 *VAR_19, size_t VAR_20)
{
 const u8 *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 u16 VAR_26, VAR_27, VAR_28, VAR_29,
  VAR_30;
 const u8 *VAR_31[2];
 size_t VAR_32[2];
 u8 *VAR_33 = ((void*)0);
 size_t VAR_34 = 0;
 u8 VAR_35[VAR_7];
 if (VAR_17->initiator || !VAR_17->own_bi) {
  FUNC_3(VAR_17, "Unexpected Authentication Confirm");
  return -1;
 }

 VAR_17->waiting_auth_conf = 0;

 VAR_23 = FUNC_7(VAR_19, VAR_20, VAR_5,
        &VAR_28);
 if (!VAR_23 || VAR_28 < VAR_0) {
  FUNC_3(VAR_17,
         "Missing or invalid required Wrapped Data attribute");
  return -1;
 }
 FUNC_10(VAR_12, "DPP: Wrapped data",
      VAR_23, VAR_28);

 VAR_20 = VAR_23 - 4 - VAR_19;

 VAR_21 = FUNC_7(VAR_19, VAR_20,
       VAR_3,
       &VAR_26);
 if (!VAR_21 || VAR_26 != VAR_15) {
  FUNC_3(VAR_17,
         "Missing or invalid required Responder Bootstrapping Key Hash attribute");
  return -1;
 }
 FUNC_10(VAR_12, "DPP: Responder Bootstrapping Key Hash",
      VAR_21, VAR_26);
 if (FUNC_9(VAR_21, VAR_17->own_bi->pubkey_hash,
        VAR_15) != 0) {
  FUNC_10(VAR_12,
       "DPP: Expected Responder Bootstrapping Key Hash",
       VAR_17->peer_bi->pubkey_hash, VAR_15);
  FUNC_3(VAR_17,
         "Responder Bootstrapping Key Hash mismatch");
  return -1;
 }

 VAR_22 = FUNC_7(VAR_19, VAR_20,
       VAR_2,
       &VAR_27);
 if (VAR_22) {
  if (VAR_27 != VAR_15) {
   FUNC_3(VAR_17,
          "Invalid Initiator Bootstrapping Key Hash attribute");
   return -1;
  }
  FUNC_10(VAR_14,
       "DPP: Initiator Bootstrapping Key Hash",
       VAR_22, VAR_27);
  if (!VAR_17->peer_bi ||
      FUNC_9(VAR_22, VAR_17->peer_bi->pubkey_hash,
         VAR_15) != 0) {
   FUNC_3(VAR_17,
          "Initiator Bootstrapping Key Hash mismatch");
   return -1;
  }
 } else if (VAR_17->peer_bi) {


  FUNC_3(VAR_17,
         "Missing Initiator Bootstrapping Key Hash attribute");
  return -1;
 }

 VAR_24 = FUNC_7(VAR_19, VAR_20, VAR_4,
         &VAR_29);
 if (!VAR_24 || VAR_29 < 1) {
  FUNC_3(VAR_17,
         "Missing or invalid required DPP Status attribute");
  return -1;
 }
 FUNC_11(VAR_12, "DPP: Status %u", VAR_24[0]);
 if (VAR_24[0] == VAR_9 ||
     VAR_24[0] == VAR_8)
  return FUNC_2(VAR_17, VAR_18, VAR_19,
      VAR_20, VAR_23,
      VAR_28, VAR_24[0]);

 if (VAR_24[0] != VAR_10) {
  FUNC_3(VAR_17, "Authentication failed");
  return -1;
 }

 VAR_31[0] = VAR_18;
 VAR_32[0] = VAR_6;
 VAR_31[1] = VAR_19;
 VAR_32[1] = VAR_20;
 FUNC_10(VAR_12, "DDP: AES-SIV AD[0]", VAR_31[0], VAR_32[0]);
 FUNC_10(VAR_12, "DDP: AES-SIV AD[1]", VAR_31[1], VAR_32[1]);
 FUNC_10(VAR_12, "DPP: AES-SIV ciphertext",
      VAR_23, VAR_28);
 VAR_34 = VAR_28 - VAR_0;
 VAR_33 = FUNC_8(VAR_34);
 if (!VAR_33)
  return -1;
 if (FUNC_0(VAR_17->ke, VAR_17->curve->hash_len,
       VAR_23, VAR_28,
       2, VAR_31, VAR_32, VAR_33) < 0) {
  FUNC_3(VAR_17, "AES-SIV decryption failed");
  goto fail;
 }
 FUNC_10(VAR_12, "DPP: AES-SIV cleartext",
      VAR_33, VAR_34);

 if (FUNC_5(VAR_33, VAR_34) < 0) {
  FUNC_3(VAR_17, "Invalid attribute in unwrapped data");
  goto fail;
 }

 VAR_25 = FUNC_7(VAR_33, VAR_34, VAR_1,
         &VAR_30);
 if (!VAR_25 || VAR_30 != VAR_17->curve->hash_len) {
  FUNC_3(VAR_17,
         "Missing or invalid Initiator Authenticating Tag");
  goto fail;
 }
 FUNC_10(VAR_12, "DPP: Received Initiator Authenticating Tag",
      VAR_25, VAR_30);

 if (FUNC_6(VAR_17, VAR_35) < 0)
  goto fail;
 FUNC_10(VAR_12, "DPP: Calculated Initiator Authenticating Tag",
      VAR_35, VAR_30);
 if (FUNC_9(VAR_25, VAR_35, VAR_30) != 0) {
  FUNC_3(VAR_17, "Mismatching Initiator Authenticating Tag");
  goto fail;
 }

 FUNC_1(VAR_33, VAR_34);
 FUNC_4(VAR_17);
 return 0;
fail:
 FUNC_1(VAR_33, VAR_34);
 return -1;
}
