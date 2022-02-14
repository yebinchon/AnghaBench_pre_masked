
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_state_machine {void* initializing; void* initialize; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eapol_state_machine*) ;
 int FUNC_1 (int ,int *,struct eapol_state_machine*) ;
 int FUNC_2 (int,int ,int ,int *,struct eapol_state_machine*) ;

__attribute__((used)) static void FUNC_3(struct eapol_state_machine *VAR_3)
{
 VAR_3->initializing = VAR_1;


 VAR_3->initialize = VAR_1;
 FUNC_0(VAR_3);
 VAR_3->initialize = VAR_0;
 FUNC_0(VAR_3);
 VAR_3->initializing = VAR_0;


 FUNC_1(VAR_2, ((void*)0), VAR_3);
 FUNC_2(1, 0, VAR_2, ((void*)0), VAR_3);
}
