
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {int * drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_country ) (int *,char*) ;} ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct wpa_priv_interface *VAR_0,
         char *VAR_1)
{
 if (VAR_0->drv_priv == ((void*)0) || VAR_0->driver->set_country == ((void*)0) ||
     *VAR_1 == '\0')
  return;

 VAR_0->driver->set_country(VAR_0->drv_priv, VAR_1);
}
