
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {int IRVolumeMappingFlags; } ;
struct mpr_softc {size_t max_devices; scalar_t__ max_volumes; scalar_t__ ir_firmware; TYPE_1__ ioc_pg8; struct dev_mapping_table* mapping_table; } ;
struct dev_mapping_table {int device_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32
FUNC_1(struct mpr_softc *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8 = VAR_5->max_devices;
 struct dev_mapping_table *VAR_9 = &VAR_5->mapping_table[VAR_6];
 u16 VAR_10;

 VAR_10 = FUNC_0(VAR_5->ioc_pg8.IRVolumeMappingFlags) &
     VAR_1;
 if (VAR_5->ir_firmware && (VAR_10 ==
     VAR_0))
  VAR_8 -= VAR_5->max_volumes;

 for (VAR_7 = VAR_6; VAR_7 < VAR_8; VAR_7++, VAR_9++)
  if (!(VAR_9->device_info & (VAR_4 |
      VAR_2)))
   return VAR_7;

 return VAR_3;
}
