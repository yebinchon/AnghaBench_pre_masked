
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {TYPE_1__* ctx; int group_cipher; } ;
struct wpa_gtk_data {int gtk_len; int keyidx; int gtk; int tx; int alg; int key_rsc_len; } ;
struct wpa_eapol_ie_parse {int const* gtk; int gtk_len; int oci_len; int oci; } ;
struct wpa_channel_info {int seg1_idx; int chanwidth; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct wpa_sm*,struct wpa_eapol_ie_parse*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,struct wpa_channel_info*,int ,int ) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,char*,int const*,size_t) ;
 int FUNC_6 (int ,int ,char*,...) ;
 scalar_t__ FUNC_7 (struct wpa_sm*,struct wpa_channel_info*) ;
 scalar_t__ FUNC_8 (struct wpa_sm*) ;
 scalar_t__ FUNC_9 (struct wpa_sm*,int ,int,int,int *,int *) ;
 int FUNC_10 (struct wpa_sm*,int) ;
 scalar_t__ FUNC_11 (int const*,size_t,struct wpa_eapol_ie_parse*) ;

__attribute__((used)) static int FUNC_12(struct wpa_sm *VAR_5,
          const u8 *VAR_6,
          size_t VAR_7,
          u16 VAR_8,
          struct wpa_gtk_data *VAR_9)
{
 int VAR_10;
 struct wpa_eapol_ie_parse VAR_11;

 FUNC_5(VAR_0, "RSN: msg 1/2 key data",
   VAR_6, VAR_7);
 if (FUNC_11(VAR_6, VAR_7, &VAR_11) < 0)
  return -1;
 if (VAR_11.gtk && !(VAR_8 & VAR_3)) {
  FUNC_6(VAR_5->ctx->msg_ctx, VAR_2,
   "WPA: GTK IE in unencrypted key data");
  return -1;
 }
 if (VAR_11.gtk == ((void*)0)) {
  FUNC_6(VAR_5->ctx->msg_ctx, VAR_1,
   "WPA: No GTK IE in Group Key msg 1/2");
  return -1;
 }
 VAR_10 = VAR_9->gtk_len = VAR_11.gtk_len - 2;
 if (FUNC_9(VAR_5, VAR_5->group_cipher,
           VAR_9->gtk_len, VAR_10,
           &VAR_9->key_rsc_len, &VAR_9->alg))
  return -1;

 FUNC_5(VAR_0, "RSN: received GTK in group key handshake",
   VAR_11.gtk, VAR_11.gtk_len);
 VAR_9->keyidx = VAR_11.gtk[0] & 0x3;
 VAR_9->tx = FUNC_10(VAR_5,
            !!(VAR_11.gtk[0] & FUNC_0(2)));
 if (VAR_11.gtk_len - 2 > sizeof(VAR_9->gtk)) {
  FUNC_6(VAR_5->ctx->msg_ctx, VAR_1,
   "RSN: Too long GTK in GTK IE (len=%lu)",
   (unsigned long) VAR_11.gtk_len - 2);
  return -1;
 }
 FUNC_4(VAR_9->gtk, VAR_11.gtk + 2, VAR_11.gtk_len - 2);

 if (FUNC_2(VAR_5, &VAR_11) < 0)
  FUNC_6(VAR_5->ctx->msg_ctx, VAR_1,
   "RSN: Failed to configure IGTK");

 return 0;
}
