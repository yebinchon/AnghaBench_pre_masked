
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_data {TYPE_1__** devclass_pp; } ;
typedef TYPE_2__* device_t ;
struct TYPE_5__ {size_t dev_unit; int * dev_module; } ;
struct TYPE_4__ {int ** dev_list; } ;



__attribute__((used)) static void
FUNC_0(const struct module_data *VAR_0, device_t VAR_1)
{
 if (VAR_0 == ((void*)0)) {
  return;
 }
 VAR_0->devclass_pp[0]->dev_list[VAR_1->dev_unit] = ((void*)0);
 VAR_1->dev_module = ((void*)0);
}
