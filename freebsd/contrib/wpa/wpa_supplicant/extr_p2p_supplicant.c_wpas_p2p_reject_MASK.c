
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; scalar_t__ p2p_long_listen; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int FUNC_0 (int *,int const*) ;

int FUNC_1(struct wpa_supplicant *VAR_0, const u8 *VAR_1)
{
 VAR_0->p2p_long_listen = 0;

 if (VAR_0->global->p2p_disabled || VAR_0->global->p2p == ((void*)0))
  return -1;

 return FUNC_0(VAR_0->global->p2p, VAR_1);
}
