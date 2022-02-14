
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_supplicant {int wpa; int current_bss; TYPE_1__* current_ssid; } ;
struct TYPE_2__ {int key_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int ,int ) ;
 scalar_t__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__ const*,scalar_t__ const) ;
 scalar_t__ FUNC_4 (int ,scalar_t__ const*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_2)
{
 const u8 *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

 if (!VAR_2->current_bss || !VAR_2->current_ssid)
  return -1;

 if (!FUNC_2(VAR_2->current_ssid->key_mgmt))
  return 0;

 VAR_3 = FUNC_1(VAR_2->current_bss,
     VAR_1);
 VAR_4 = FUNC_0(VAR_2->current_bss, VAR_0);

 if (FUNC_4(VAR_2->wpa, VAR_3,
     VAR_3 ? 2 + VAR_3[1] : 0) ||
     FUNC_3(VAR_2->wpa, VAR_4,
     VAR_4 ? 2 + VAR_4[1] : 0))
  return -1;

 return 0;
}
