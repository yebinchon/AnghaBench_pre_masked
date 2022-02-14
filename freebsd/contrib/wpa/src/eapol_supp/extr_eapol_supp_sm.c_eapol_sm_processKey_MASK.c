
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802_1x_eapol_key {int key_index; struct ieee802_1x_eapol_key* replay_counter; struct ieee802_1x_eapol_key* key_iv; struct ieee802_1x_eapol_key* key_signature; int type; int key_length; } ;
typedef struct ieee802_1x_eapol_key u8 ;
typedef int u16 ;
struct ieee802_1x_hdr {int length; int type; int version; } ;
struct TYPE_3__ {int required_keys; int accept_802_1x_keys; } ;
struct eapol_sm {int last_rx_key_len; TYPE_2__* ctx; void* portValid; TYPE_1__ conf; void* broadcast_key_received; void* unicast_key_received; struct ieee802_1x_eapol_key* last_replay_counter; void* replay_counter_valid; int * last_rx_key; } ;
struct eap_key_data {struct ieee802_1x_eapol_key* encr_key; struct ieee802_1x_eapol_key* sign_key; } ;
typedef int keydata ;
struct TYPE_4__ {scalar_t__ (* set_wep_key ) (int ,int,int,struct ieee802_1x_eapol_key*,int) ;int ctx; int (* eapol_done_cb ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct eapol_sm*,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_3 (struct eapol_sm*,int) ;
 int FUNC_4 (struct ieee802_1x_eapol_key*,int,int *,int,struct ieee802_1x_eapol_key*) ;
 scalar_t__ FUNC_5 (struct ieee802_1x_eapol_key*,struct ieee802_1x_eapol_key*,int) ;
 scalar_t__ FUNC_6 (struct ieee802_1x_eapol_key*,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_7 (struct ieee802_1x_eapol_key*,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_8 (struct ieee802_1x_eapol_key*,int ,int) ;
 int FUNC_9 (struct ieee802_1x_eapol_key*,int,int ,struct ieee802_1x_eapol_key*,int) ;
 scalar_t__ FUNC_10 (int ,int,int,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_13 (int ,char*,struct ieee802_1x_eapol_key*,int) ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void FUNC_15(struct eapol_sm *VAR_13)
{

 struct ieee802_1x_hdr *VAR_14;
 struct ieee802_1x_eapol_key *VAR_15;
 struct eap_key_data VAR_16;
 u8 VAR_17[VAR_6], VAR_18[32];

 u8 VAR_19[VAR_5 + VAR_2];

 int VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24;
 size_t VAR_25;

 FUNC_14(VAR_9, "EAPOL: processKey");
 if (VAR_13->last_rx_key == ((void*)0))
  return;

 if (!VAR_13->conf.accept_802_1x_keys) {
  FUNC_14(VAR_11, "EAPOL: Received IEEE 802.1X EAPOL-Key"
      " even though this was not accepted - "
      "ignoring this packet");
  return;
 }

 if (VAR_13->last_rx_key_len < sizeof(*VAR_14) + sizeof(*VAR_15))
  return;
 VAR_14 = (struct ieee802_1x_hdr *) VAR_13->last_rx_key;
 VAR_15 = (struct ieee802_1x_eapol_key *) (VAR_14 + 1);
 VAR_25 = FUNC_1(VAR_14->length);
 if (sizeof(*VAR_14) + VAR_25 > VAR_13->last_rx_key_len || VAR_25 < sizeof(*VAR_15)) {
  FUNC_14(VAR_11, "EAPOL: Too short EAPOL-Key frame");
  return;
 }
 VAR_24 = FUNC_0(VAR_15->key_length);
 FUNC_14(VAR_9, "EAPOL: RX IEEE 802.1X ver=%d type=%d len=%d "
     "EAPOL-Key: type=%d key_length=%d key_index=0x%x",
     VAR_14->version, VAR_14->type, FUNC_1(VAR_14->length),
     VAR_15->type, VAR_24, VAR_15->key_index);

 FUNC_3(VAR_13, 1);
 VAR_22 = VAR_8;
 VAR_23 = VAR_2;
 VAR_21 = FUNC_2(VAR_13, (u8 *) &VAR_16, sizeof(VAR_16));
 if (VAR_21 < 0) {
  FUNC_14(VAR_9, "EAPOL: Could not get master key for "
      "decrypting EAPOL-Key keys");
  return;
 }
 if (VAR_21 == 16) {

  VAR_21 = FUNC_2(VAR_13, (u8 *) &VAR_16, 16);
  if (VAR_21) {
   FUNC_14(VAR_9, "EAPOL: Could not get LEAP "
       "master key for decrypting EAPOL-Key keys");
   return;
  }
  VAR_22 = 16;
  VAR_23 = 16;
  FUNC_7(VAR_16.sign_key, VAR_16.encr_key, 16);
 } else if (VAR_21) {
  FUNC_14(VAR_9, "EAPOL: Could not get enough master key "
      "data for decrypting EAPOL-Key keys (res=%d)", VAR_21);
  return;
 }


 if (VAR_13->replay_counter_valid &&
     FUNC_5(VAR_13->last_replay_counter, VAR_15->replay_counter,
        VAR_7) >= 0) {
  FUNC_14(VAR_11, "EAPOL: EAPOL-Key replay counter did "
      "not increase - ignoring key");
  FUNC_12(VAR_9, "EAPOL: last replay counter",
       VAR_13->last_replay_counter,
       VAR_7);
  FUNC_12(VAR_9, "EAPOL: received replay counter",
       VAR_15->replay_counter, VAR_7);
  return;
 }


 FUNC_7(VAR_17, VAR_15->key_signature, VAR_6);
 FUNC_8(VAR_15->key_signature, 0, VAR_6);
 FUNC_4(VAR_16.sign_key, VAR_22,
   VAR_13->last_rx_key, sizeof(*VAR_14) + FUNC_1(VAR_14->length),
   VAR_15->key_signature);
 if (FUNC_6(VAR_17, VAR_15->key_signature,
       VAR_6) != 0) {
  FUNC_14(VAR_9, "EAPOL: Invalid key signature in "
      "EAPOL-Key packet");
  FUNC_7(VAR_15->key_signature, VAR_17,
     VAR_6);
  return;
 }
 FUNC_14(VAR_9, "EAPOL: EAPOL-Key key signature verified");

 VAR_20 = VAR_25 - sizeof(*VAR_15);
 if (VAR_20 > 32 || VAR_24 > 32) {
  FUNC_14(VAR_11, "EAPOL: Too long key data length %d",
      VAR_20 ? VAR_20 : VAR_24);
  return;
 }
 if (VAR_20 == VAR_24) {







  FUNC_7(VAR_19, VAR_15->key_iv, VAR_5);
  FUNC_7(VAR_19 + VAR_5, VAR_16.encr_key,
     VAR_23);
  FUNC_7(VAR_18, VAR_15 + 1, VAR_20);
  FUNC_9(VAR_19, VAR_5 + VAR_23, 0,
    VAR_18, VAR_20);
  FUNC_13(VAR_9, "EAPOL: Decrypted(RC4) key",
    VAR_18, VAR_20);

 } else if (VAR_20 == 0) {
  VAR_20 = VAR_24;
  FUNC_7(VAR_18, VAR_16.encr_key, VAR_20);
  FUNC_13(VAR_9, "EAPOL: using part of EAP keying "
    "material data encryption key",
    VAR_18, VAR_20);
 } else {
  FUNC_14(VAR_9, "EAPOL: Invalid key data length %d "
      "(key_length=%d)", VAR_20, VAR_24);
  return;
 }

 VAR_13->replay_counter_valid = VAR_12;
 FUNC_7(VAR_13->last_replay_counter, VAR_15->replay_counter,
    VAR_7);

 FUNC_14(VAR_9, "EAPOL: Setting dynamic WEP key: %s keyidx %d "
     "len %d",
     VAR_15->key_index & VAR_3 ?
     "unicast" : "broadcast",
     VAR_15->key_index & VAR_4, VAR_20);

 if (VAR_13->ctx->set_wep_key &&
     VAR_13->ctx->set_wep_key(VAR_13->ctx->ctx,
     VAR_15->key_index & VAR_3,
     VAR_15->key_index & VAR_4,
     VAR_18, VAR_20) < 0) {
  FUNC_14(VAR_11, "EAPOL: Failed to set WEP key to the "
      " driver.");
 } else {
  if (VAR_15->key_index & VAR_3)
   VAR_13->unicast_key_received = VAR_12;
  else
   VAR_13->broadcast_key_received = VAR_12;

  if ((VAR_13->unicast_key_received ||
       !(VAR_13->conf.required_keys & VAR_1)) &&
      (VAR_13->broadcast_key_received ||
       !(VAR_13->conf.required_keys & VAR_0)))
  {
   FUNC_14(VAR_9, "EAPOL: all required EAPOL-Key "
       "frames received");
   VAR_13->portValid = VAR_12;
   if (VAR_13->ctx->eapol_done_cb)
    VAR_13->ctx->eapol_done_cb(VAR_13->ctx->ctx);
  }
 }

}
