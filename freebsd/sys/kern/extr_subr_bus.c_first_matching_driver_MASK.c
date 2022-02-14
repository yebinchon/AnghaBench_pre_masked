
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int driverlink_t ;
typedef TYPE_2__* device_t ;
typedef TYPE_3__* devclass_t ;
struct TYPE_9__ {int drivers; } ;
struct TYPE_8__ {TYPE_1__* devclass; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static driverlink_t
FUNC_2(devclass_t VAR_0, device_t VAR_1)
{
 if (VAR_1->devclass)
  return (FUNC_1(VAR_0, VAR_1->devclass->name));
 return (FUNC_0(&VAR_0->drivers));
}
