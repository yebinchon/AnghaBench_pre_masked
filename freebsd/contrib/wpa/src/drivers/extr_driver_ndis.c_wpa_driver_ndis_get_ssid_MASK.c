
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_ndis_data {scalar_t__ wired; } ;
typedef int buf ;
struct TYPE_2__ {int SsidLength; int Ssid; } ;
typedef TYPE_1__ NDIS_802_11_SSID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, u8 *VAR_3)
{
 struct wpa_driver_ndis_data *VAR_4 = VAR_2;
 NDIS_802_11_SSID VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, (char *) &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 4) {
  FUNC_2(VAR_0, "NDIS: Failed to get SSID");
  if (VAR_4->wired) {
   FUNC_2(VAR_0, "NDIS: Allow get_ssid failure "
       "with a wired interface");
   return 0;
  }
  return -1;
 }
 FUNC_1(VAR_3, VAR_5.Ssid, VAR_5.SsidLength);
 return VAR_5.SsidLength;
}
