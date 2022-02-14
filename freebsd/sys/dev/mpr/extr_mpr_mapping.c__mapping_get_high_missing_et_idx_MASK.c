
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mpr_softc {size_t num_enc_table_entries; struct enc_mapping_table* enclosure_table; } ;
struct enc_mapping_table {size_t missing_count; int skip_search; } ;


 size_t VAR_0 ;

__attribute__((used)) static u8
FUNC_0(struct mpr_softc *VAR_1)
{
 struct enc_mapping_table *VAR_2;
 u8 VAR_3 = 0;
 u8 VAR_4, VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_enc_table_entries; VAR_4++) {
  VAR_2 = &VAR_1->enclosure_table[VAR_4];
  if ((VAR_2->missing_count > VAR_3) &&
      !VAR_2->skip_search) {
   VAR_3 = VAR_2->missing_count;
   VAR_5 = VAR_4;
  }
 }
 return VAR_5;
}
