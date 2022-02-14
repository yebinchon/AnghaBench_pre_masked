
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef size_t u_int32_t ;
struct agp_nvidia_softc {int pg_offset; TYPE_1__* gatt; } ;
typedef int device_t ;
struct TYPE_2__ {int ag_entries; int* ag_virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_nvidia_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4)
{
 struct agp_nvidia_softc *VAR_5 = FUNC_0(VAR_2);
 u_int32_t VAR_6;

 if (VAR_3 >= (VAR_5->gatt->ag_entries << VAR_0))
  return (VAR_1);

 VAR_6 = (VAR_5->pg_offset + VAR_3) >> VAR_0;
 VAR_5->gatt->ag_virtual[VAR_6] = VAR_4 | 1;

 return (0);
}
