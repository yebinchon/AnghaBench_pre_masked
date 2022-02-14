
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_3__ {int kek_len; int const* kek; } ;
struct wpa_sm {TYPE_2__* ctx; TYPE_1__ ptk; int group_cipher; } ;
struct wpa_gtk_data {size_t gtk_len; size_t keyidx; int tx; int * gtk; int alg; int key_rsc_len; } ;
struct wpa_eapol_key {int const* key_iv; int key_length; } ;
typedef int ek ;
struct TYPE_4__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (int const*,size_t,size_t,int const*,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const*,size_t) ;
 scalar_t__ FUNC_4 (int *,int,int,int *,size_t) ;
 int FUNC_5 (int ,int ,char*,...) ;
 scalar_t__ FUNC_6 (struct wpa_sm*,int ,size_t,size_t,int *,int *) ;
 int FUNC_7 (struct wpa_sm*,int) ;

__attribute__((used)) static int FUNC_8(struct wpa_sm *VAR_8,
          const struct wpa_eapol_key *VAR_9,
          const u8 *VAR_10,
          size_t VAR_11, u16 VAR_12,
          u16 VAR_13, struct wpa_gtk_data *VAR_14)
{
 size_t VAR_15;
 u16 VAR_16;

 VAR_16 = FUNC_0(VAR_9->key_length);
 VAR_15 = VAR_11;
 if (VAR_13 == VAR_7) {
  if (VAR_15 < 8) {
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_1,
    "WPA: Too short maxkeylen (%lu)",
    (unsigned long) VAR_15);
   return -1;
  }
  VAR_15 -= 8;
 }

 if (VAR_16 > VAR_15 ||
     FUNC_6(VAR_8, VAR_8->group_cipher,
           VAR_16, VAR_15,
           &VAR_14->key_rsc_len, &VAR_14->alg))
  return -1;

 VAR_14->gtk_len = VAR_16;
 VAR_14->keyidx = (VAR_12 & VAR_3) >>
  VAR_4;
 if (VAR_13 == VAR_6 && VAR_8->ptk.kek_len == 16) {





  u8 VAR_17[32];
  if (VAR_11 > sizeof(VAR_14->gtk)) {
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_2,
    "WPA: RC4 key data too long (%lu)",
    (unsigned long) VAR_11);
   return -1;
  }
  FUNC_3(VAR_17, VAR_9->key_iv, 16);
  FUNC_3(VAR_17 + 16, VAR_8->ptk.kek, VAR_8->ptk.kek_len);
  FUNC_3(VAR_14->gtk, VAR_10, VAR_11);
  if (FUNC_4(VAR_17, 32, 256, VAR_14->gtk, VAR_11)) {
   FUNC_2(VAR_17, sizeof(VAR_17));
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_0,
    "WPA: RC4 failed");
   return -1;
  }
  FUNC_2(VAR_17, sizeof(VAR_17));

 } else if (VAR_13 == VAR_7) {
  if (VAR_15 % 8) {
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_2,
    "WPA: Unsupported AES-WRAP len %lu",
    (unsigned long) VAR_15);
   return -1;
  }
  if (VAR_15 > sizeof(VAR_14->gtk)) {
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_2,
    "WPA: AES-WRAP key data "
    "too long (keydatalen=%lu maxkeylen=%lu)",
    (unsigned long) VAR_11,
    (unsigned long) VAR_15);
   return -1;
  }
  if (FUNC_1(VAR_8->ptk.kek, VAR_8->ptk.kek_len, VAR_15 / 8,
          VAR_10, VAR_14->gtk)) {
   FUNC_5(VAR_8->ctx->msg_ctx, VAR_2,
    "WPA: AES unwrap failed - could not decrypt "
    "GTK");
   return -1;
  }
 } else {
  FUNC_5(VAR_8->ctx->msg_ctx, VAR_2,
   "WPA: Unsupported key_info type %d", VAR_13);
  return -1;
 }
 VAR_14->tx = FUNC_7(
  VAR_8, !!(VAR_12 & VAR_5));
 return 0;
}
