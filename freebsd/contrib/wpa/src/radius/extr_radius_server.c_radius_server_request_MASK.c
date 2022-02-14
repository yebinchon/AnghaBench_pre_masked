
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sockaddr {int dummy; } ;
struct radius_session {char const* sess_id; int last_from_port; scalar_t__ last_identifier; int last_fromlen; int * last_authenticator; struct radius_msg* last_reply; TYPE_3__* eap_if; int last_from; int last_from_addr; struct radius_msg* last_msg; int eap; scalar_t__ macacl; } ;
struct TYPE_4__ {int packets_dropped; int access_challenges; int access_rejects; int access_accepts; int dup_access_requests; } ;
struct radius_server_data {TYPE_1__ counters; int auth_sock; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {scalar_t__ identifier; int code; struct sockaddr* authenticator; } ;
struct TYPE_5__ {int packets_dropped; int access_challenges; int access_rejects; int access_accepts; int dup_access_requests; } ;
struct radius_client {TYPE_2__ counters; } ;
typedef int statebuf ;
typedef int socklen_t ;
struct TYPE_6__ {scalar_t__ eapSuccess; scalar_t__ eapFail; struct wpabuf* eapReqData; scalar_t__ eapReq; int eapResp; struct wpabuf* eapRespData; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct radius_session*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,struct radius_server_data*,struct radius_session*) ;
 int FUNC_7 (int ,int ,int ,struct radius_server_data*,struct radius_session*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,struct sockaddr*,int) ;
 int FUNC_10 (int *,struct sockaddr*,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct radius_msg*) ;
 int FUNC_13 (struct radius_msg*) ;
 int FUNC_14 (struct radius_msg*,int ,int *,int) ;
 struct wpabuf* FUNC_15 (struct radius_msg*) ;
 struct wpabuf* FUNC_16 (struct radius_msg*) ;
 struct radius_hdr* FUNC_17 (struct radius_msg*) ;
 struct radius_msg* FUNC_18 (struct radius_server_data*,struct radius_client*,struct radius_session*,struct radius_msg*) ;
 struct radius_session* FUNC_19 (struct radius_server_data*,struct radius_client*,struct radius_msg*,char const*) ;
 struct radius_session* FUNC_20 (struct radius_client*,unsigned int) ;
 int FUNC_21 (struct radius_session*,struct radius_msg*) ;
 struct radius_msg* FUNC_22 (struct radius_server_data*,struct radius_client*,struct radius_session*,struct radius_msg*) ;
 int FUNC_23 (struct radius_server_data*,struct radius_client*,struct radius_msg*,struct sockaddr*,int,char const*,int) ;
 int VAR_6 ;
 int FUNC_24 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_25 (struct radius_session*,char*) ;
 int FUNC_26 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_27 (int ,char*,int ) ;
 int FUNC_28 (struct wpabuf*) ;
 int FUNC_29 (struct wpabuf*) ;
 int FUNC_30 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_31(struct radius_server_data *VAR_8,
     struct radius_msg *VAR_9,
     struct sockaddr *VAR_10, socklen_t VAR_11,
     struct radius_client *VAR_12,
     const char *VAR_13, int VAR_14,
     struct radius_session *VAR_15)
{
 struct wpabuf *VAR_16 = ((void*)0);
 int VAR_17, VAR_18 = 0;
 u8 VAR_19[4];
 unsigned int VAR_20;
 struct radius_session *VAR_21;
 struct radius_msg *VAR_22;
 int VAR_23 = 0;

 if (VAR_15)
  VAR_21 = VAR_15;
 else {
  VAR_17 = FUNC_14(VAR_9, VAR_2, VAR_19,
       sizeof(VAR_19));
  VAR_18 = VAR_17 >= 0;
  if (VAR_17 == sizeof(VAR_19)) {
   VAR_20 = FUNC_2(VAR_19);
   VAR_21 = FUNC_20(VAR_12, VAR_20);
  } else {
   VAR_21 = ((void*)0);
  }
 }

 if (VAR_21) {
  FUNC_0("Request for session 0x%x", VAR_21->sess_id);
 } else if (VAR_18) {
  FUNC_0("State attribute included but no session found");
  FUNC_23(VAR_8, VAR_12, VAR_9, VAR_10, VAR_11,
         VAR_13, VAR_14);
  return -1;
 } else {
  VAR_21 = FUNC_19(VAR_8, VAR_12, VAR_9,
           VAR_13);
  if (VAR_21 == ((void*)0)) {
   FUNC_0("Could not create a new session");
   FUNC_23(VAR_8, VAR_12, VAR_9, VAR_10, VAR_11,
          VAR_13, VAR_14);
   return -1;
  }
 }

 if (VAR_21->last_from_port == VAR_14 &&
     VAR_21->last_identifier == FUNC_17(VAR_9)->identifier &&
     FUNC_9(VAR_21->last_authenticator,
        FUNC_17(VAR_9)->authenticator, 16) == 0) {
  FUNC_0("Duplicate message from %s", VAR_13);
  VAR_8->counters.dup_access_requests++;
  VAR_12->counters.dup_access_requests++;

  if (VAR_21->last_reply) {
   struct wpabuf *VAR_24;
   VAR_24 = FUNC_15(VAR_21->last_reply);
   VAR_17 = FUNC_24(VAR_8->auth_sock, FUNC_29(VAR_24),
         FUNC_30(VAR_24), 0,
         (struct sockaddr *) VAR_10, VAR_11);
   if (VAR_17 < 0) {
    FUNC_27(VAR_0, "sendto[RADIUS SRV]: %s",
        FUNC_26(VAR_5));
   }
   return 0;
  }

  FUNC_0("No previous reply available for duplicate "
        "message");
  return -1;
 }

