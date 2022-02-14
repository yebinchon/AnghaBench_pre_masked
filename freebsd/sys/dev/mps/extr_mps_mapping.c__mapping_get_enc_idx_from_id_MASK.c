
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
struct mps_softc {size_t num_enc_table_entries; struct enc_mapping_table* enclosure_table; } ;
struct enc_mapping_table {scalar_t__ enclosure_id; int phy_bits; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u8
FUNC_2(struct mps_softc *VAR_1, u64 VAR_2,
    u64 VAR_3)
{
 struct enc_mapping_table *VAR_4;
 u8 VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_enc_table_entries; VAR_5++) {
  VAR_4 = &VAR_1->enclosure_table[VAR_5];
  if ((VAR_4->enclosure_id == FUNC_1(VAR_2)) &&
      (!VAR_4->phy_bits || (VAR_4->phy_bits &
      FUNC_0(VAR_3))))
   return VAR_5;
 }
 return VAR_0;
}
