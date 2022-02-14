
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int dev_pw_id; struct wpabuf* dh_pubkey_e; struct wpabuf* dh_pubkey_r; scalar_t__ registrar; int * dh_privkey; int * dh_ctx; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int ap_nfc_dev_pw_id; int * ap_nfc_dh_pubkey; int * ap_nfc_dh_privkey; scalar_t__ ap; int * dh_pubkey; int * dh_ctx; int * dh_privkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int **,struct wpabuf**) ;
 int * FUNC_2 (int *,struct wpabuf*) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,int ) ;
 int FUNC_11 (struct wpabuf*,struct wpabuf*) ;
 struct wpabuf* FUNC_12 (struct wpabuf*,int) ;

int FUNC_13(struct wps_data *VAR_4, struct wpabuf *VAR_5)
{
 struct wpabuf *VAR_6 = ((void*)0);

 FUNC_5(VAR_3, "WPS:  * Public Key");
 FUNC_6(VAR_4->dh_privkey);
 VAR_4->dh_privkey = ((void*)0);
 if (VAR_4->dev_pw_id != VAR_1 && VAR_4->wps->dh_privkey &&
     VAR_4->wps->dh_ctx) {
  FUNC_5(VAR_3, "WPS: Using pre-configured DH keys");
  if (VAR_4->wps->dh_pubkey == ((void*)0)) {
   FUNC_5(VAR_3,
       "WPS: wps->wps->dh_pubkey == NULL");
   return -1;
  }
  VAR_4->dh_privkey = FUNC_7(VAR_4->wps->dh_privkey);
  VAR_4->dh_ctx = VAR_4->wps->dh_ctx;
  VAR_4->wps->dh_ctx = ((void*)0);
  VAR_6 = FUNC_7(VAR_4->wps->dh_pubkey);
 } else {
  FUNC_5(VAR_3, "WPS: Generate new DH keys");
  FUNC_0(VAR_4->dh_ctx);
  VAR_4->dh_ctx = FUNC_1(&VAR_4->dh_privkey, &VAR_6);
  VAR_6 = FUNC_12(VAR_6, 192);
 }
 if (VAR_4->dh_ctx == ((void*)0) || VAR_4->dh_privkey == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_5(VAR_3, "WPS: Failed to initialize "
      "Diffie-Hellman handshake");
  FUNC_8(VAR_6);
  return -1;
 }
 FUNC_4(VAR_3, "WPS: DH Private Key", VAR_4->dh_privkey);
 FUNC_3(VAR_3, "WPS: DH own Public Key", VAR_6);

 FUNC_10(VAR_5, VAR_0);
 FUNC_10(VAR_5, FUNC_9(VAR_6));
 FUNC_11(VAR_5, VAR_6);

 if (VAR_4->registrar) {
  FUNC_8(VAR_4->dh_pubkey_r);
  VAR_4->dh_pubkey_r = VAR_6;
 } else {
  FUNC_8(VAR_4->dh_pubkey_e);
  VAR_4->dh_pubkey_e = VAR_6;
 }

 return 0;
}