 VAR_16 = FUNC_16(VAR_9);
 if (VAR_16 == ((void*)0) && VAR_21->macacl) {
  VAR_22 = FUNC_22(VAR_8, VAR_12, VAR_21, VAR_9);
  if (VAR_22 == ((void*)0))
   return -1;
  goto send_reply;
 }
 if (VAR_16 == ((void*)0)) {
  FUNC_0("No EAP-Message in RADIUS packet from %s",
        VAR_13);
  VAR_8->counters.packets_dropped++;
  VAR_12->counters.packets_dropped++;
  return -1;
 }

 FUNC_1("Received EAP data", FUNC_29(VAR_16), FUNC_30(VAR_16));
 FUNC_28(VAR_21->eap_if->eapRespData);
 VAR_21->eap_if->eapRespData = VAR_16;
 VAR_21->eap_if->eapResp = VAR_4;
 FUNC_4(VAR_21->eap);

 if ((VAR_21->eap_if->eapReq || VAR_21->eap_if->eapSuccess ||
      VAR_21->eap_if->eapFail) && VAR_21->eap_if->eapReqData) {
  FUNC_1("EAP data from the state machine",
       FUNC_29(VAR_21->eap_if->eapReqData),
       FUNC_30(VAR_21->eap_if->eapReqData));
 } else if (VAR_21->eap_if->eapFail) {
  FUNC_0("No EAP data from the state machine, but eapFail "
        "set");
 } else if (FUNC_5(VAR_21->eap)) {
  FUNC_13(VAR_21->last_msg);
  VAR_21->last_msg = VAR_9;
  VAR_21->last_from_port = VAR_14;
  FUNC_8(VAR_21->last_from_addr);
  VAR_21->last_from_addr = FUNC_11(VAR_13);
  VAR_21->last_fromlen = VAR_11;
  FUNC_10(&VAR_21->last_from, VAR_10, VAR_11);
  return -2;
 } else {
  FUNC_0("No EAP data from the state machine - ignore this"
        " Access-Request silently (assuming it was a "
        "duplicate)");
  VAR_8->counters.packets_dropped++;
  VAR_12->counters.packets_dropped++;
  return -1;
 }

 if (VAR_21->eap_if->eapSuccess || VAR_21->eap_if->eapFail)
  VAR_23 = 1;
 if (VAR_21->eap_if->eapFail) {
  FUNC_25(VAR_21, "EAP authentication failed");
  FUNC_3(VAR_21, "FAIL");
 } else if (VAR_21->eap_if->eapSuccess) {
  FUNC_25(VAR_21, "EAP authentication succeeded");
 }

 if (VAR_21->eap_if->eapSuccess)
  FUNC_21(VAR_21, VAR_9);

 VAR_22 = FUNC_18(VAR_8, VAR_12, VAR_21, VAR_9);

send_reply:
 if (VAR_22) {
  struct wpabuf *VAR_25;
  struct radius_hdr *VAR_26;

  FUNC_0("Reply to %s:%d", VAR_13, VAR_14);
  if (VAR_7 <= VAR_1) {
   FUNC_12(VAR_22);
  }

  switch (FUNC_17(VAR_22)->code) {
  case 130:
   FUNC_25(VAR_21, "Sending Access-Accept");
   VAR_8->counters.access_accepts++;
   VAR_12->counters.access_accepts++;
   break;
  case 128:
   FUNC_25(VAR_21, "Sending Access-Reject");
   VAR_8->counters.access_rejects++;
   VAR_12->counters.access_rejects++;
   break;
  case 129:
   VAR_8->counters.access_challenges++;
   VAR_12->counters.access_challenges++;
   break;
  }
  VAR_25 = FUNC_15(VAR_22);
  VAR_17 = FUNC_24(VAR_8->auth_sock, FUNC_29(VAR_25),
        FUNC_30(VAR_25), 0,
        (struct sockaddr *) VAR_10, VAR_11);
  if (VAR_17 < 0) {
   FUNC_27(VAR_0, "sendto[RADIUS SRV]: %s",
       FUNC_26(VAR_5));
  }
  FUNC_13(VAR_21->last_reply);
  VAR_21->last_reply = VAR_22;
  VAR_21->last_from_port = VAR_14;
  VAR_26 = FUNC_17(VAR_9);
  VAR_21->last_identifier = VAR_26->identifier;
  FUNC_10(VAR_21->last_authenticator, VAR_26->authenticator, 16);
 } else {
  VAR_8->counters.packets_dropped++;
  VAR_12->counters.packets_dropped++;
 }

 if (VAR_23) {
  FUNC_0("Removing completed session 0x%x after timeout",
        VAR_21->sess_id);
  FUNC_6(VAR_6,
         VAR_8, VAR_21);
  FUNC_7(VAR_3, 0,
           VAR_6,
           VAR_8, VAR_21);
 }

 return 0;
}
