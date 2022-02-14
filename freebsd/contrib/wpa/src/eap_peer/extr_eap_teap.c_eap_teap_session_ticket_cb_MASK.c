
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_teap_data {int session_ticket_used; int provisioning; TYPE_1__* current_pac; scalar_t__ provisioning_allowed; } ;
struct TYPE_2__ {int pac_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const u8 *VAR_3, size_t VAR_4,
          const u8 *VAR_5,
          const u8 *VAR_6,
          u8 *VAR_7)
{
 struct eap_teap_data *VAR_8 = VAR_2;

 FUNC_2(VAR_1, "EAP-TEAP: SessionTicket callback");

 if (!VAR_7) {
  FUNC_2(VAR_1,
      "EAP-TEAP: SessionTicket failed - fall back to full TLS handshake");
  VAR_8->session_ticket_used = 0;
  if (VAR_8->provisioning_allowed) {
   FUNC_2(VAR_1,
       "EAP-TEAP: Try to provision a new PAC-Key");
   VAR_8->provisioning = 1;
   VAR_8->current_pac = ((void*)0);
  }
  return 0;
 }

 FUNC_1(VAR_1, "EAP-TEAP: SessionTicket", VAR_3, VAR_4);

 if (!VAR_8->current_pac) {
  FUNC_2(VAR_1,
      "EAP-TEAP: No PAC-Key available for using SessionTicket");
  VAR_8->session_ticket_used = 0;
  return 0;
 }


 FUNC_0(VAR_7, VAR_8->current_pac->pac_key,
    VAR_0);

 VAR_8->session_ticket_used = 1;

 return 1;
}
