
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct mps_softc {size_t max_devices; struct dev_mapping_table* mapping_table; } ;
struct dev_mapping_table {scalar_t__ dev_handle; scalar_t__ physical_id; unsigned int id; } ;


 unsigned int VAR_0 ;

unsigned int
FUNC_0(struct mps_softc *VAR_1, uint64_t VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 struct dev_mapping_table *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->max_devices; VAR_4++) {
  VAR_5 = &VAR_1->mapping_table[VAR_4];
  if (VAR_5->dev_handle == VAR_3 && VAR_5->physical_id ==
      VAR_2)
   return VAR_5->id;
 }

 return VAR_0;
}
