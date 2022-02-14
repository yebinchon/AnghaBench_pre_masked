
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct sta_info {int addr; struct eapol_state_machine* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {int eap_type_authsrv; TYPE_1__* eap_if; struct radius_msg* last_recv_radius; } ;
struct eap_hdr {int code; int length; int identifier; } ;
typedef int buf ;
struct TYPE_2__ {struct wpabuf* aaaEapReqData; void* aaaEapReq; void* aaaEapNoReq; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 int FUNC_3 (char*,int,char*,int ,int) ;
 int FUNC_4 (char*,char*,int) ;
 struct wpabuf* FUNC_5 (struct radius_msg*) ;
 int FUNC_6 (struct wpabuf*) ;
 struct eap_hdr* FUNC_7 (struct wpabuf*) ;
 int* FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_10(struct hostapd_data *VAR_4,
       struct sta_info *VAR_5)
{
 struct wpabuf *VAR_6;
 const struct eap_hdr *VAR_7;
 int VAR_8 = -1;
 char VAR_9[64];
 struct radius_msg *VAR_10;
 struct eapol_state_machine *VAR_11 = VAR_5->eapol_sm;

 if (VAR_11 == ((void*)0) || VAR_11->last_recv_radius == ((void*)0)) {
  if (VAR_11)
   VAR_11->eap_if->aaaEapNoReq = VAR_3;
  return;
 }

 VAR_10 = VAR_11->last_recv_radius;

 VAR_6 = FUNC_5(VAR_10);
 if (VAR_6 == ((void*)0)) {



  FUNC_2(VAR_4, VAR_5->addr, VAR_2,
          VAR_1, "could not extract "
          "EAP-Message from RADIUS message");
  VAR_11->eap_if->aaaEapNoReq = VAR_3;
  return;
 }

 if (FUNC_9(VAR_6) < sizeof(*VAR_7)) {
  FUNC_2(VAR_4, VAR_5->addr, VAR_2,
          VAR_1, "too short EAP packet "
          "received from authentication server");
  FUNC_6(VAR_6);
  VAR_11->eap_if->aaaEapNoReq = VAR_3;
  return;
 }

 if (FUNC_9(VAR_6) > sizeof(*VAR_7))
  VAR_8 = (FUNC_8(VAR_6))[sizeof(*VAR_7)];

 VAR_7 = FUNC_7(VAR_6);
 switch (VAR_7->code) {
 case 130:
  if (VAR_8 >= 0)
   VAR_11->eap_type_authsrv = VAR_8;
  FUNC_3(VAR_9, sizeof(VAR_9), "EAP-Request-%s (%d)",
       FUNC_1(0, VAR_8), VAR_8);
  break;
 case 129:
  FUNC_3(VAR_9, sizeof(VAR_9), "EAP Response-%s (%d)",
       FUNC_1(0, VAR_8), VAR_8);
  break;
 case 128:
  FUNC_4(VAR_9, "EAP Success", sizeof(VAR_9));
  break;
 case 131:
  FUNC_4(VAR_9, "EAP Failure", sizeof(VAR_9));
  break;
 default:
  FUNC_4(VAR_9, "unknown EAP code", sizeof(VAR_9));
  break;
 }
 VAR_9[sizeof(VAR_9) - 1] = '\0';
 FUNC_2(VAR_4, VAR_5->addr, VAR_2,
         VAR_0, "decapsulated EAP packet (code=%d "
         "id=%d len=%d) from RADIUS server: %s",
         VAR_7->code, VAR_7->identifier, FUNC_0(VAR_7->length),
         VAR_9);
 VAR_11->eap_if->aaaEapReq = VAR_3;

 FUNC_6(VAR_11->eap_if->aaaEapReqData);
 VAR_11->eap_if->aaaEapReqData = VAR_6;
}
