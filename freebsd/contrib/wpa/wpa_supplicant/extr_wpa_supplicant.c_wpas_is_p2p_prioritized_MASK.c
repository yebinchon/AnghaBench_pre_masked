
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {scalar_t__ conc_pref; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct wpa_supplicant *VAR_2)
{
 if (VAR_2->global->conc_pref == VAR_0)
  return 1;
 if (VAR_2->global->conc_pref == VAR_1)
  return 0;
 return -1;
}
