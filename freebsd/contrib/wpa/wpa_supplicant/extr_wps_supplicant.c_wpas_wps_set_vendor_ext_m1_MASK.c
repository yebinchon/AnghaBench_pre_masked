
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vendor_ext_m1; } ;
struct wps_context {TYPE_2__ dev; } ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct TYPE_3__ {scalar_t__ wps_vendor_ext_m1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
           struct wps_context *VAR_2)
{
 FUNC_2(VAR_2->dev.vendor_ext_m1);
 VAR_2->dev.vendor_ext_m1 = ((void*)0);

 if (VAR_1->conf->wps_vendor_ext_m1) {
  VAR_2->dev.vendor_ext_m1 =
   FUNC_1(VAR_1->conf->wps_vendor_ext_m1);
  if (!VAR_2->dev.vendor_ext_m1) {
   FUNC_0(VAR_0, "WPS: Cannot "
       "allocate memory for vendor_ext_m1");
  }
 }
}
