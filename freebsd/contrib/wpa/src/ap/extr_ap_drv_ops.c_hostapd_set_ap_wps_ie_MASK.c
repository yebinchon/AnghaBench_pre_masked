
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_ap_wps_ie ) (int ,struct wpabuf*,struct wpabuf*,struct wpabuf*) ;} ;


 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf**,struct wpabuf**,struct wpabuf**) ;
 int FUNC_1 (struct hostapd_data*,struct wpabuf*,struct wpabuf*,struct wpabuf*) ;
 int FUNC_2 (int ,struct wpabuf*,struct wpabuf*,struct wpabuf*) ;

int FUNC_3(struct hostapd_data *VAR_0)
{
 struct wpabuf *VAR_1, *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_ap_wps_ie == ((void*)0))
  return 0;

 if (FUNC_0(VAR_0, &VAR_1, &VAR_2, &VAR_3) <
     0)
  return -1;

 VAR_4 = VAR_0->driver->set_ap_wps_ie(VAR_0->drv_priv, VAR_1, VAR_2,
       VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
