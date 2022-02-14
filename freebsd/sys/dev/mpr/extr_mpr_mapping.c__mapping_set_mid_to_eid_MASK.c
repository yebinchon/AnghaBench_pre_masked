
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct mpr_softc {struct dev_mapping_table* mapping_table; } ;
struct enc_mapping_table {scalar_t__ num_slots; size_t start_index; int enclosure_id; } ;
struct dev_mapping_table {int physical_id; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct mpr_softc *VAR_1,
    struct enc_mapping_table *VAR_2)
{
 struct dev_mapping_table *VAR_3;
 u16 VAR_4 = VAR_2->num_slots, VAR_5;
 u32 VAR_6 = VAR_2->start_index;

 if (VAR_6 != VAR_0) {
  VAR_3 = &VAR_1->mapping_table[VAR_6];
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_3++)
   VAR_3->physical_id = VAR_2->enclosure_id;
 }
}
