
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_data {TYPE_1__* driver; } ;
typedef TYPE_2__* device_t ;
struct TYPE_5__ {int dev_softc_alloc; int * dev_sc; struct module_data* dev_module; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4)
{
 const struct module_data *VAR_5;

 VAR_5 = VAR_4->dev_module;

 if ((VAR_4->dev_softc_alloc == 0) &&
     (VAR_5->driver->size != 0)) {
  VAR_4->dev_sc = FUNC_0(VAR_5->driver->size,
      VAR_1, VAR_2 | VAR_3);

  if (VAR_4->dev_sc == ((void*)0))
   return (VAR_0);

  VAR_4->dev_softc_alloc = 1;
 }
 return (0);
}
