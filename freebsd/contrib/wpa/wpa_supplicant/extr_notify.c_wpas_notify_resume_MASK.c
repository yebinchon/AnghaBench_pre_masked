
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; struct wpa_supplicant* next; } ;
struct TYPE_2__ {scalar_t__ sec; } ;
struct wpa_global {struct wpa_supplicant* ifaces; TYPE_1__ suspend_time; } ;
struct os_time {int sec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct os_time*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int) ;

void FUNC_4(struct wpa_global *VAR_2)
{
 struct os_time VAR_3;
 int VAR_4;
 struct wpa_supplicant *VAR_5;

 if (VAR_2->suspend_time.sec == 0)
  VAR_4 = -1;
 else {
  FUNC_0(&VAR_3);
  VAR_4 = VAR_3.sec - VAR_2->suspend_time.sec;
 }
 FUNC_2(VAR_0, "System resume notification (slept %d seconds)",
     VAR_4);

 for (VAR_5 = VAR_2->ifaces; VAR_5; VAR_5 = VAR_5->next) {
  FUNC_1(VAR_5);
  if (VAR_5->wpa_state == VAR_1)
   FUNC_3(VAR_5, 0, 100000);
 }
}
