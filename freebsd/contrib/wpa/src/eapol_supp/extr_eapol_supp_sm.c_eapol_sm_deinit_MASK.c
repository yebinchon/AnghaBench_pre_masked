
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {struct eapol_sm* ctx; int eapReqData; struct eapol_sm* last_rx_key; int eap_proxy; int eap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,struct eapol_sm*) ;
 int FUNC_3 (struct eapol_sm*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct eapol_sm *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_2(VAR_1, ((void*)0), VAR_2);
 FUNC_2(VAR_0, ((void*)0), VAR_2);
 FUNC_0(VAR_2->eap);



 FUNC_3(VAR_2->last_rx_key);
 FUNC_4(VAR_2->eapReqData);
 FUNC_3(VAR_2->ctx);
 FUNC_3(VAR_2);
}
