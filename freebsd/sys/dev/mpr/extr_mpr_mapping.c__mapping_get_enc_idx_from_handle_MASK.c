
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct mpr_softc {size_t num_enc_table_entries; struct enc_mapping_table* enclosure_table; } ;
struct enc_mapping_table {scalar_t__ enc_handle; scalar_t__ missing_count; } ;


 size_t VAR_0 ;

__attribute__((used)) static u8
FUNC_0(struct mpr_softc *VAR_1, u16 VAR_2)
{
 struct enc_mapping_table *VAR_3;
 u8 VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_enc_table_entries; VAR_4++) {
  VAR_3 = &VAR_1->enclosure_table[VAR_4];
  if (VAR_3->missing_count)
   continue;
  if (VAR_3->enc_handle == VAR_2)
   return VAR_4;
 }
 return VAR_0;
}
