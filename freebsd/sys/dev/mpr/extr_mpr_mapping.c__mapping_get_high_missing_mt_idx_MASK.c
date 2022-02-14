
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int Flags; } ;
struct mpr_softc {int max_devices; struct dev_mapping_table* mapping_table; scalar_t__ ir_firmware; TYPE_1__ ioc_pg8; } ;
struct dev_mapping_table {scalar_t__ missing_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpr_softc*,int*,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(struct mpr_softc *VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_1;
 u8 VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 struct dev_mapping_table *VAR_10;
 u16 VAR_11 = FUNC_1(VAR_2->ioc_pg8.Flags);

 VAR_6 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_7 = VAR_2->max_devices;
 if (VAR_11 & VAR_0)
  VAR_6 = 1;
 if (VAR_2->ir_firmware) {
  FUNC_0(VAR_2, &VAR_8, &VAR_9);
  if (VAR_6 == VAR_8)
   VAR_6 = VAR_9 + 1;
  else
   VAR_7 = VAR_8;
 }
 VAR_10 = &VAR_2->mapping_table[VAR_6];
 for (VAR_3 = VAR_6; VAR_3 < VAR_7; VAR_3++, VAR_10++) {
  if (VAR_10->missing_count > VAR_5) {
   VAR_5 = VAR_10->missing_count;
   VAR_4 = VAR_3;
  }
 }
 return VAR_4;
}
