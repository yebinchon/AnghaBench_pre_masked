
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_fast_data {int session_ticket_used; int provisioning; TYPE_1__* current_pac; scalar_t__ provisioning_allowed; } ;
struct TYPE_2__ {int pac_key; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int const*,int *) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const u8 *VAR_2, size_t VAR_3,
          const u8 *VAR_4,
          const u8 *VAR_5,
          u8 *VAR_6)
{
 struct eap_fast_data *VAR_7 = VAR_1;

 FUNC_2(VAR_0, "EAP-FAST: SessionTicket callback");

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ||
     VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, "EAP-FAST: SessionTicket failed - fall "
      "back to full TLS handshake");
  VAR_7->session_ticket_used = 0;
  if (VAR_7->provisioning_allowed) {
   FUNC_2(VAR_0, "EAP-FAST: Try to provision a "
       "new PAC-Key");
   VAR_7->provisioning = 1;
   VAR_7->current_pac = ((void*)0);
  }
  return 0;
 }

 FUNC_1(VAR_0, "EAP-FAST: SessionTicket", VAR_2, VAR_3);

 if (VAR_7->current_pac == ((void*)0)) {
  FUNC_2(VAR_0, "EAP-FAST: No PAC-Key available for "
      "using SessionTicket");
  VAR_7->session_ticket_used = 0;
  return 0;
 }

 FUNC_0(VAR_7->current_pac->pac_key,
          VAR_5, VAR_4,
          VAR_6);

 VAR_7->session_ticket_used = 1;

 return 1;
}
