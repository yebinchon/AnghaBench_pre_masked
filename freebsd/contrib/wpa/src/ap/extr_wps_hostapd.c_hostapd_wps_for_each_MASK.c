
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_for_each_data {int (* func ) (struct hostapd_data*,void*) ;struct hostapd_data* calling_hapd; void* ctx; } ;
struct hostapd_iface {TYPE_1__* interfaces; } ;
struct hostapd_data {struct hostapd_iface* iface; } ;
struct TYPE_2__ {int (* for_each_interface ) (TYPE_1__*,int (*) (struct hostapd_iface*,struct wps_for_each_data*),struct wps_for_each_data*) ;} ;


 int FUNC_0 (TYPE_1__*,int (*) (struct hostapd_iface*,struct wps_for_each_data*),struct wps_for_each_data*) ;
 int FUNC_1 (struct hostapd_iface*,struct wps_for_each_data*) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_0,
    int (*VAR_1)(struct hostapd_data *VAR_2, void *VAR_3),
    void *VAR_4)
{
 struct hostapd_iface *VAR_5 = VAR_0->iface;
 struct wps_for_each_data VAR_6;
 VAR_6.func = VAR_1;
 VAR_6.ctx = VAR_4;
 VAR_6.calling_hapd = VAR_0;
 if (VAR_5->interfaces == ((void*)0) ||
     VAR_5->interfaces->for_each_interface == ((void*)0))
  return FUNC_1(VAR_5, &VAR_6);
 return VAR_5->interfaces->for_each_interface(VAR_5->interfaces,
           FUNC_1, &VAR_6);
}
