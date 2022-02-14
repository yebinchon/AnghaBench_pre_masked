
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int device; int array; } ;
struct TYPE_15__ {int lo32; int hi32; } ;
struct TYPE_18__ {TYPE_4__ u; TYPE_3__ Capacity; void* ParentArray; int Type; } ;
struct TYPE_13__ {int dDeRealCapacity; } ;
struct TYPE_14__ {TYPE_1__ disk; } ;
struct TYPE_17__ {int VDeviceCapacity; TYPE_2__ u; scalar_t__ pParent; } ;
typedef TYPE_5__* PVDevice ;
typedef TYPE_6__* PLOGICAL_DEVICE_INFO_V2 ;
typedef int LBA_T ;
typedef scalar_t__ DEVICEID ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;

int FUNC_6(DEVICEID VAR_3, PLOGICAL_DEVICE_INFO_V2 VAR_4)
{
 PVDevice VAR_5 = FUNC_0(VAR_3);

 if((VAR_3 == 0) || FUNC_2(VAR_5))
  return -1;
 VAR_4->Type = VAR_2;
 VAR_4->ParentArray = VAR_5->pParent? FUNC_1(VAR_5->pParent) : VAR_0;

 VAR_4->Capacity.lo32 = VAR_5->u.disk.dDeRealCapacity;
 VAR_4->Capacity.hi32 = 0;
 return FUNC_4(VAR_5, &VAR_4->u.device);
}
