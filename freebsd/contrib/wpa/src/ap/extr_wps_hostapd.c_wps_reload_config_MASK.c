
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* interfaces; } ;
struct TYPE_2__ {scalar_t__ (* reload_config ) (struct hostapd_iface*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct hostapd_iface *VAR_4 = VAR_2;

 FUNC_1(VAR_0, "WPS: Reload configuration data");
 if (VAR_4->interfaces == ((void*)0) ||
     VAR_4->interfaces->reload_config(VAR_4) < 0) {
  FUNC_1(VAR_1, "WPS: Failed to reload the updated "
      "configuration");
 }
}
