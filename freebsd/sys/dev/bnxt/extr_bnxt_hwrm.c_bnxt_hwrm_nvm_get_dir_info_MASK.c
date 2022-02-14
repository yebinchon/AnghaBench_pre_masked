
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hwrm_nvm_get_dir_info_output {int entry_length; int entries; } ;
struct hwrm_nvm_get_dir_info_input {int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_get_dir_info_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_get_dir_info_input*,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct bnxt_softc *VAR_2, uint32_t *VAR_3,
    uint32_t *VAR_4)
{
 struct hwrm_nvm_get_dir_info_input VAR_5 = {0};
 struct hwrm_nvm_get_dir_info_output *VAR_6 =
     (void *)VAR_2->hwrm_cmd_resp.idi_vaddr;
 int VAR_7;
 uint32_t VAR_8;

 FUNC_3(VAR_2, &VAR_5, VAR_1);

 FUNC_0(VAR_2);
 VAR_8 = VAR_2->hwrm_cmd_timeo;
 VAR_2->hwrm_cmd_timeo = VAR_0;
 VAR_7 = FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5));
 VAR_2->hwrm_cmd_timeo = VAR_8;
 if (VAR_7)
  goto exit;

 if (VAR_3)
  *VAR_3 = FUNC_4(VAR_6->entries);
 if (VAR_4)
  *VAR_4 = FUNC_4(VAR_6->entry_length);

exit:
 FUNC_1(VAR_2);
 return VAR_7;
}
