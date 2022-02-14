
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct mps_softc {scalar_t__ fw_diag_buffer; int fw_diag_map; int fw_diag_dmat; TYPE_1__* fw_diag_buffer_list; } ;
struct TYPE_5__ {scalar_t__ size; int owned_by_firmware; scalar_t__ force_release; } ;
typedef TYPE_1__ mps_fw_diagnostic_buffer_t ;
struct TYPE_6__ {scalar_t__ StartingOffset; scalar_t__ BytesToRead; int Flags; scalar_t__ Status; int UniqueId; } ;
typedef TYPE_2__ mps_diag_read_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (size_t*,size_t*,scalar_t__) ;
 size_t FUNC_2 (struct mps_softc*,int ) ;
 int FUNC_3 (struct mps_softc*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(struct mps_softc *VAR_8,
    mps_diag_read_buffer_t *VAR_9, uint8_t *VAR_10,
    uint32_t *VAR_11)
{
 mps_fw_diagnostic_buffer_t *VAR_12;
 uint8_t VAR_13, *VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_15 = VAR_9->UniqueId;





 VAR_13 = FUNC_2(VAR_8, VAR_15);
 if (VAR_13 == VAR_3) {
  *VAR_11 = VAR_5;
  return (VAR_1);
 }

 VAR_12 = &VAR_8->fw_diag_buffer_list[VAR_13];




 if (VAR_9->StartingOffset + VAR_9->BytesToRead >
     VAR_12->size) {
  *VAR_11 = VAR_4;
  return (VAR_1);
 }


 FUNC_0(VAR_8->fw_diag_dmat, VAR_8->fw_diag_map,
     VAR_0);





 VAR_14 = (uint8_t *)(VAR_8->fw_diag_buffer +
     VAR_9->StartingOffset);
 if (FUNC_1(VAR_14, VAR_10, VAR_9->BytesToRead) != 0)
  return (VAR_1);
 VAR_9->Status = 0;




 if (VAR_12->force_release) {
  VAR_9->Flags |= VAR_6;
 } else {
  VAR_9->Flags &= ~VAR_6;
 }





 VAR_16 = VAR_2;
 if (!VAR_12->owned_by_firmware) {
  if (VAR_9->Flags & VAR_7) {
   VAR_16 = FUNC_3(VAR_8, VAR_12,
       VAR_11);
  }
 }

 return (VAR_16);
}
