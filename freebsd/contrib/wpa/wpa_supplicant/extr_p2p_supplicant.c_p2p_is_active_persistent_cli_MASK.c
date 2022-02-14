
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* current_ssid; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*) ;

__attribute__((used)) static unsigned int FUNC_1(struct wpa_supplicant *VAR_1)
{
 return FUNC_0(VAR_1) &&
  VAR_1->current_ssid->mode == VAR_0;
}
