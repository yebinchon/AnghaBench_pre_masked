
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct hwrm_vnic_rss_cos_lb_ctx_alloc_output {int rss_cos_lb_ctx_id; } ;
struct hwrm_vnic_rss_cos_lb_ctx_alloc_input {int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int dev; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_vnic_rss_cos_lb_ctx_alloc_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_vnic_rss_cos_lb_ctx_alloc_input*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_3, uint16_t *VAR_4)
{
 struct hwrm_vnic_rss_cos_lb_ctx_alloc_input VAR_5 = {0};
 struct hwrm_vnic_rss_cos_lb_ctx_alloc_output *VAR_6 =
     (void *)VAR_3->hwrm_cmd_resp.idi_vaddr;
 int VAR_7;

 if (*VAR_4 != (uint16_t)VAR_1) {
  FUNC_4(VAR_3->dev,
      "Attempt to re-allocate vnic ctx %04x\n", *VAR_4);
  return VAR_0;
 }

 FUNC_3(VAR_3, &VAR_5, VAR_2);

 FUNC_0(VAR_3);
 VAR_7 = FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  goto fail;

 *VAR_4 = FUNC_5(VAR_6->rss_cos_lb_ctx_id);

fail:
 FUNC_1(VAR_3);
 return (VAR_7);
}
