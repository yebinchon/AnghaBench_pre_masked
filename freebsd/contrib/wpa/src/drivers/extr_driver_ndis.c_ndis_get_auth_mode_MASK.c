
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_driver_ndis_data {int dummy; } ;
typedef int auth_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_ndis_data*,int ,char*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_driver_ndis_data *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1,
      (char *) &VAR_3, sizeof(VAR_3));
 if (VAR_4 != sizeof(VAR_3)) {
  FUNC_1(VAR_0, "NDIS: Failed to get "
      "OID_802_11_AUTHENTICATION_MODE");
  return -1;
 }
 return VAR_3;
}
