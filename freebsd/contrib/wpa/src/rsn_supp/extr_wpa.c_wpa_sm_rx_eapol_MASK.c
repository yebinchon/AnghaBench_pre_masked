
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {scalar_t__ pairwise_cipher; scalar_t__ group_cipher; scalar_t__ proto; TYPE_1__* ctx; int rx_replay_counter; scalar_t__ rx_replay_counter_set; int key_mgmt; int eapol; int pmk_len; scalar_t__ ft_completed; } ;
struct wpa_eapol_key {unsigned long type; int replay_counter; int * key_info; } ;
struct ieee802_1x_hdr {unsigned long type; int version; int length; } ;
struct TYPE_2__ {int msg_ctx; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int * FUNC_5 (int const*,size_t) ;
 int FUNC_6 (int ,int ,char*,unsigned long,...) ;
 int FUNC_7 (struct wpa_sm*,struct wpa_eapol_key*,size_t,int *,size_t) ;
 int FUNC_8 (int ,char*,int const*,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 size_t FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,char*,...) ;
 scalar_t__ FUNC_13 (struct wpa_sm*,int *,size_t,size_t*) ;
 scalar_t__ FUNC_14 (struct wpa_sm*,struct wpa_eapol_key*,size_t,int,int *,size_t*) ;
 int FUNC_15 (struct wpa_sm*,int const*,struct wpa_eapol_key*,int *,size_t,int) ;
 int FUNC_16 (struct wpa_sm*,int const*,struct wpa_eapol_key*,int,int *,size_t) ;
 int FUNC_17 (struct wpa_sm*,struct wpa_eapol_key*,int,int *,size_t) ;
 scalar_t__ FUNC_18 (struct wpa_sm*,struct wpa_eapol_key*,int,int *,size_t) ;
 scalar_t__ FUNC_19 (int ) ;

int FUNC_20(struct wpa_sm *VAR_25, const u8 *VAR_26,
      const u8 *VAR_27, size_t VAR_28)
{
 size_t VAR_29, VAR_30, VAR_31;
 const struct ieee802_1x_hdr *VAR_32;
 struct wpa_eapol_key *VAR_33;
 u16 VAR_34, VAR_35;
 u8 *VAR_36 = ((void*)0);
 int VAR_37 = -1;
 u8 *VAR_38, *VAR_39;
 size_t VAR_40, VAR_41;





 VAR_40 = FUNC_11(VAR_25->key_mgmt, VAR_25->pmk_len);
 VAR_41 = sizeof(*VAR_33) + VAR_40 + 2;

 if (VAR_28 < sizeof(*VAR_32) + VAR_41) {
  FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
   "WPA: EAPOL frame too short to be a WPA "
   "EAPOL-Key (len %lu, expecting at least %lu)",
   (unsigned long) VAR_28,
   (unsigned long) sizeof(*VAR_32) + VAR_41);
  return 0;
 }

