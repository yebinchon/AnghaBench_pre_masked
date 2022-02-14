
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* driver; int global_drv_priv; } ;
struct TYPE_2__ {void* (* init2 ) (struct wpa_supplicant*,char const*,int ) ;void* (* init ) (struct wpa_supplicant*,char const*) ;} ;


 void* FUNC_0 (struct wpa_supplicant*,char const*,int ) ;
 void* FUNC_1 (struct wpa_supplicant*,char const*) ;

__attribute__((used)) static inline void * FUNC_2(struct wpa_supplicant *VAR_0,
      const char *VAR_1)
{
 if (VAR_0->driver->init2)
  return VAR_0->driver->init2(VAR_0, VAR_1,
         VAR_0->global_drv_priv);
 if (VAR_0->driver->init) {
  return VAR_0->driver->init(VAR_0, VAR_1);
 }
 return ((void*)0);
}
