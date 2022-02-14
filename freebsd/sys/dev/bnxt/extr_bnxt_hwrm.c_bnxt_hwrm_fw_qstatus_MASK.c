
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hwrm_fw_qstatus_output {int selfrst_status; } ;
struct hwrm_fw_qstatus_input {int embedded_proc_type; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_fw_qstatus_input*,int) ;
 int FUNC_4 (struct bnxt_softc*,struct hwrm_fw_qstatus_input*,int ) ;

int
FUNC_5(struct bnxt_softc *VAR_1, uint8_t VAR_2, uint8_t *VAR_3)
{
 struct hwrm_fw_qstatus_input VAR_4 = {0};
 struct hwrm_fw_qstatus_output *VAR_5 =
     (void *)VAR_1->hwrm_cmd_resp.idi_vaddr;
 int VAR_6;

 FUNC_2(VAR_3);

 FUNC_4(VAR_1, &VAR_4, VAR_0);
 VAR_4.embedded_proc_type = VAR_2;

 FUNC_0(VAR_1);
 VAR_6 = FUNC_3(VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  goto exit;
 *VAR_3 = VAR_5->selfrst_status;

exit:
 FUNC_1(VAR_1);
 return VAR_6;
}
