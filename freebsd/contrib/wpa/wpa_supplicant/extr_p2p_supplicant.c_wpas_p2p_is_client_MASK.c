
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* current_ssid; } ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ p2p_group; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->current_ssid == ((void*)0)) {





  return 1;
 }
 return VAR_1->current_ssid->p2p_group &&
  VAR_1->current_ssid->mode == VAR_0;
}
