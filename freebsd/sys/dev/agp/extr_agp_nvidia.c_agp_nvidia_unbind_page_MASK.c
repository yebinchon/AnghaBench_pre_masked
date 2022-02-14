
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vm_offset_t ;
typedef size_t u_int32_t ;
struct agp_nvidia_softc {size_t pg_offset; TYPE_1__* gatt; } ;
typedef int device_t ;
struct TYPE_2__ {size_t ag_entries; scalar_t__* ag_virtual; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct agp_nvidia_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, vm_offset_t VAR_3)
{
 struct agp_nvidia_softc *VAR_4 = FUNC_0(VAR_2);
 u_int32_t VAR_5;

 if (VAR_3 >= (VAR_4->gatt->ag_entries << VAR_0))
  return (VAR_1);

 VAR_5 = (VAR_4->pg_offset + VAR_3) >> VAR_0;
 VAR_4->gatt->ag_virtual[VAR_5] = 0;

 return (0);
}
