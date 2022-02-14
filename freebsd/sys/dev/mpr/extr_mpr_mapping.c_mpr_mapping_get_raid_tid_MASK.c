
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct mpr_softc {struct dev_mapping_table* mapping_table; } ;
struct dev_mapping_table {scalar_t__ dev_handle; scalar_t__ physical_id; unsigned int id; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mpr_softc*,size_t*,size_t*) ;

unsigned int
FUNC_1(struct mpr_softc *VAR_1, u64 VAR_2, u16 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 struct dev_mapping_table *VAR_7;

 FUNC_0(VAR_1, &VAR_4, &VAR_5);
 VAR_7 = &VAR_1->mapping_table[VAR_4];
 for (VAR_6 = VAR_4; VAR_6 <= VAR_5; VAR_6++, VAR_7++) {
  if (VAR_7->dev_handle == VAR_3 &&
      VAR_7->physical_id == VAR_2)
   return VAR_7->id;
 }

 return VAR_0;
}
