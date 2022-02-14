
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int FUNC_0 (int *,void*) ;

int FUNC_1(struct wpa_supplicant *VAR_0, u64 VAR_1)
{
 if (VAR_0->global->p2p_disabled || VAR_0->global->p2p == ((void*)0))
  return -1;
 return FUNC_0(VAR_0->global->p2p,
         (void *) (uintptr_t) VAR_1);
}
