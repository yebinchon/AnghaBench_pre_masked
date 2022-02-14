
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_ap_params {int * proberesp; int * head; int * tail; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct wpa_driver_ap_params *VAR_0)
{
 FUNC_0(VAR_0->tail);
 VAR_0->tail = ((void*)0);
 FUNC_0(VAR_0->head);
 VAR_0->head = ((void*)0);
 FUNC_0(VAR_0->proberesp);
 VAR_0->proberesp = ((void*)0);
}
