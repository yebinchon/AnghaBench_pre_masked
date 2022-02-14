
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_passphrase; scalar_t__ pending_req_pin; scalar_t__ pending_req_otp; scalar_t__ pending_req_new_password; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;


 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*,int *,int ) ;
 int FUNC_4 (struct eap_sm*) ;
 int FUNC_5 (struct eap_sm*) ;
 int FUNC_6 (struct eap_sm*) ;

void FUNC_7(struct eap_sm *VAR_0)
{
 struct eap_peer_config *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  return;





 if (VAR_1->pending_req_identity)
  FUNC_1(VAR_0);
 if (VAR_1->pending_req_password)
  FUNC_5(VAR_0);
 if (VAR_1->pending_req_new_password)
  FUNC_2(VAR_0);
 if (VAR_1->pending_req_otp)
  FUNC_3(VAR_0, ((void*)0), 0);
 if (VAR_1->pending_req_pin)
  FUNC_6(VAR_0);
 if (VAR_1->pending_req_passphrase)
  FUNC_4(VAR_0);
}
