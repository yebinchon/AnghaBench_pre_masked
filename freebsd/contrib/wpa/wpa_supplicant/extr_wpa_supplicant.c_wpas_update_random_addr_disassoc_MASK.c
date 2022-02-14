
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; TYPE_1__* conf; } ;
struct TYPE_2__ {int preassoc_mac_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;

int FUNC_1(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->wpa_state >= VAR_0 ||
     !VAR_1->conf->preassoc_mac_addr)
  return 0;

 return FUNC_0(VAR_1, VAR_1->conf->preassoc_mac_addr);
}
