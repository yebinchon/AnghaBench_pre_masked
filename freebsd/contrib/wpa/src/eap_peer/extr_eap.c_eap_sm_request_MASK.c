
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct eap_peer_config {char* pending_req_otp; size_t pending_req_otp_len; int pending_req_sim; int pending_req_passphrase; int pending_req_pin; int pending_req_new_password; int pending_req_password; int pending_req_identity; } ;
typedef enum wpa_ctrl_req_type { ____Placeholder_wpa_ctrl_req_type } wpa_ctrl_req_type ;
struct TYPE_2__ {int (* eap_param_needed ) (int ,int,char const*) ;} ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int ,int,char const*) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_0, enum wpa_ctrl_req_type VAR_1,
      const char *VAR_2, size_t VAR_3)
{

 struct eap_peer_config *VAR_4;
 const char *VAR_5 = ((void*)0);
 char *VAR_6;

 if (VAR_0 == ((void*)0))
  return;
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 == ((void*)0))
  return;

 switch (VAR_1) {
 case 135:
  VAR_4->pending_req_identity++;
  break;
 case 131:
  VAR_4->pending_req_password++;
  break;
 case 134:
  VAR_4->pending_req_new_password++;
  break;
 case 130:
  VAR_4->pending_req_pin++;
  break;
 case 133:
  if (VAR_2) {
   VAR_6 = FUNC_2(VAR_3 + 3);
   if (VAR_6 == ((void*)0))
    return;
   VAR_6[0] = '[';
   FUNC_3(VAR_6 + 1, VAR_2, VAR_3);
   VAR_6[VAR_3 + 1] = ']';
   VAR_6[VAR_3 + 2] = '\0';
   VAR_5 = VAR_6;
   FUNC_1(VAR_4->pending_req_otp);
   VAR_4->pending_req_otp = VAR_6;
   VAR_4->pending_req_otp_len = VAR_3 + 3;
  } else {
   if (VAR_4->pending_req_otp == ((void*)0))
    return;
   VAR_5 = VAR_4->pending_req_otp;
  }
  break;
 case 132:
  VAR_4->pending_req_passphrase++;
  break;
 case 128:
  VAR_4->pending_req_sim++;
  VAR_5 = VAR_2;
  break;
 case 129:
  break;
 default:
  return;
 }

 if (VAR_0->eapol_cb->eap_param_needed)
  VAR_0->eapol_cb->eap_param_needed(VAR_0->eapol_ctx, VAR_1, VAR_5);

}
