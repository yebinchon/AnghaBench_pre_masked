
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct mps_softc {size_t max_dpm_entries; struct dev_mapping_table* mapping_table; scalar_t__ dpm_pg0; scalar_t__* dpm_entry_used; } ;
struct dev_mapping_table {size_t dpm_entry_num; } ;
struct TYPE_3__ {int High; int Low; } ;
struct TYPE_4__ {size_t MappingInformation; TYPE_1__ PhysicalIdentifier; } ;
typedef TYPE_2__ Mpi2DriverMap0Entry_t ;
typedef int MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct mps_softc*,int) ;

__attribute__((used)) static u32
FUNC_1(struct mps_softc *VAR_3)
{
 u16 VAR_4;
 Mpi2DriverMap0Entry_t *VAR_5;
 u16 VAR_6 = VAR_1, VAR_7, VAR_8 = 0;
 u64 VAR_9;
 struct dev_mapping_table *VAR_10;
 u32 VAR_11;

  for (VAR_4 = 0; VAR_4 < VAR_3->max_dpm_entries; VAR_4++) {
  VAR_5 = (Mpi2DriverMap0Entry_t *) ((u8 *)VAR_3->dpm_pg0 +
      sizeof(MPI2_CONFIG_EXTENDED_PAGE_HEADER));
  VAR_5 += VAR_4;
  VAR_7 = VAR_5->MappingInformation &
      VAR_0;





  if (VAR_3->dpm_entry_used[VAR_4] && !VAR_7)
   continue;







  if (!VAR_3->dpm_entry_used[VAR_4]) {
   VAR_6 = VAR_4;
   break;
  }
  if ((VAR_6 == VAR_1) ||
      (VAR_7 > VAR_8)) {
   VAR_6 = VAR_4;
   VAR_8 = VAR_7;
  }
  }
 if ((VAR_6 != VAR_1) &&
     VAR_3->dpm_entry_used[VAR_6]) {
  VAR_5 = (Mpi2DriverMap0Entry_t *) ((u8 *)VAR_3->dpm_pg0 +
      sizeof(MPI2_CONFIG_EXTENDED_PAGE_HEADER));
  VAR_5 += VAR_6;
  VAR_9 = VAR_5->PhysicalIdentifier.High;
  VAR_9 = (VAR_9 << 32) |
      VAR_5->PhysicalIdentifier.Low;
  VAR_11 = FUNC_0(VAR_3, VAR_9);
  if (VAR_11 != VAR_2) {
   VAR_10 = &VAR_3->mapping_table[VAR_11];
   VAR_10->dpm_entry_num = VAR_1;
  }
 }
 return VAR_6;
}
