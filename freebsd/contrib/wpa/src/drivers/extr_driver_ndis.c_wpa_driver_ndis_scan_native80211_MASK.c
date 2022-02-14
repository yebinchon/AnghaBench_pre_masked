
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_driver_scan_params {int dummy; } ;
struct wpa_driver_ndis_data {int ctx; } ;
typedef int req ;
struct TYPE_3__ {int dot11ScanType; struct TYPE_3__* dot11BSSID; int dot11BSSType; } ;
typedef TYPE_1__ DOT11_SCAN_REQUEST_V2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct wpa_driver_ndis_data*,int ) ;
 int FUNC_1 (int,int ,int ,struct wpa_driver_ndis_data*,int ) ;
 int FUNC_2 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(
 struct wpa_driver_ndis_data *VAR_5,
 struct wpa_driver_scan_params *VAR_6)
{
 DOT11_SCAN_REQUEST_V2 VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.dot11BSSType = VAR_2;
 FUNC_3(VAR_7.dot11BSSID, 0xff, VAR_0);
 VAR_7.dot11ScanType = VAR_3;
 VAR_8 = FUNC_2(VAR_5, VAR_1, (char *) &VAR_7,
      sizeof(VAR_7));
 FUNC_0(VAR_4, VAR_5, VAR_5->ctx);
 FUNC_1(7, 0, VAR_4, VAR_5,
          VAR_5->ctx);
 return VAR_8;
}
