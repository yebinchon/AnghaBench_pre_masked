
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_flags; int last_auth_timeout_sec; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ ap_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,int,int) ;
 int VAR_2 ;

void FUNC_3(struct wpa_supplicant *VAR_3,
         int VAR_4, int VAR_5)
{
 if (VAR_3->conf->ap_scan == 0 &&
     (VAR_3->drv_flags & VAR_1))
  return;

 FUNC_2(VAR_3, VAR_0, "Setting authentication timeout: %d sec "
  "%d usec", VAR_4, VAR_5);
 FUNC_0(VAR_2, VAR_3, ((void*)0));
 VAR_3->last_auth_timeout_sec = VAR_4;
 FUNC_1(VAR_4, VAR_5, VAR_2, VAR_3, ((void*)0));
}
