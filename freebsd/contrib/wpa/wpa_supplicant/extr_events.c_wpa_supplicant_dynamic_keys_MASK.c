
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ key_mgmt; TYPE_1__* current_ssid; } ;
struct TYPE_2__ {int eapol_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_5)
{
 if (VAR_5->key_mgmt == VAR_3 ||
     VAR_5->key_mgmt == VAR_4)
  return 0;
 return 1;
}
