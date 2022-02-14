
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {struct eapol_state_machine* eapol_sm; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {int eapolEap; TYPE_1__* eap_if; int dot1xAuthEapolRespFramesRx; int addr; int eap_type_supp; } ;
struct eap_hdr {int length; int identifier; int code; } ;
struct TYPE_2__ {int eapRespData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hostapd_data*,int ,int ,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct eap_hdr*,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hostapd_data *VAR_4,
    struct sta_info *VAR_5, struct eap_hdr *VAR_6,
    size_t VAR_7)
{
 u8 VAR_8, *VAR_9;
 struct eapol_state_machine *VAR_10 = VAR_5->eapol_sm;
 if (VAR_10 == ((void*)0))
  return;

 VAR_9 = (u8 *) (VAR_6 + 1);

 if (VAR_7 < sizeof(*VAR_6) + 1) {
  FUNC_3(VAR_2, "handle_eap_response: too short response data");
  return;
 }

 VAR_10->eap_type_supp = VAR_8 = VAR_9[0];

 FUNC_2(VAR_4, VAR_10->addr, VAR_1,
         VAR_0, "received EAP packet (code=%d "
         "id=%d len=%d) from STA: EAP Response-%s (%d)",
         VAR_6->code, VAR_6->identifier, FUNC_0(VAR_6->length),
         FUNC_1(0, VAR_8), VAR_8);

 VAR_10->dot1xAuthEapolRespFramesRx++;

 FUNC_5(VAR_10->eap_if->eapRespData);
 VAR_10->eap_if->eapRespData = FUNC_4(VAR_6, VAR_7);
 VAR_10->eapolEap = VAR_3;
}
