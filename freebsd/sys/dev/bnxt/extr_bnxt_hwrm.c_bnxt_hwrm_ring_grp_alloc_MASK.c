
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct hwrm_ring_grp_alloc_output {int ring_group_id; } ;
struct hwrm_ring_grp_alloc_input {void* sc; void* ar; void* rr; void* cr; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; int dev; } ;
struct bnxt_grp_info {int grp_id; int stats_ctx; int ag_ring_id; int rx_ring_id; int cp_ring_id; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_ring_grp_alloc_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_ring_grp_alloc_input*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct bnxt_softc *VAR_3, struct bnxt_grp_info *VAR_4)
{
 struct hwrm_ring_grp_alloc_input VAR_5 = {0};
 struct hwrm_ring_grp_alloc_output *VAR_6;
 int VAR_7 = 0;

 if (VAR_4->grp_id != (uint16_t)VAR_1) {
  FUNC_4(VAR_3->dev,
      "Attempt to re-allocate ring group %04x\n", VAR_4->grp_id);
  return VAR_0;
 }

 VAR_6 = (void *)VAR_3->hwrm_cmd_resp.idi_vaddr;
 FUNC_3(VAR_3, &VAR_5, VAR_2);
 VAR_5.cr = FUNC_5(VAR_4->cp_ring_id);
 VAR_5.rr = FUNC_5(VAR_4->rx_ring_id);
 VAR_5.ar = FUNC_5(VAR_4->ag_ring_id);
 VAR_5.sc = FUNC_5(VAR_4->stats_ctx);

 FUNC_0(VAR_3);
 VAR_7 = FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  goto fail;

 VAR_4->grp_id = FUNC_6(VAR_6->ring_group_id);

fail:
 FUNC_1(VAR_3);
 return VAR_7;
}
