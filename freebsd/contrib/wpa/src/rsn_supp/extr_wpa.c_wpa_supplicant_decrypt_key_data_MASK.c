
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct TYPE_3__ {int kek_len; int * kek; } ;
struct wpa_sm {TYPE_2__* ctx; TYPE_1__ ptk; int key_mgmt; int ptk_set; } ;
struct wpa_eapol_key {int * key_iv; } ;
typedef int ek ;
struct TYPE_4__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t,size_t,int *,int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (int *,int,size_t) ;
 scalar_t__ FUNC_7 (int *,int,int,int *,size_t) ;
 int FUNC_8 (int ,char*,int *,size_t) ;
 int FUNC_9 (int ,char*,int *,size_t) ;
 int FUNC_10 (int ,int ,char*,...) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct wpa_sm *VAR_7,
        struct wpa_eapol_key *VAR_8,
        size_t VAR_9, u16 VAR_10,
        u8 *VAR_11, size_t *VAR_12)
{
 FUNC_8(VAR_0, "RSN: encrypted key data",
      VAR_11, *VAR_12);
 if (!VAR_7->ptk_set) {
  FUNC_10(VAR_7->ctx->msg_ctx, VAR_3,
   "WPA: PTK not available, cannot decrypt EAPOL-Key Key "
   "Data");
  return -1;
 }



 if (VAR_10 == VAR_5 && VAR_7->ptk.kek_len == 16) {





  u8 VAR_13[32];

  FUNC_11(VAR_0, "WPA: Decrypt Key Data using RC4");
  FUNC_5(VAR_13, VAR_8->key_iv, 16);
  FUNC_5(VAR_13 + 16, VAR_7->ptk.kek, VAR_7->ptk.kek_len);
  if (FUNC_7(VAR_13, 32, 256, VAR_11, *VAR_12)) {
   FUNC_3(VAR_13, sizeof(VAR_13));
   FUNC_10(VAR_7->ctx->msg_ctx, VAR_1,
    "WPA: RC4 failed");
   return -1;
  }
  FUNC_3(VAR_13, sizeof(VAR_13));

 } else if (VAR_10 == VAR_6 ||
     VAR_10 == VAR_4 ||
     FUNC_12(VAR_7->key_mgmt)) {
  u8 *VAR_14;

  FUNC_11(VAR_0,
      "WPA: Decrypt Key Data using AES-UNWRAP (KEK length %u)",
      (unsigned int) VAR_7->ptk.kek_len);
  if (*VAR_12 < 8 || *VAR_12 % 8) {
   FUNC_10(VAR_7->ctx->msg_ctx, VAR_3,
    "WPA: Unsupported AES-WRAP len %u",
    (unsigned int) *VAR_12);
   return -1;
  }
  *VAR_12 -= 8;
  VAR_14 = FUNC_4(*VAR_12);
  if (VAR_14 == ((void*)0)) {
   FUNC_10(VAR_7->ctx->msg_ctx, VAR_3,
    "WPA: No memory for AES-UNWRAP buffer");
   return -1;
  }



  if (FUNC_1(VAR_7->ptk.kek, VAR_7->ptk.kek_len, *VAR_12 / 8,
          VAR_11, VAR_14)) {





   FUNC_2(VAR_14, *VAR_12);
   FUNC_10(VAR_7->ctx->msg_ctx, VAR_3,
    "WPA: AES unwrap failed - "
    "could not decrypt EAPOL-Key key data");
   return -1;
  }



  FUNC_5(VAR_11, VAR_14, *VAR_12);
  FUNC_2(VAR_14, *VAR_12);
  FUNC_0(((u8 *) (VAR_8 + 1)) + VAR_9, *VAR_12);
 } else {
  FUNC_10(VAR_7->ctx->msg_ctx, VAR_3,
   "WPA: Unsupported key_info type %d", VAR_10);
  return -1;
 }
 FUNC_9(VAR_0, "WPA: decrypted EAPOL-Key key data",
   VAR_11, *VAR_12);
 return 0;
}
