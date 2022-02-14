
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct mpr_softc {scalar_t__ fw_diag_busaddr; int * fw_diag_dmat; int * fw_diag_buffer; int fw_diag_map; TYPE_1__* fw_diag_buffer_list; } ;
struct TYPE_5__ {int unique_id; int owned_by_firmware; } ;
typedef TYPE_1__ mpr_fw_diagnostic_buffer_t ;
struct TYPE_6__ {int UniqueId; } ;
typedef TYPE_2__ mpr_fw_diag_unregister_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 size_t FUNC_3 (struct mpr_softc*,int ) ;
 int FUNC_4 (struct mpr_softc*,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct mpr_softc *VAR_6,
    mpr_fw_diag_unregister_t *VAR_7, uint32_t *VAR_8)
{
 mpr_fw_diagnostic_buffer_t *VAR_9;
 uint8_t VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_7->UniqueId;





 VAR_10 = FUNC_3(VAR_6, VAR_11);
 if (VAR_10 == VAR_2) {
  *VAR_8 = VAR_3;
  return (VAR_0);
 }

 VAR_9 = &VAR_6->fw_diag_buffer_list[VAR_10];






 if (!VAR_9->owned_by_firmware) {
  VAR_12 = VAR_1;
 } else {
  VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_8,
      VAR_5);
 }





 VAR_9->unique_id = VAR_4;
 if (VAR_12 == VAR_1) {
  if (VAR_6->fw_diag_busaddr != 0) {
   FUNC_1(VAR_6->fw_diag_dmat, VAR_6->fw_diag_map);
   VAR_6->fw_diag_busaddr = 0;
  }
  if (VAR_6->fw_diag_buffer != ((void*)0)) {
   FUNC_2(VAR_6->fw_diag_dmat, VAR_6->fw_diag_buffer,
       VAR_6->fw_diag_map);
   VAR_6->fw_diag_buffer = ((void*)0);
  }
  if (VAR_6->fw_diag_dmat != ((void*)0)) {
   FUNC_0(VAR_6->fw_diag_dmat);
   VAR_6->fw_diag_dmat = ((void*)0);
  }
 }

 return (VAR_12);
}
