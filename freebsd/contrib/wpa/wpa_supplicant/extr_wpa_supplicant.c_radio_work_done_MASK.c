
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_radio_work {unsigned int started; int type; int time; struct wpa_supplicant* wpa_s; } ;
struct os_reltime {int usec; int sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct os_reltime*) ;
 int FUNC_1 (struct os_reltime*,int *,struct os_reltime*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_radio_work*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,int ,struct wpa_radio_work*,char*,int ,int ) ;

void FUNC_5(struct wpa_radio_work *VAR_1)
{
 struct wpa_supplicant *VAR_2 = VAR_1->wpa_s;
 struct os_reltime VAR_3, VAR_4;
 unsigned int VAR_5 = VAR_1->started;

 FUNC_0(&VAR_3);
 FUNC_1(&VAR_3, &VAR_1->time, &VAR_4);
 FUNC_4(VAR_2, VAR_0, "Radio work '%s'@%p %s in %ld.%06ld seconds",
  VAR_1->type, VAR_1, VAR_5 ? "done" : "canceled",
  VAR_4.sec, VAR_4.usec);
 FUNC_3(VAR_1);
 if (VAR_5)
  FUNC_2(VAR_2);
}
