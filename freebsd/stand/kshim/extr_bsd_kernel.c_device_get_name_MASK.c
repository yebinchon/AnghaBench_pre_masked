
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* device_t ;
struct TYPE_7__ {TYPE_2__* dev_module; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {char const* name; } ;


 char const* VAR_0 ;

const char *
FUNC_0(device_t VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 return (VAR_1->dev_module->driver->name);
}
