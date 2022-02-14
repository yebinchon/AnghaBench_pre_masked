
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_method {void* func; int desc; } ;
typedef TYPE_3__* device_t ;
struct TYPE_7__ {TYPE_2__* dev_module; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {struct device_method* methods; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

void *
FUNC_1(device_t VAR_1, const char *VAR_2)
{
 const struct device_method *VAR_3;

 VAR_3 = VAR_1->dev_module->driver->methods;
 while (VAR_3->func != ((void*)0)) {
  if (FUNC_0(VAR_3->desc, VAR_2)) {
   return (VAR_3->func);
  }
  VAR_3++;
 }
 return ((void *)&VAR_0);
}
