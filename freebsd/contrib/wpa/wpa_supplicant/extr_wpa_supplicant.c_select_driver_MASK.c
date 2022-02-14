
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * global_drv_priv; TYPE_1__* driver; struct wpa_global* global; } ;
struct wpa_global {int ** drv_priv; } ;
struct TYPE_2__ {int name; int * (* global_init ) (struct wpa_global*) ;} ;


 int VAR_0 ;
 int * FUNC_0 (struct wpa_global*) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_2, int VAR_3)
{
 struct wpa_global *VAR_4 = VAR_2->global;

 if (VAR_1[VAR_3]->global_init && VAR_4->drv_priv[VAR_3] == ((void*)0)) {
  VAR_4->drv_priv[VAR_3] = VAR_1[VAR_3]->global_init(VAR_4);
  if (VAR_4->drv_priv[VAR_3] == ((void*)0)) {
   FUNC_1(VAR_0, "Failed to initialize driver "
       "'%s'", VAR_1[VAR_3]->name);
   return -1;
  }
 }

 VAR_2->driver = VAR_1[VAR_3];
 VAR_2->global_drv_priv = VAR_4->drv_priv[VAR_3];

 return 0;
}
