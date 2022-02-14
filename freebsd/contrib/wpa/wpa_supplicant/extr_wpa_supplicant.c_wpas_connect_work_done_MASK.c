
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_radio_work* connect_work; } ;
struct wpa_radio_work {struct wpa_connect_work* ctx; } ;
struct wpa_connect_work {int dummy; } ;


 int FUNC_0 (struct wpa_radio_work*) ;
 int FUNC_1 (struct wpa_connect_work*) ;

void FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct wpa_connect_work *VAR_1;
 struct wpa_radio_work *VAR_2 = VAR_0->connect_work;

 if (!VAR_2)
  return;

 VAR_0->connect_work = ((void*)0);
 VAR_1 = VAR_2->ctx;
 VAR_2->ctx = ((void*)0);
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
}
