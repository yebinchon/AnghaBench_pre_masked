
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_scan_params {int dummy; } ;
struct wpa_driver_ndis_data {int radio_enabled; int ctx; scalar_t__ native80211; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wpa_driver_ndis_data*,int ) ;
 int FUNC_1 (int,int ,int ,struct wpa_driver_ndis_data*,int ) ;
 int FUNC_2 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 scalar_t__ FUNC_3 (struct wpa_driver_ndis_data*) ;
 int FUNC_4 (struct wpa_driver_ndis_data*,struct wpa_driver_scan_params*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3,
    struct wpa_driver_scan_params *VAR_4)
{
 struct wpa_driver_ndis_data *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_5->native80211)
  return FUNC_4(VAR_5, VAR_4);

 if (!VAR_5->radio_enabled) {
  FUNC_5(VAR_0, "NDIS: turning radio on before the first"
      " scan");
  if (FUNC_3(VAR_5) < 0) {
   FUNC_5(VAR_0, "NDIS: failed to enable radio");
  }
  VAR_5->radio_enabled = 1;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_1, "    ", 4);
 FUNC_0(VAR_2, VAR_5, VAR_5->ctx);
 FUNC_1(7, 0, VAR_2, VAR_5,
          VAR_5->ctx);
 return VAR_6;
}
