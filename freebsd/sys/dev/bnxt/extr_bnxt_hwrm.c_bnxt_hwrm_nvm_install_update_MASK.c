
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct hwrm_nvm_install_update_output {int reset_required; int problem_item; int result; int installed_items; } ;
struct hwrm_nvm_install_update_input {int install_type; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_install_update_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_install_update_input*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_2,
    uint32_t VAR_3, uint64_t *VAR_4, uint8_t *VAR_5,
    uint8_t *VAR_6, uint8_t *VAR_7)
{
 struct hwrm_nvm_install_update_input VAR_8 = {0};
 struct hwrm_nvm_install_update_output *VAR_9 =
     (void *)VAR_2->hwrm_cmd_resp.idi_vaddr;
 int VAR_10;
 uint32_t VAR_11;

 FUNC_3(VAR_2, &VAR_8, VAR_1);
 VAR_8.install_type = FUNC_4(VAR_3);

 FUNC_0(VAR_2);
 VAR_11 = VAR_2->hwrm_cmd_timeo;
 VAR_2->hwrm_cmd_timeo = VAR_0;
 VAR_10 = FUNC_2(VAR_2, &VAR_8, sizeof(VAR_8));
 VAR_2->hwrm_cmd_timeo = VAR_11;
 if (VAR_10)
  goto exit;

 if (VAR_4)
  *VAR_4 = FUNC_5(VAR_9->installed_items);
 if (VAR_5)
  *VAR_5 = VAR_9->result;
 if (VAR_6)
  *VAR_6 = VAR_9->problem_item;
 if (VAR_7)
  *VAR_7 = VAR_9->reset_required;

exit:
 FUNC_1(VAR_2);
 return VAR_10;
}
