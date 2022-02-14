
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_nvm_find_dir_entry_output {int dir_idx; int dir_ordinal; int fw_ver; int dir_data_length; int dir_item_length; } ;
struct hwrm_nvm_find_dir_entry_input {int opt_ordinal; void* dir_ext; void* dir_ordinal; void* dir_type; void* dir_idx; int enables; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_find_dir_entry_input*,int) ;
 int FUNC_4 (struct bnxt_softc*,struct hwrm_nvm_find_dir_entry_input*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct bnxt_softc *VAR_3, uint16_t VAR_4,
    uint16_t *VAR_5, uint16_t VAR_6, uint16_t *VAR_7, bool VAR_8,
    uint8_t VAR_9, uint32_t *VAR_10, uint32_t *VAR_11,
    uint32_t *VAR_12)
{
 struct hwrm_nvm_find_dir_entry_input VAR_13 = {0};
 struct hwrm_nvm_find_dir_entry_output *VAR_14 =
     (void *)VAR_3->hwrm_cmd_resp.idi_vaddr;
 int VAR_15 = 0;
 uint32_t VAR_16;

 FUNC_2(VAR_5);

 FUNC_4(VAR_3, &VAR_13, VAR_1);
 if (VAR_8) {
  VAR_13.enables = FUNC_6(
      VAR_2);
  VAR_13.dir_idx = FUNC_5(*VAR_7);
 }
 VAR_13.dir_type = FUNC_5(VAR_4);
 VAR_13.dir_ordinal = FUNC_5(*VAR_5);
 VAR_13.dir_ext = FUNC_5(VAR_6);
 VAR_13.opt_ordinal = VAR_9;

 FUNC_0(VAR_3);
 VAR_16 = VAR_3->hwrm_cmd_timeo;
 VAR_3->hwrm_cmd_timeo = VAR_0;
 VAR_15 = FUNC_3(VAR_3, &VAR_13, sizeof(VAR_13));
 VAR_3->hwrm_cmd_timeo = VAR_16;
 if (VAR_15)
  goto exit;

 if (VAR_11)
  *VAR_11 = FUNC_8(VAR_14->dir_item_length);
 if (VAR_10)
  *VAR_10 = FUNC_8(VAR_14->dir_data_length);
 if (VAR_12)
  *VAR_12 = FUNC_8(VAR_14->fw_ver);
 *VAR_5 = FUNC_7(VAR_14->dir_ordinal);
 if (VAR_7)
  *VAR_7 = FUNC_7(VAR_14->dir_idx);

exit:
 FUNC_1(VAR_3);
 return (VAR_15);
}
