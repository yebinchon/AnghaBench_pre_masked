
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_func_qcfg_output {int alloc_vnics; int alloc_rx_rings; int alloc_tx_rings; int alloc_cmpl_rings; } ;
struct hwrm_func_qcfg_input {int fid; int member_0; } ;
struct bnxt_func_qcfg {void* alloc_vnics; void* alloc_rx_rings; void* alloc_tx_rings; void* alloc_completion_rings; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {struct bnxt_func_qcfg fn_qcfg; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_func_qcfg_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_func_qcfg_input*,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_1)
{
        struct hwrm_func_qcfg_input VAR_2 = {0};
        struct hwrm_func_qcfg_output *VAR_3 =
     (void *)VAR_1->hwrm_cmd_resp.idi_vaddr;
 struct bnxt_func_qcfg *VAR_4 = &VAR_1->fn_qcfg;
        int VAR_5;

 FUNC_3(VAR_1, &VAR_2, VAR_0);
        VAR_2.fid = FUNC_4(0xffff);
 FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
        if (VAR_5)
  goto fail;

 VAR_4->alloc_completion_rings = FUNC_5(VAR_3->alloc_cmpl_rings);
 VAR_4->alloc_tx_rings = FUNC_5(VAR_3->alloc_tx_rings);
 VAR_4->alloc_rx_rings = FUNC_5(VAR_3->alloc_rx_rings);
 VAR_4->alloc_vnics = FUNC_5(VAR_3->alloc_vnics);
fail:
 FUNC_1(VAR_1);
        return VAR_5;
}
