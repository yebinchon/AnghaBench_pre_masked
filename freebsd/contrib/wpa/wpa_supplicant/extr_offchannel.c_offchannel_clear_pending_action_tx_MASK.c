
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * pending_action_tx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 FUNC_0(VAR_0,
     "Off-channel: Clear pending Action frame TX (pending_action_tx=%p",
     VAR_1->pending_action_tx);
 FUNC_1(VAR_1->pending_action_tx);
 VAR_1->pending_action_tx = ((void*)0);
}
