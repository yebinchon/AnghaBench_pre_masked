
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ otp_len; int * otp; } ;


 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

void FUNC_3(struct eap_sm *VAR_0)
{
 struct eap_peer_config *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(VAR_1->otp, 0, VAR_1->otp_len);
 FUNC_1(VAR_1->otp);
 VAR_1->otp = ((void*)0);
 VAR_1->otp_len = 0;
}
