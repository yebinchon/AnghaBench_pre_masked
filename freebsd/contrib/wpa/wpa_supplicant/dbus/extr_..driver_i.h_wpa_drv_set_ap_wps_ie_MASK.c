
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_ap_wps_ie ) (int ,struct wpabuf const*,struct wpabuf const*,struct wpabuf const*) ;} ;


 int FUNC_0 (int ,struct wpabuf const*,struct wpabuf const*,struct wpabuf const*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
     const struct wpabuf *VAR_1,
     const struct wpabuf *VAR_2,
     const struct wpabuf *VAR_3)
{
 if (!VAR_0->driver->set_ap_wps_ie)
  return -1;
 return VAR_0->driver->set_ap_wps_ie(VAR_0->drv_priv, VAR_1,
         VAR_2, VAR_3);
}
