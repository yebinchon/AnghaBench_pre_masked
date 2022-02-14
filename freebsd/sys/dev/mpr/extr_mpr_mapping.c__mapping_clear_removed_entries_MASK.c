
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {int Flags; } ;
struct mpr_softc {scalar_t__ max_devices; int* dpm_flush_entry; int num_enc_table_entries; struct enc_mapping_table* enclosure_table; scalar_t__* dpm_entry_used; scalar_t__ dpm_pg0; struct map_removal_table* removal_table; scalar_t__ is_dpm_enable; TYPE_1__ ioc_pg8; } ;
struct map_removal_table {size_t dpm_entry_num; } ;
struct enc_mapping_table {scalar_t__ init_complete; int enc_handle; } ;
struct TYPE_5__ {scalar_t__ High; scalar_t__ Low; } ;
struct TYPE_6__ {scalar_t__ PhysicalBitsMapping; scalar_t__ MappingInformation; scalar_t__ DeviceIndex; TYPE_2__ PhysicalIdentifier; } ;
typedef TYPE_3__ Mpi2DriverMap0Entry_t ;
typedef int MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct enc_mapping_table*) ;
 int FUNC_1 (struct mpr_softc*,struct enc_mapping_table*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mpr_softc *VAR_3)
{
 u32 VAR_4;
 struct map_removal_table *VAR_5;
 Mpi2DriverMap0Entry_t *VAR_6;
 u8 VAR_7 = 0, VAR_8, VAR_9, VAR_10;
 struct enc_mapping_table *VAR_11, *VAR_12, *VAR_13;
 u16 VAR_14 = FUNC_2(VAR_3->ioc_pg8.Flags);

 if (VAR_3->is_dpm_enable) {
  VAR_5 = VAR_3->removal_table;
  for (VAR_4 = 0; VAR_4 < VAR_3->max_devices;
      VAR_4++, VAR_5++) {
   if (VAR_5->dpm_entry_num != VAR_2) {
    VAR_6 = (Mpi2DriverMap0Entry_t *)
        ((u8 *) VAR_3->dpm_pg0 +
        sizeof(MPI2_CONFIG_EXTENDED_PAGE_HEADER));
    VAR_6 += VAR_5->dpm_entry_num;
    VAR_6->PhysicalIdentifier.Low = 0;
    VAR_6->PhysicalIdentifier.High = 0;
    VAR_6->DeviceIndex = 0;
    VAR_6->MappingInformation = 0;
    VAR_6->PhysicalBitsMapping = 0;
    VAR_3->dpm_flush_entry[VAR_5->
        dpm_entry_num] = 1;
    VAR_3->dpm_entry_used[VAR_5->dpm_entry_num]
        = 0;
    VAR_5->dpm_entry_num = VAR_2;
   }
  }
 }







 if ((VAR_14 & VAR_1) ==
     VAR_0) {
  VAR_8 = VAR_3->num_enc_table_entries;
  while (!VAR_7) {
   VAR_7 = 1;
   VAR_11 = VAR_3->enclosure_table;
   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++, VAR_11++) {
    if (!VAR_11->enc_handle && VAR_11->
        init_complete) {
     VAR_7 = 0;
     if (VAR_10 != (VAR_8 - 1)) {
      VAR_12 = &VAR_3->enclosure_table
          [VAR_10+1];
      VAR_13 = &VAR_3->enclosure_table[VAR_10];
      for (VAR_9 = VAR_10; VAR_9 < (VAR_8 -
          1); VAR_9++, VAR_12++, VAR_13++) {
       FUNC_1
           (VAR_3, VAR_13);
       *VAR_13 = *VAR_12;
      }
      FUNC_0(VAR_13);
      VAR_3->num_enc_table_entries--;
      VAR_8 =
          VAR_3->num_enc_table_entries;
     } else {
      FUNC_0
          (VAR_11);
      VAR_3->num_enc_table_entries--;
      VAR_8 =
          VAR_3->num_enc_table_entries;
     }
    }
   }
  }
 }
}
