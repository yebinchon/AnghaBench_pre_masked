
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct hwrm_wol_filter_qcfg_output {scalar_t__ wol_type; int wol_filter_id; int next_handle; } ;
struct hwrm_wol_filter_qcfg_input {void* handle; void* port_id; int member_0; } ;
struct TYPE_4__ {scalar_t__ port_id; } ;
struct TYPE_3__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int wol; int wol_filter_id; TYPE_2__ pf; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_wol_filter_qcfg_input*,int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_wol_filter_qcfg_input*,int) ;
 scalar_t__ FUNC_3 (int ) ;

uint16_t
FUNC_4(struct bnxt_softc *VAR_2, uint16_t VAR_3)
{
 struct hwrm_wol_filter_qcfg_input VAR_4 = {0};
 struct hwrm_wol_filter_qcfg_output *VAR_5 =
   (void *)VAR_2->hwrm_cmd_resp.idi_vaddr;
 uint16_t VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_2, &VAR_4, VAR_1);
 VAR_4.port_id = FUNC_1(VAR_2->pf.port_id);
 VAR_4.handle = FUNC_1(VAR_3);
 VAR_7 = FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 if (!VAR_7) {
  VAR_6 = FUNC_3(VAR_5->next_handle);
  if (VAR_6 != 0) {
   if (VAR_5->wol_type ==
    VAR_0) {
    VAR_2->wol = 1;
    VAR_2->wol_filter_id = VAR_5->wol_filter_id;
   }
  }
 }
 return VAR_6;
}
