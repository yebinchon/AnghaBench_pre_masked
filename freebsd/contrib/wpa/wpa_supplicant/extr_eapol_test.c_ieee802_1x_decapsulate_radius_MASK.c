
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct radius_msg {int dummy; } ;
struct ieee802_1x_hdr {int length; int type; int version; } ;
struct eapol_test_data {TYPE_1__* wpa_s; struct wpabuf* last_eap_radius; int ctrl_iface; struct radius_msg* last_recv_radius; } ;
struct eap_hdr {int code; int length; int identifier; } ;
typedef int buf ;
struct TYPE_2__ {int bssid; int eapol; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee802_1x_hdr*) ;
 struct ieee802_1x_hdr* FUNC_7 (int) ;
 int FUNC_8 (int *,struct eap_hdr*,int) ;
 int FUNC_9 (char*,int,char*,char*,int) ;
 int FUNC_10 (char*,char*,int) ;
 struct wpabuf* FUNC_11 (struct radius_msg*) ;
 int FUNC_12 (int ,char*,struct wpabuf*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct wpabuf*) ;
 struct eap_hdr* FUNC_15 (struct wpabuf*) ;
 int* FUNC_16 (struct wpabuf*) ;
 int FUNC_17 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_18(struct eapol_test_data *VAR_3)
{
 struct wpabuf *VAR_4;
 const struct eap_hdr *VAR_5;
 int VAR_6 = -1;
 char VAR_7[64];
 struct radius_msg *VAR_8;

 if (VAR_3->last_recv_radius == ((void*)0))
  return;

 VAR_8 = VAR_3->last_recv_radius;

 VAR_4 = FUNC_11(VAR_8);
 if (VAR_4 == ((void*)0)) {



  FUNC_13(VAR_2, "could not extract "
          "EAP-Message from RADIUS message");
  FUNC_14(VAR_3->last_eap_radius);
  VAR_3->last_eap_radius = ((void*)0);
  return;
 }

 if (FUNC_17(VAR_4) < sizeof(*VAR_5)) {
  FUNC_13(VAR_2, "too short EAP packet "
          "received from authentication server");
  FUNC_14(VAR_4);
  return;
 }

 if (FUNC_17(VAR_4) > sizeof(*VAR_5))
  VAR_6 = (FUNC_16(VAR_4))[sizeof(*VAR_5)];

 VAR_5 = FUNC_15(VAR_4);
 switch (VAR_5->code) {
 case 130:
  FUNC_9(VAR_7, sizeof(VAR_7), "EAP-Request-%s (%d)",
       VAR_6 >= 0 ? FUNC_1(VAR_6) : "??",
       VAR_6);
  break;
 case 129:
  FUNC_9(VAR_7, sizeof(VAR_7), "EAP Response-%s (%d)",
       VAR_6 >= 0 ? FUNC_1(VAR_6) : "??",
       VAR_6);
  break;
 case 128:
  FUNC_10(VAR_7, "EAP Success", sizeof(VAR_7));


  break;
 case 131:
  FUNC_10(VAR_7, "EAP Failure", sizeof(VAR_7));
  if (VAR_3->ctrl_iface)
   break;
  FUNC_3();
  break;
 default:
  FUNC_10(VAR_7, "unknown EAP code", sizeof(VAR_7));
  FUNC_12(VAR_2, "Decapsulated EAP packet", VAR_4);
  break;
 }
 FUNC_13(VAR_2, "decapsulated EAP packet (code=%d "
         "id=%d len=%d) from RADIUS server: %s",
        VAR_5->code, VAR_5->identifier, FUNC_5(VAR_5->length), VAR_7);



 FUNC_14(VAR_3->last_eap_radius);
 VAR_3->last_eap_radius = VAR_4;

 {
  struct ieee802_1x_hdr *VAR_9;
  VAR_9 = FUNC_7(sizeof(*VAR_9) + FUNC_17(VAR_4));
  FUNC_0(VAR_9 != ((void*)0));
  VAR_9->version = VAR_0;
  VAR_9->type = VAR_1;
  VAR_9->length = FUNC_4(FUNC_17(VAR_4));
  FUNC_8((u8 *) (VAR_9 + 1), FUNC_15(VAR_4),
     FUNC_17(VAR_4));
  FUNC_2(VAR_3->wpa_s->eapol, VAR_3->wpa_s->bssid,
      (u8 *) VAR_9,
      sizeof(*VAR_9) + FUNC_17(VAR_4));
  FUNC_6(VAR_9);
 }
}
