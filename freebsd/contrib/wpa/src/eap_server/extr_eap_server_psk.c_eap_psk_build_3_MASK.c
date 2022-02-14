
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int* server_id; } ;
struct eap_psk_hdr_3 {int* rand_s; int mac_s; int flags; } ;
struct eap_psk_data {int* rand_s; int* rand_p; void* state; int tek; int emsk; int msk; int kdk; int ak; } ;
typedef int nonce ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int*,int,int ,int,int*,int,int*) ;
 struct wpabuf* FUNC_2 (int ,int ,int,int ,int) ;
 scalar_t__ FUNC_3 (int ,int*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int*,size_t,int ) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (size_t) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,char*,int*,int) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*) ;
 void* FUNC_14 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct eap_sm *VAR_11,
           struct eap_psk_data *VAR_12, u8 VAR_13)
{
 struct wpabuf *VAR_14;
 struct eap_psk_hdr_3 *VAR_15;
 u8 *VAR_16, *VAR_17, VAR_18[16];
 size_t VAR_19;

 FUNC_11(VAR_9, "EAP-PSK: PSK-3 (sending)");

 VAR_14 = FUNC_2(VAR_7, VAR_6,
       sizeof(*VAR_15) + 4 + 16 + 1, VAR_0, VAR_13);
 if (VAR_14 == ((void*)0)) {
  FUNC_11(VAR_10, "EAP-PSK: Failed to allocate memory "
      "request");
  VAR_12->state = VAR_8;
  return ((void*)0);
 }

 VAR_15 = FUNC_14(VAR_14, sizeof(*VAR_15));
 VAR_15->flags = FUNC_0(2);
 FUNC_7(VAR_15->rand_s, VAR_12->rand_s, VAR_3);


 VAR_19 = VAR_11->server_id_len + VAR_3;
 VAR_16 = FUNC_6(VAR_19);
 if (VAR_16 == ((void*)0))
  goto fail;

 FUNC_7(VAR_16, VAR_11->server_id, VAR_11->server_id_len);
 FUNC_7(VAR_16 + VAR_11->server_id_len, VAR_12->rand_p, VAR_3);
 if (FUNC_4(VAR_12->ak, VAR_16, VAR_19, VAR_15->mac_s)) {
  FUNC_5(VAR_16);
  goto fail;
 }
 FUNC_5(VAR_16);

 if (FUNC_3(VAR_12->kdk, VAR_12->rand_p, VAR_12->tek, VAR_12->msk,
    VAR_12->emsk))
  goto fail;
 FUNC_10(VAR_9, "EAP-PSK: TEK", VAR_12->tek, VAR_5);
 FUNC_10(VAR_9, "EAP-PSK: MSK", VAR_12->msk, VAR_2);
 FUNC_10(VAR_9, "EAP-PSK: EMSK", VAR_12->emsk, VAR_1);

 FUNC_8(VAR_18, 0, sizeof(VAR_18));
 VAR_17 = FUNC_14(VAR_14, 4 + 16 + 1);
 FUNC_7(VAR_17, VAR_18 + 12, 4);
 FUNC_8(VAR_17 + 4, 0, 16);
 VAR_17[4 + 16] = VAR_4 << 6;
 FUNC_9(VAR_9, "EAP-PSK: PCHANNEL (plaintext)",
      VAR_17, 4 + 16 + 1);
 if (FUNC_1(VAR_12->tek, VAR_18, sizeof(VAR_18),
    FUNC_13(VAR_14), 22,
    VAR_17 + 4 + 16, 1, VAR_17 + 4))
  goto fail;
 FUNC_9(VAR_9, "EAP-PSK: PCHANNEL (encrypted)",
      VAR_17, 4 + 16 + 1);

 return VAR_14;

fail:
 FUNC_12(VAR_14);
 VAR_12->state = VAR_8;
 return ((void*)0);
}
