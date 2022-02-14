
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_ndis_data {struct wpa_driver_ndis_data* adapter_desc; struct wpa_driver_ndis_data* adapter_name; scalar_t__ wzc_disabled; int * ctx; scalar_t__ events; int event_avail; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_driver_ndis_data*,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wpa_driver_ndis_data*) ;
 int FUNC_4 (struct wpa_driver_ndis_data*) ;
 int FUNC_5 (struct wpa_driver_ndis_data*) ;
 int FUNC_6 (struct wpa_driver_ndis_data*) ;
 int FUNC_7 (struct wpa_driver_ndis_data*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct wpa_driver_ndis_data*) ;
 int VAR_2 ;
 int FUNC_9 (struct wpa_driver_ndis_data*,int) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(void *VAR_3)
{
 struct wpa_driver_ndis_data *VAR_4 = VAR_3;
 FUNC_0(VAR_2, VAR_4, VAR_4->ctx);
 FUNC_0(VAR_1, VAR_4, ((void*)0));
 FUNC_7(VAR_4);
 FUNC_6(VAR_4);
 if (FUNC_8(VAR_4) < 0) {
  FUNC_10(VAR_0, "NDIS: failed to disassociate and turn "
      "radio off");
 }

 FUNC_5(VAR_4);

 if (VAR_4->wzc_disabled)
  FUNC_9(VAR_4, 1);




 FUNC_4(VAR_4->adapter_desc);
 FUNC_4(VAR_4);
}
