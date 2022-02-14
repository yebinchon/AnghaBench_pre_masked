
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct wpa_eapol_key {int const* key_id; int const* key_rsc; int const* key_iv; int const* key_nonce; int const* replay_counter; int key_length; int type; int key_info; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
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
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_2 (int ,int ,char*,int,...) ;
 int FUNC_3 (int ,char*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct wpa_sm *VAR_14,
          const struct wpa_eapol_key *VAR_15,
          unsigned int VAR_16,
          const u8 *VAR_17, unsigned int VAR_18)
{

 u16 VAR_19 = FUNC_1(VAR_15->key_info);

 FUNC_2(VAR_14->ctx->msg_ctx, VAR_0, "  EAPOL-Key type=%d", VAR_15->type);
 FUNC_2(VAR_14->ctx->msg_ctx, VAR_0,
  "  key_info 0x%x (ver=%d keyidx=%d rsvd=%d %s%s%s%s%s%s%s%s)",
  VAR_19, VAR_19 & VAR_11,
  (VAR_19 & VAR_5) >>
  VAR_6,
  (VAR_19 & (FUNC_0(13) | FUNC_0(14) | FUNC_0(15))) >> 13,
  VAR_19 & VAR_7 ? "Pairwise" : "Group",
  VAR_19 & VAR_4 ? " Install" : "",
  VAR_19 & VAR_1 ? " Ack" : "",
  VAR_19 & VAR_8 ? " MIC" : "",
  VAR_19 & VAR_10 ? " Secure" : "",
  VAR_19 & VAR_3 ? " Error" : "",
  VAR_19 & VAR_9 ? " Request" : "",
  VAR_19 & VAR_2 ? " Encr" : "");
 FUNC_2(VAR_14->ctx->msg_ctx, VAR_0,
  "  key_length=%u key_data_length=%u",
  FUNC_1(VAR_15->key_length), VAR_16);
 FUNC_3(VAR_0, "  replay_counter",
      VAR_15->replay_counter, VAR_13);
 FUNC_3(VAR_0, "  key_nonce", VAR_15->key_nonce, VAR_12);
 FUNC_3(VAR_0, "  key_iv", VAR_15->key_iv, 16);
 FUNC_3(VAR_0, "  key_rsc", VAR_15->key_rsc, 8);
 FUNC_3(VAR_0, "  key_id (reserved)", VAR_15->key_id, 8);
 FUNC_3(VAR_0, "  key_mic", VAR_17, VAR_18);

}
