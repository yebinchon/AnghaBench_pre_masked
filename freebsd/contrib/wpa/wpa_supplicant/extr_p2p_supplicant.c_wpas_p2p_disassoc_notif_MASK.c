
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int FUNC_0 (int *,int const*,int ,int const*,size_t) ;

void FUNC_1(struct wpa_supplicant *VAR_0, const u8 *VAR_1,
        u16 VAR_2, const u8 *VAR_3, size_t VAR_4,
        int VAR_5)
{
 if (VAR_0->global->p2p_disabled || VAR_0->global->p2p == ((void*)0))
  return;

 if (!VAR_5)
  FUNC_0(VAR_0->global->p2p, VAR_1, VAR_2, VAR_3,
       VAR_4);
}
