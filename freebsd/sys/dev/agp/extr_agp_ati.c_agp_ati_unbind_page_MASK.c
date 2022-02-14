
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
struct agp_ati_softc {size_t ag_entries; scalar_t__* ag_virtual; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct agp_ati_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, vm_offset_t VAR_3)
{
 struct agp_ati_softc *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 >= (VAR_4->ag_entries << VAR_0))
  return VAR_1;

 VAR_4->ag_virtual[VAR_3 >> VAR_0] = 0;
 return 0;
}
