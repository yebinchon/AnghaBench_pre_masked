
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int bssid; int eapol; } ;
struct ieee802_1x_hdr {void* length; int type; int version; } ;
struct eap_hdr {int identifier; void* length; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, void *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_4;
 u8 VAR_7[100], *VAR_8;
 struct ieee802_1x_hdr *VAR_9;
 struct eap_hdr *VAR_10;

 VAR_9 = (struct ieee802_1x_hdr *) VAR_7;
 VAR_9->version = VAR_0;
 VAR_9->type = VAR_3;
 VAR_9->length = FUNC_1(5);

 VAR_10 = (struct eap_hdr *) (VAR_9 + 1);
 VAR_10->code = VAR_1;
 if (FUNC_2((u8 *) &VAR_10->identifier, sizeof(VAR_10->identifier)) < 0)
  VAR_10->identifier = FUNC_3() & 0xff;
 VAR_10->length = FUNC_1(5);
 VAR_8 = (u8 *) (VAR_10 + 1);
 *VAR_8 = VAR_2;

 FUNC_4("Sending fake EAP-Request-Identity\n");
 FUNC_0(VAR_6->eapol, VAR_6->bssid, VAR_7,
     sizeof(*VAR_9) + 5);
}
