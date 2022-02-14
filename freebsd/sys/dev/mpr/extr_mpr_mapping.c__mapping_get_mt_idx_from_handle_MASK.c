
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct mpr_softc {size_t max_devices; struct dev_mapping_table* mapping_table; } ;
struct dev_mapping_table {scalar_t__ dev_handle; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32
FUNC_0(struct mpr_softc *VAR_1, u16 VAR_2)
{
 u32 VAR_3;
 struct dev_mapping_table *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_devices; VAR_3++) {
  VAR_4 = &VAR_1->mapping_table[VAR_3];
  if (VAR_4->dev_handle == VAR_2)
   return VAR_3;
 }
 return VAR_0;
}
