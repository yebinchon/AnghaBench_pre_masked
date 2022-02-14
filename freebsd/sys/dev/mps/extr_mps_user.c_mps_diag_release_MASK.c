
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct mps_softc {TYPE_1__* fw_diag_buffer_list; } ;
struct TYPE_5__ {int owned_by_firmware; } ;
typedef TYPE_1__ mps_fw_diagnostic_buffer_t ;
struct TYPE_6__ {int UniqueId; } ;
typedef TYPE_2__ mps_fw_diag_release_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct mps_softc*,int ) ;
 int FUNC_1 (struct mps_softc*,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct mps_softc *VAR_5, mps_fw_diag_release_t *VAR_6,
    uint32_t *VAR_7)
{
 mps_fw_diagnostic_buffer_t *VAR_8;
 uint8_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_10 = VAR_6->UniqueId;





 VAR_9 = FUNC_0(VAR_5, VAR_10);
 if (VAR_9 == VAR_1) {
  *VAR_7 = VAR_3;
  return (VAR_0);
 }

 VAR_8 = &VAR_5->fw_diag_buffer_list[VAR_9];




 if (!VAR_8->owned_by_firmware) {
  *VAR_7 = VAR_2;
  return (VAR_0);
 }




 VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_7,
     VAR_4);
 return (VAR_11);
}
