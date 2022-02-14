
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int device; int array; } ;
struct TYPE_16__ {TYPE_3__ u; int Capacity; void* ParentArray; int Type; } ;
struct TYPE_12__ {int dDeRealCapacity; } ;
struct TYPE_13__ {TYPE_1__ disk; } ;
struct TYPE_15__ {TYPE_2__ u; scalar_t__ pParent; int VDeviceCapacity; } ;
typedef TYPE_4__* PVDevice ;
typedef TYPE_5__* PLOGICAL_DEVICE_INFO ;
typedef scalar_t__ DEVICEID ;


 TYPE_4__* FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

int FUNC_6(DEVICEID VAR_3, PLOGICAL_DEVICE_INFO VAR_4)
{
 PVDevice VAR_5 = FUNC_0(VAR_3);

 if((VAR_3 == 0) || FUNC_2(VAR_5))
  return -1;
 VAR_4->Type = VAR_2;
 VAR_4->ParentArray = VAR_5->pParent? FUNC_1(VAR_5->pParent) : VAR_0;

 VAR_4->Capacity = VAR_5->u.disk.dDeRealCapacity;
 return FUNC_4(VAR_5, &VAR_4->u.device);
}
