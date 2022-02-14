
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_data {TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int ap_settings_len; scalar_t__ ap_settings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int const*,int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wps_data*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_9(struct wps_data *VAR_1, struct wpabuf *VAR_2)
{
 const u8 *VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_1->wps->ap_settings) {
  FUNC_1(VAR_0, "WPS:  * AP Settings (pre-configured)");
  FUNC_3(VAR_2, VAR_1->wps->ap_settings,
    VAR_1->wps->ap_settings_len);
  return 0;
 }

 FUNC_1(VAR_0, "WPS:  * AP Settings based on current configuration");
 VAR_3 = FUNC_2(VAR_2, 0);
 VAR_5 = FUNC_8(VAR_1, VAR_2) ||
  FUNC_6(VAR_1, VAR_2) ||
  FUNC_4(VAR_1, VAR_2) ||
  FUNC_5(VAR_1, VAR_2) ||
  FUNC_7(VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_2, 0);

 FUNC_0(VAR_0, "WPS: Plaintext AP Settings",
   VAR_3, VAR_4 - VAR_3);

 return VAR_5;
}
