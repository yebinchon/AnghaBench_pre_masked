
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_auth_iface_iter_data {int (* cb ) (struct wpa_authenticator*,void*) ;void* cb_ctx; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_4__ {int (* for_each_interface ) (TYPE_2__*,int ,struct wpa_auth_iface_iter_data*) ;} ;
struct TYPE_3__ {TYPE_2__* interfaces; } ;


 int FUNC_0 (TYPE_2__*,int ,struct wpa_auth_iface_iter_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(
 void *VAR_1, int (*VAR_2)(struct wpa_authenticator *VAR_3, void *VAR_4),
 void *VAR_5)
{
 struct hostapd_data *VAR_6 = VAR_1;
 struct wpa_auth_iface_iter_data VAR_7;
 if (VAR_6->iface->interfaces == ((void*)0) ||
     VAR_6->iface->interfaces->for_each_interface == ((void*)0))
  return -1;
 VAR_7.cb = VAR_2;
 VAR_7.cb_ctx = VAR_5;
 return VAR_6->iface->interfaces->for_each_interface(
  VAR_6->iface->interfaces, VAR_0, &VAR_7);
}
