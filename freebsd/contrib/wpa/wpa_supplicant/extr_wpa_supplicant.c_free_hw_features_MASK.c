
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_modes; TYPE_2__* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct TYPE_4__ {struct TYPE_4__* rates; struct TYPE_4__* channels; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct wpa_supplicant *VAR_0)
{
 int VAR_1;
 if (VAR_0->hw.modes == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_modes; VAR_1++) {
  FUNC_0(VAR_0->hw.modes[VAR_1].channels);
  FUNC_0(VAR_0->hw.modes[VAR_1].rates);
 }

 FUNC_0(VAR_0->hw.modes);
 VAR_0->hw.modes = ((void*)0);
}
