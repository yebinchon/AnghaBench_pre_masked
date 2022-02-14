
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int * eapSessionId; int * eapRespData; int * lastRespData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct eap_sm *VAR_2)
{
 FUNC_3(VAR_2->lastRespData);
 VAR_2->lastRespData = ((void*)0);
 FUNC_3(VAR_2->eapRespData);
 VAR_2->eapRespData = ((void*)0);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2->eapSessionId);
 VAR_2->eapSessionId = ((void*)0);




 FUNC_1(VAR_2, VAR_0, VAR_1);
}