 VAR_32 = (const struct ieee802_1x_hdr *) VAR_27;
 VAR_29 = FUNC_1(VAR_32->length);
 VAR_30 = VAR_29 + sizeof(*VAR_32);
 FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
  "IEEE 802.1X RX: version=%d type=%d length=%lu",
  VAR_32->version, VAR_32->type, (unsigned long) VAR_29);

 if (VAR_32->version < VAR_2) {

 }
 if (VAR_32->type != VAR_3) {
  FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
   "WPA: EAPOL frame (type %u) discarded, "
   "not a Key frame", VAR_32->type);
  VAR_37 = 0;
  goto out;
 }
 FUNC_8(VAR_6, "WPA: RX EAPOL-Key", VAR_27, VAR_28);
 if (VAR_29 > VAR_28 - sizeof(*VAR_32) || VAR_29 < VAR_41) {
  FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
   "WPA: EAPOL frame payload size %lu "
   "invalid (frame size %lu)",
   (unsigned long) VAR_29, (unsigned long) VAR_28);
  VAR_37 = 0;
  goto out;
 }
 if (VAR_30 < VAR_28) {
  FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
   "WPA: ignoring %lu bytes after the IEEE 802.1X data",
   (unsigned long) VAR_28 - VAR_30);
 }





 VAR_36 = FUNC_5(VAR_27, VAR_30);
 if (VAR_36 == ((void*)0))
  goto out;
 VAR_33 = (struct wpa_eapol_key *) (VAR_36 + sizeof(struct ieee802_1x_hdr));
 VAR_38 = (u8 *) (VAR_33 + 1);
 VAR_39 = VAR_38 + VAR_40 + 2;

 if (VAR_33->type != VAR_1 && VAR_33->type != VAR_0)
 {
  FUNC_6(VAR_25->ctx->msg_ctx, VAR_4,
   "WPA: EAPOL-Key type (%d) unknown, discarded",
   VAR_33->type);
  VAR_37 = 0;
  goto out;
 }

 VAR_31 = FUNC_0(VAR_38 + VAR_40);
 FUNC_7(VAR_25, VAR_33, VAR_31, VAR_38, VAR_40);

 if (VAR_31 > VAR_29 - VAR_41) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5, "WPA: Invalid EAPOL-Key "
   "frame - key_data overflow (%u > %u)",
   (unsigned int) VAR_31,
   (unsigned int) (VAR_29 - VAR_41));
  goto out;
 }

 FUNC_3(VAR_25->eapol, 0);
 VAR_34 = FUNC_0(VAR_33->key_info);
 VAR_35 = VAR_34 & VAR_21;
 if (VAR_35 != VAR_19 &&



     VAR_35 != VAR_20 &&
     !FUNC_19(VAR_25->key_mgmt)) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: Unsupported EAPOL-Key descriptor version %d",
   VAR_35);
  goto out;
 }

 if (FUNC_19(VAR_25->key_mgmt) &&
     VAR_35 != VAR_18) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "RSN: Unsupported EAPOL-Key descriptor version %d (expected AKM defined = 0)",
   VAR_35);
  goto out;
 }
 if (VAR_25->pairwise_cipher == VAR_8 &&
     !FUNC_19(VAR_25->key_mgmt) &&
     VAR_35 != VAR_20) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: CCMP is used, but EAPOL-Key "
   "descriptor version (%d) is not 2", VAR_35);
  if (VAR_25->group_cipher != VAR_8 &&
      !(VAR_34 & VAR_13)) {




   FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
    "WPA: Backwards compatibility: allow invalid "
    "version for non-CCMP group keys");
  } else if (VAR_35 == VAR_17) {
   FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
    "WPA: Interoperability workaround: allow incorrect (should have been HMAC-SHA1), but stronger (is AES-128-CMAC), descriptor version to be used");
  } else
   goto out;
 } else if (VAR_25->pairwise_cipher == VAR_9 &&
     !FUNC_19(VAR_25->key_mgmt) &&
     VAR_35 != VAR_20) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: GCMP is used, but EAPOL-Key "
   "descriptor version (%d) is not 2", VAR_35);
  goto out;
 }

 if (VAR_25->rx_replay_counter_set &&
     FUNC_4(VAR_33->replay_counter, VAR_25->rx_replay_counter,
        VAR_24) <= 0) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_7,
   "WPA: EAPOL-Key Replay Counter did not increase - "
   "dropping packet");
  goto out;
 }

 if (VAR_34 & VAR_16) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: Unsupported SMK bit in key_info");
  goto out;
 }

 if (!(VAR_34 & VAR_10)) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: No Ack bit in key_info");
  goto out;
 }

 if (VAR_34 & VAR_15) {
  FUNC_12(VAR_25->ctx->msg_ctx, VAR_5,
   "WPA: EAPOL-Key with Request bit - dropped");
  goto out;
 }

 if ((VAR_34 & VAR_14) &&
     FUNC_18(VAR_25, VAR_33, VAR_35, VAR_36, VAR_30))
  goto out;
 if ((VAR_25->proto == VAR_23 || VAR_25->proto == VAR_22) &&
     (VAR_34 & VAR_11) && VAR_40) {






  if (!(VAR_34 & VAR_14)) {
   FUNC_12(VAR_25->ctx->msg_ctx, VAR_7,
    "WPA: Ignore EAPOL-Key with encrypted but unauthenticated data");
   goto out;
  }
  if (FUNC_14(VAR_25, VAR_33, VAR_40,
          VAR_35, VAR_39,
          &VAR_31))
   goto out;
 }

 if (VAR_34 & VAR_13) {
  if (VAR_34 & VAR_12) {
   FUNC_12(VAR_25->ctx->msg_ctx, VAR_7,
    "WPA: Ignored EAPOL-Key (Pairwise) with "
    "non-zero key index");
   goto out;
  }
  if (VAR_34 & (VAR_14 |
    VAR_11)) {

   FUNC_17(VAR_25, VAR_33, VAR_35, VAR_39,
            VAR_31);
  } else {

   FUNC_16(VAR_25, VAR_26, VAR_33,
            VAR_35, VAR_39,
            VAR_31);
  }
 } else {
  if ((VAR_40 && (VAR_34 & VAR_14)) ||
      (!VAR_40 && (VAR_34 & VAR_11))) {

   FUNC_15(VAR_25, VAR_26, VAR_33,
            VAR_39, VAR_31,
            VAR_35);
  } else {
   FUNC_12(VAR_25->ctx->msg_ctx, VAR_7,
    "WPA: EAPOL-Key (Group) without Mic/Encr bit - "
    "dropped");
  }
 }

 VAR_37 = 1;

out:
 FUNC_2(VAR_36, VAR_30);
 return VAR_37;
}
