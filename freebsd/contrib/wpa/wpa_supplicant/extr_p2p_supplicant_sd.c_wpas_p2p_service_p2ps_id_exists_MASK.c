
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int p2p; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

int FUNC_1(struct wpa_supplicant *VAR_0, u32 VAR_1)
{
 if (VAR_1 == 0)
  return 1;

 if (FUNC_0(VAR_0->global->p2p, VAR_1))
  return 1;

 return 0;
}
