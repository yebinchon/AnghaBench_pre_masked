
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ** vendor_ext; } ;
struct wps_context {TYPE_2__ dev; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_3__ {int ** wps_vendor_ext; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_1,
          struct wps_context *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2->dev.vendor_ext[VAR_3]);
  VAR_2->dev.vendor_ext[VAR_3] = ((void*)0);

  if (VAR_1->conf->wps_vendor_ext[VAR_3] == ((void*)0))
   continue;

  VAR_2->dev.vendor_ext[VAR_3] =
   FUNC_0(VAR_1->conf->wps_vendor_ext[VAR_3]);
  if (VAR_2->dev.vendor_ext[VAR_3] == ((void*)0)) {
   while (--VAR_3 >= 0)
    FUNC_1(VAR_2->dev.vendor_ext[VAR_3]);
   return -1;
  }
 }

 return 0;
}
