
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct eap_gpsk_csuite {struct eap_gpsk_csuite const* specifier; int vendor; } const eap_gpsk_csuite ;
typedef struct eap_gpsk_csuite const u8 ;
typedef int u16 ;
struct eap_sm {int server_id_len; struct eap_gpsk_csuite const* server_id; TYPE_1__* user; } ;
struct eap_gpsk_data {scalar_t__ state; int id_peer_len; int csuite_count; size_t id_len; void* specifier; int vendor; int sk_len; int sk; struct eap_gpsk_csuite const* session_id; int * id_peer; struct eap_gpsk_csuite const* rand_server; struct eap_gpsk_csuite const* rand_peer; int pk_len; int pk; int emsk; int msk; struct eap_gpsk_csuite const* csuite_list; } ;
struct TYPE_2__ {int password_len; int * password; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct eap_gpsk_csuite const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,void*,struct eap_gpsk_csuite const*,int,struct eap_gpsk_csuite const*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,void*,struct eap_gpsk_csuite const*,struct eap_gpsk_csuite const*,int *,int,struct eap_gpsk_csuite const*,int,int ,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,void*,struct eap_gpsk_csuite const*,struct eap_gpsk_csuite const*,int *,int,struct eap_gpsk_csuite const*,int,int ,struct eap_gpsk_csuite const*,size_t*) ;
 size_t FUNC_5 (int ,void*) ;
 int FUNC_6 (struct eap_gpsk_data*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct eap_gpsk_csuite const*,struct eap_gpsk_csuite const*,int) ;
 scalar_t__ FUNC_9 (struct eap_gpsk_csuite const*,struct eap_gpsk_csuite const*,size_t) ;
 int FUNC_10 (struct eap_gpsk_csuite const*,struct eap_gpsk_csuite const*,int) ;
 int * FUNC_11 (struct eap_gpsk_csuite const*,int) ;
 int FUNC_12 (int ,char*,struct eap_gpsk_csuite const*,size_t) ;
 int FUNC_13 (int ,char*,int *,int) ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void FUNC_15(struct eap_sm *VAR_8,
        struct eap_gpsk_data *VAR_9,
        const u8 *VAR_10, size_t VAR_11)
{
 const u8 *VAR_12, *VAR_13;
 u16 VAR_14;
 const struct eap_gpsk_csuite *VAR_15;
 size_t VAR_16, VAR_17;
 u8 VAR_18[VAR_0];

 if (VAR_9->state != VAR_4)
  return;

 FUNC_14(VAR_6, "EAP-GPSK: Received Response/GPSK-2");

 VAR_12 = VAR_10;
 VAR_13 = VAR_10 + VAR_11;

 if (VAR_13 - VAR_12 < 2) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "ID_Peer length");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_14 = FUNC_0(VAR_12);
 VAR_12 += 2;
 if (VAR_13 - VAR_12 < VAR_14) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "ID_Peer");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 FUNC_7(VAR_9->id_peer);
 VAR_9->id_peer = FUNC_11(VAR_12, VAR_14);
 if (VAR_9->id_peer == ((void*)0)) {
  FUNC_14(VAR_6, "EAP-GPSK: Not enough memory to store "
      "%d-octet ID_Peer", VAR_14);
  return;
 }
 VAR_9->id_peer_len = VAR_14;
 FUNC_13(VAR_6, "EAP-GPSK: ID_Peer",
     VAR_9->id_peer, VAR_9->id_peer_len);
 VAR_12 += VAR_14;

 if (VAR_13 - VAR_12 < 2) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "ID_Server length");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_14 = FUNC_0(VAR_12);
 VAR_12 += 2;
 if (VAR_13 - VAR_12 < VAR_14) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "ID_Server");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 if (VAR_14 != VAR_8->server_id_len ||
     FUNC_8(VAR_12, VAR_8->server_id, VAR_14) != 0) {
  FUNC_14(VAR_6, "EAP-GPSK: ID_Server in GPSK-1 and "
      "GPSK-2 did not match");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_12 += VAR_14;

 if (VAR_13 - VAR_12 < VAR_1) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "RAND_Peer");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 FUNC_10(VAR_9->rand_peer, VAR_12, VAR_1);
 FUNC_12(VAR_6, "EAP-GPSK: RAND_Peer",
      VAR_9->rand_peer, VAR_1);
 VAR_12 += VAR_1;

 if (VAR_13 - VAR_12 < VAR_1) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "RAND_Server");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 if (FUNC_8(VAR_9->rand_server, VAR_12, VAR_1) != 0) {
  FUNC_14(VAR_6, "EAP-GPSK: RAND_Server in GPSK-1 and "
      "GPSK-2 did not match");
  FUNC_12(VAR_6, "EAP-GPSK: RAND_Server in GPSK-1",
       VAR_9->rand_server, VAR_1);
  FUNC_12(VAR_6, "EAP-GPSK: RAND_Server in GPSK-2",
       VAR_12, VAR_1);
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_12 += VAR_1;

 if (VAR_13 - VAR_12 < 2) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "CSuite_List length");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_14 = FUNC_0(VAR_12);
 VAR_12 += 2;
 if (VAR_13 - VAR_12 < VAR_14) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "CSuite_List");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 if (VAR_14 != VAR_9->csuite_count * sizeof(struct eap_gpsk_csuite) ||
     FUNC_8(VAR_12, VAR_9->csuite_list, VAR_14) != 0) {
  FUNC_14(VAR_6, "EAP-GPSK: CSuite_List in GPSK-1 and "
      "GPSK-2 did not match");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_12 += VAR_14;

 if (VAR_13 - VAR_12 < (int) sizeof(*VAR_15)) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "CSuite_Sel");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_15 = (const struct eap_gpsk_csuite *) VAR_12;
 for (VAR_16 = 0; VAR_16 < VAR_9->csuite_count; VAR_16++) {
  if (FUNC_8(VAR_15, &VAR_9->csuite_list[VAR_16], sizeof(*VAR_15))
      == 0)
   break;
 }
 if (VAR_16 == VAR_9->csuite_count) {
  FUNC_14(VAR_6, "EAP-GPSK: Peer selected unsupported "
      "ciphersuite %d:%d",
      FUNC_1(VAR_15->vendor),
      FUNC_0(VAR_15->specifier));
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_9->vendor = FUNC_1(VAR_15->vendor);
 VAR_9->specifier = FUNC_0(VAR_15->specifier);
 FUNC_14(VAR_6, "EAP-GPSK: CSuite_Sel %d:%d",
     VAR_9->vendor, VAR_9->specifier);
 VAR_12 += sizeof(*VAR_15);

 if (VAR_13 - VAR_12 < 2) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "PD_Payload_1 length");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_14 = FUNC_0(VAR_12);
 VAR_12 += 2;
 if (VAR_13 - VAR_12 < VAR_14) {
  FUNC_14(VAR_6, "EAP-GPSK: Too short message for "
      "PD_Payload_1");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 FUNC_12(VAR_6, "EAP-GPSK: PD_Payload_1", VAR_12, VAR_14);
 VAR_12 += VAR_14;

 if (VAR_8->user == ((void*)0) || VAR_8->user->password == ((void*)0)) {
  FUNC_14(VAR_7, "EAP-GPSK: No PSK/password configured "
      "for the user");
  FUNC_6(VAR_9, VAR_3);
  return;
 }

 if (FUNC_3(VAR_8->user->password, VAR_8->user->password_len,
     VAR_9->vendor, VAR_9->specifier,
     VAR_9->rand_peer, VAR_9->rand_server,
     VAR_9->id_peer, VAR_9->id_peer_len,
     VAR_8->server_id, VAR_8->server_id_len,
     VAR_9->msk, VAR_9->emsk,
     VAR_9->sk, &VAR_9->sk_len,
     VAR_9->pk, &VAR_9->pk_len) < 0) {
  FUNC_14(VAR_6, "EAP-GPSK: Failed to derive keys");
  FUNC_6(VAR_9, VAR_3);
  return;
 }

 if (FUNC_4(VAR_8->user->password,
           VAR_8->user->password_len,
           VAR_9->vendor, VAR_9->specifier,
           VAR_9->rand_peer, VAR_9->rand_server,
           VAR_9->id_peer, VAR_9->id_peer_len,
           VAR_8->server_id, VAR_8->server_id_len,
           VAR_2,
           VAR_9->session_id, &VAR_9->id_len) < 0) {
  FUNC_14(VAR_6, "EAP-GPSK: Failed to derive Session-Id");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 FUNC_12(VAR_6, "EAP-GPSK: Derived Session-Id",
      VAR_9->session_id, VAR_9->id_len);

 VAR_17 = FUNC_5(VAR_9->vendor, VAR_9->specifier);
 if (VAR_13 - VAR_12 < (int) VAR_17) {
  FUNC_14(VAR_6, "EAP-GPSK: Message too short for MIC "
      "(left=%lu miclen=%lu)",
      (unsigned long) (VAR_13 - VAR_12),
      (unsigned long) VAR_17);
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 if (FUNC_2(VAR_9->sk, VAR_9->sk_len, VAR_9->vendor,
     VAR_9->specifier, VAR_10, VAR_12 - VAR_10, VAR_18)
     < 0) {
  FUNC_14(VAR_6, "EAP-GPSK: Failed to compute MIC");
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 if (FUNC_9(VAR_18, VAR_12, VAR_17) != 0) {
  FUNC_14(VAR_7, "EAP-GPSK: Incorrect MIC in GPSK-2");
  FUNC_12(VAR_6, "EAP-GPSK: Received MIC", VAR_12, VAR_17);
  FUNC_12(VAR_6, "EAP-GPSK: Computed MIC", VAR_18, VAR_17);
  FUNC_6(VAR_9, VAR_3);
  return;
 }
 VAR_12 += VAR_17;

 if (VAR_12 != VAR_13) {
  FUNC_14(VAR_6, "EAP-GPSK: Ignored %lu bytes of extra "
      "data in the end of GPSK-2",
      (unsigned long) (VAR_13 - VAR_12));
 }

 FUNC_6(VAR_9, VAR_5);
}
