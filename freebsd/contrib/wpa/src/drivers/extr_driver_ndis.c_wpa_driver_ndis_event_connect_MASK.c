
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_ndis_data {int ctx; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_1 (struct wpa_driver_ndis_data*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *) ;

void FUNC_4(struct wpa_driver_ndis_data *VAR_2)
{
 FUNC_2(VAR_1, "NDIS: Media Connect Event");
 if (FUNC_1(VAR_2, VAR_2->bssid) == 0) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2->ctx, VAR_0, ((void*)0));
 }
}
