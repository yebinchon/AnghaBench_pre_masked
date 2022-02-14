
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct hwrm_stat_ctx_alloc_output {int stat_ctx_id; } ;
struct hwrm_stat_ctx_alloc_input {int stats_dma_addr; int update_period_ms; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; int dev; } ;
struct bnxt_cp_ring {int stats_ctx_id; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_stat_ctx_alloc_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_stat_ctx_alloc_input*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct bnxt_softc *VAR_3, struct bnxt_cp_ring *VAR_4,
    uint64_t VAR_5)
{
 struct hwrm_stat_ctx_alloc_input VAR_6 = {0};
 struct hwrm_stat_ctx_alloc_output *VAR_7;
 int VAR_8 = 0;

 if (VAR_4->stats_ctx_id != VAR_1) {
  FUNC_4(VAR_3->dev,
      "Attempt to re-allocate stats ctx %08x\n",
      VAR_4->stats_ctx_id);
  return VAR_0;
 }

 VAR_7 = (void *)VAR_3->hwrm_cmd_resp.idi_vaddr;
 FUNC_3(VAR_3, &VAR_6, VAR_2);

 VAR_6.update_period_ms = FUNC_5(1000);
 VAR_6.stats_dma_addr = FUNC_6(VAR_5);

 FUNC_0(VAR_3);
 VAR_8 = FUNC_2(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_8)
  goto fail;

 VAR_4->stats_ctx_id = FUNC_7(VAR_7->stat_ctx_id);

fail:
 FUNC_1(VAR_3);

 return VAR_8;
}
