
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int * emsk; int * keywrapkey; int * authkey; int * nonce_r; int * mac_addr_e; int * nonce_e; struct wpabuf* dh_privkey; int * dh_ctx; struct wpabuf* dh_pubkey_r; struct wpabuf* dh_pubkey_e; scalar_t__ registrar; } ;
struct wpabuf {int dummy; } ;
typedef int keys ;
typedef int kdk ;
typedef int dhkey ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 struct wpabuf* FUNC_0 (int *,struct wpabuf*,struct wpabuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int const**,size_t*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int,int const**,size_t*,int *) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*,struct wpabuf*) ;
 int FUNC_7 (int ,char*,int *,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wpabuf*) ;
 int * FUNC_10 (struct wpabuf*) ;
 size_t FUNC_11 (struct wpabuf*) ;
 struct wpabuf* FUNC_12 (struct wpabuf*,int) ;
 int FUNC_13 (int *,int *,int ,char*,int *,int) ;

int FUNC_14(struct wps_data *VAR_7)
{
 struct wpabuf *VAR_8, *VAR_9;
 u8 VAR_10[VAR_2], VAR_11[VAR_2];
 const u8 *VAR_12[3];
 size_t VAR_13[3];
 u8 VAR_14[VAR_3 + VAR_5 + VAR_4];

 if (VAR_7->dh_privkey == ((void*)0)) {
  FUNC_8(VAR_1, "WPS: Own DH private key not available");
  return -1;
 }

 VAR_8 = VAR_7->registrar ? VAR_7->dh_pubkey_e : VAR_7->dh_pubkey_r;
 if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_1, "WPS: Peer DH public key not available");
  return -1;
 }

 FUNC_6(VAR_1, "WPS: DH Private Key", VAR_7->dh_privkey);
 FUNC_5(VAR_1, "WPS: DH peer Public Key", VAR_8);
 VAR_9 = FUNC_0(VAR_7->dh_ctx, VAR_8, VAR_7->dh_privkey);
 FUNC_1(VAR_7->dh_ctx);
 VAR_7->dh_ctx = ((void*)0);
 VAR_9 = FUNC_12(VAR_9, 192);
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_1, "WPS: Failed to derive DH shared key");
  return -1;
 }


 FUNC_9(VAR_7->dh_privkey);
 VAR_7->dh_privkey = ((void*)0);

 FUNC_6(VAR_1, "WPS: DH shared key", VAR_9);


 VAR_12[0] = FUNC_10(VAR_9);
 VAR_13[0] = FUNC_11(VAR_9);
 FUNC_4(1, VAR_12, VAR_13, VAR_10);
 FUNC_7(VAR_1, "WPS: DHKey", VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_9);


 VAR_12[0] = VAR_7->nonce_e;
 VAR_13[0] = VAR_6;
 VAR_12[1] = VAR_7->mac_addr_e;
 VAR_13[1] = VAR_0;
 VAR_12[2] = VAR_7->nonce_r;
 VAR_13[2] = VAR_6;
 FUNC_2(VAR_10, sizeof(VAR_10), 3, VAR_12, VAR_13, VAR_11);
 FUNC_7(VAR_1, "WPS: KDK", VAR_11, sizeof(VAR_11));

 FUNC_13(VAR_11, ((void*)0), 0, "Wi-Fi Easy and Secure Key Derivation",
  VAR_14, sizeof(VAR_14));
 FUNC_3(VAR_7->authkey, VAR_14, VAR_3);
 FUNC_3(VAR_7->keywrapkey, VAR_14 + VAR_3, VAR_5);
 FUNC_3(VAR_7->emsk, VAR_14 + VAR_3 + VAR_5,
    VAR_4);

 FUNC_7(VAR_1, "WPS: AuthKey",
   VAR_7->authkey, VAR_3);
 FUNC_7(VAR_1, "WPS: KeyWrapKey",
   VAR_7->keywrapkey, VAR_5);
 FUNC_7(VAR_1, "WPS: EMSK", VAR_7->emsk, VAR_4);

 return 0;
}
