
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_gpsk_data {int id_peer_len; int id_server_len; int id_len; int specifier; int vendor; int sk_len; int sk; int const* session_id; int const* id_server; int const* id_peer; int const* rand_server; int const* rand_peer; int psk_len; int psk; int pk_len; int pk; int emsk; int msk; } ;
struct eap_gpsk_csuite {int specifier; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *,int,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,int const*,int const*,size_t,int const*,size_t,int ,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int const*,int const*,int const*,size_t,int const*,size_t,int ,int const*,int*) ;
 size_t FUNC_5 (int ,int ) ;
 int FUNC_6 (struct eap_gpsk_data*,int ) ;
 struct wpabuf* FUNC_7 (int ,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_8 (int const*,int) ;
 int FUNC_9 (int ,char*,int const*,int) ;
 int FUNC_10 (int ,char*,int const*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct wpabuf*) ;
 void* FUNC_13 (struct wpabuf*,size_t) ;
 int FUNC_14 (struct wpabuf*,size_t) ;
 int FUNC_15 (struct wpabuf*,int const*,size_t) ;
 int FUNC_16 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_17(struct eap_gpsk_data *VAR_7,
         u8 VAR_8,
         const u8 *VAR_9,
         size_t VAR_10)
{
 struct wpabuf *VAR_11;
 size_t VAR_12, VAR_13;
 u8 *VAR_14, *VAR_15;
 struct eap_gpsk_csuite *VAR_16;

 FUNC_11(VAR_6, "EAP-GPSK: Sending Response/GPSK-2");

 VAR_13 = FUNC_5(VAR_7->vendor, VAR_7->specifier);
 VAR_12 = 1 + 2 + VAR_7->id_peer_len + 2 + VAR_7->id_server_len +
  2 * VAR_2 + 2 + VAR_10 +
  sizeof(struct eap_gpsk_csuite) + 2 + VAR_13;

 VAR_11 = FUNC_7(VAR_4, VAR_3, VAR_12,
        VAR_0, VAR_8);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 FUNC_16(VAR_11, VAR_1);
 VAR_15 = FUNC_13(VAR_11, 0);

 FUNC_10(VAR_6, "EAP-GPSK: ID_Peer",
     VAR_7->id_peer, VAR_7->id_peer_len);
 FUNC_14(VAR_11, VAR_7->id_peer_len);
 FUNC_15(VAR_11, VAR_7->id_peer, VAR_7->id_peer_len);

 FUNC_14(VAR_11, VAR_7->id_server_len);
 FUNC_15(VAR_11, VAR_7->id_server, VAR_7->id_server_len);

 if (FUNC_8(VAR_7->rand_peer, VAR_2)) {
  FUNC_11(VAR_6, "EAP-GPSK: Failed to get random data "
      "for RAND_Peer");
  FUNC_6(VAR_7, VAR_5);
  FUNC_12(VAR_11);
  return ((void*)0);
 }
 FUNC_9(VAR_6, "EAP-GPSK: RAND_Peer",
      VAR_7->rand_peer, VAR_2);
 FUNC_15(VAR_11, VAR_7->rand_peer, VAR_2);
 FUNC_15(VAR_11, VAR_7->rand_server, VAR_2);

 FUNC_14(VAR_11, VAR_10);
 FUNC_15(VAR_11, VAR_9, VAR_10);

 VAR_16 = FUNC_13(VAR_11, sizeof(*VAR_16));
 FUNC_1(VAR_16->vendor, VAR_7->vendor);
 FUNC_0(VAR_16->specifier, VAR_7->specifier);

 if (FUNC_3(VAR_7->psk, VAR_7->psk_len,
     VAR_7->vendor, VAR_7->specifier,
     VAR_7->rand_peer, VAR_7->rand_server,
     VAR_7->id_peer, VAR_7->id_peer_len,
     VAR_7->id_server, VAR_7->id_server_len,
     VAR_7->msk, VAR_7->emsk,
     VAR_7->sk, &VAR_7->sk_len,
     VAR_7->pk, &VAR_7->pk_len) < 0) {
  FUNC_11(VAR_6, "EAP-GPSK: Failed to derive keys");
  FUNC_6(VAR_7, VAR_5);
  FUNC_12(VAR_11);
  return ((void*)0);
 }

 if (FUNC_4(VAR_7->psk, VAR_7->psk_len,
           VAR_7->vendor, VAR_7->specifier,
           VAR_7->rand_peer, VAR_7->rand_server,
           VAR_7->id_peer, VAR_7->id_peer_len,
           VAR_7->id_server, VAR_7->id_server_len,
           VAR_3,
           VAR_7->session_id, &VAR_7->id_len) < 0) {
  FUNC_11(VAR_6, "EAP-GPSK: Failed to derive Session-Id");
  FUNC_6(VAR_7, VAR_5);
  FUNC_12(VAR_11);
  return ((void*)0);
 }
 FUNC_9(VAR_6, "EAP-GPSK: Derived Session-Id",
      VAR_7->session_id, VAR_7->id_len);


 FUNC_14(VAR_11, 0);

 VAR_14 = FUNC_13(VAR_11, VAR_13);
 if (FUNC_2(VAR_7->sk, VAR_7->sk_len, VAR_7->vendor,
     VAR_7->specifier, VAR_15, VAR_14 - VAR_15, VAR_14) <
     0) {
  FUNC_6(VAR_7, VAR_5);
  FUNC_12(VAR_11);
  return ((void*)0);
 }

 return VAR_11;
}
