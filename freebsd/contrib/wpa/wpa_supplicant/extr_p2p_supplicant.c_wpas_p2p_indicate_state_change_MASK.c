
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;

void FUNC_1(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return;

 FUNC_0(VAR_1,
         VAR_0);
}
