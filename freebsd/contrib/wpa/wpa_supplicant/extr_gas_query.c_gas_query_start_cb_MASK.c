
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_radio_work {scalar_t__ started; struct gas_query_pending* ctx; } ;
struct gas_query_pending {struct gas_query* gas; } ;
struct gas_query {struct wpa_radio_work* work; struct wpa_supplicant* wpa_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gas_query*,struct gas_query_pending*,int ) ;
 int FUNC_1 (struct gas_query_pending*,int) ;
 int FUNC_2 (struct gas_query*,struct gas_query_pending*) ;
 int FUNC_3 (struct wpa_radio_work*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_6(struct wpa_radio_work *VAR_2, int VAR_3)
{
 struct gas_query_pending *VAR_4 = VAR_2->ctx;
 struct gas_query *VAR_5 = VAR_4->gas;
 struct wpa_supplicant *VAR_6 = VAR_5->wpa_s;

 if (VAR_3) {
  if (VAR_2->started) {
   VAR_5->work = ((void*)0);
   FUNC_0(VAR_5, VAR_4, VAR_0);
   return;
  }

  FUNC_1(VAR_4, 1);
  return;
 }

 if (FUNC_5(VAR_6) < 0) {
  FUNC_4(VAR_6, VAR_1,
   "Failed to assign random MAC address for GAS");
  FUNC_1(VAR_4, 1);
  FUNC_3(VAR_2);
  return;
 }

 VAR_5->work = VAR_2;
 FUNC_2(VAR_5, VAR_4);
}
