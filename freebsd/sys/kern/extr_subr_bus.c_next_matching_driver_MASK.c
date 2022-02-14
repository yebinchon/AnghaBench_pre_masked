
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* driverlink_t ;
typedef TYPE_4__* device_t ;
typedef int devclass_t ;
struct TYPE_13__ {TYPE_1__* devclass; } ;
struct TYPE_12__ {TYPE_2__* driver; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int name; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static driverlink_t
FUNC_2(devclass_t VAR_1, device_t VAR_2, driverlink_t VAR_3)
{
 if (VAR_2->devclass) {
  driverlink_t VAR_4;
  for (VAR_4 = FUNC_0(VAR_3, VAR_0); VAR_4; VAR_4 = FUNC_0(VAR_4, VAR_0))
   if (!FUNC_1(VAR_2->devclass->name, VAR_4->driver->name))
    return (VAR_4);
  return (((void*)0));
 }
 return (FUNC_0(VAR_3, VAR_0));
}
