
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hwrm_cfa_l2_filter_alloc_output {int flow_id; int l2_filter_id; } ;
struct hwrm_cfa_l2_filter_alloc_input {int l2_addr_mask; int l2_addr; int dst_id; void* enables; void* flags; int member_0; } ;
struct bnxt_vnic_info {int filter_id; void* flow_id; int id; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int ctx; TYPE_1__ hwrm_cmd_resp; int dev; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_cfa_l2_filter_alloc_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_cfa_l2_filter_alloc_input*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int,int) ;

int
FUNC_12(struct bnxt_softc *VAR_7, struct bnxt_vnic_info *VAR_8)
{
 struct hwrm_cfa_l2_filter_alloc_input VAR_9 = {0};
 struct hwrm_cfa_l2_filter_alloc_output *VAR_10;
 uint32_t VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_8->filter_id != -1) {
  FUNC_4(VAR_7->dev,
      "Attempt to re-allocate l2 ctx filter\n");
  return VAR_0;
 }

 VAR_10 = (void *)VAR_7->hwrm_cmd_resp.idi_vaddr;
 FUNC_3(VAR_7, &VAR_9, VAR_2);

 VAR_9.flags = FUNC_6(VAR_6);
 VAR_11 = VAR_4
     | VAR_5
     | VAR_3;
 VAR_9.enables = FUNC_6(VAR_11);
 VAR_9.dst_id = FUNC_5(VAR_8->id);
 FUNC_10(VAR_9.l2_addr, FUNC_7(FUNC_8(VAR_7->ctx)),
     VAR_1);
 FUNC_11(&VAR_9.l2_addr_mask, 0xff, sizeof(VAR_9.l2_addr_mask));

 FUNC_0(VAR_7);
 VAR_12 = FUNC_2(VAR_7, &VAR_9, sizeof(VAR_9));
 if (VAR_12)
  goto fail;

 VAR_8->filter_id = FUNC_9(VAR_10->l2_filter_id);
 VAR_8->flow_id = FUNC_9(VAR_10->flow_id);

fail:
 FUNC_1(VAR_7);
 return (VAR_12);
}
