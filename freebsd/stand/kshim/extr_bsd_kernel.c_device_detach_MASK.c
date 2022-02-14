
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct module_data {int dummy; } ;
typedef TYPE_1__* device_t ;
struct TYPE_6__ {scalar_t__ dev_fixed_class; scalar_t__ dev_attached; struct module_data* dev_module; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct module_data const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

int
FUNC_3(device_t VAR_0)
{
 const struct module_data *VAR_1 = VAR_0->dev_module;
 int VAR_2;

 if (VAR_0->dev_attached) {

  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2) {
   return VAR_2;
  }
  VAR_0->dev_attached = 0;
 }
 FUNC_2(VAR_0, ((void*)0));

 if (VAR_0->dev_fixed_class == 0)
  FUNC_1(VAR_1, VAR_0);

 return (0);
}
