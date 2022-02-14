
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct hwrm_vnic_alloc_output {int vnic_id; } ;
struct hwrm_vnic_alloc_input {int flags; int member_0; } ;
struct bnxt_vnic_info {int flags; int id; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int dev; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_vnic_alloc_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_vnic_alloc_input*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct bnxt_softc *VAR_5, struct bnxt_vnic_info *VAR_6)
{
 struct hwrm_vnic_alloc_input VAR_7 = {0};
 struct hwrm_vnic_alloc_output *VAR_8 =
     (void *)VAR_5->hwrm_cmd_resp.idi_vaddr;
 int VAR_9;

 if (VAR_6->id != (uint16_t)VAR_2) {
  FUNC_4(VAR_5->dev,
      "Attempt to re-allocate vnic %04x\n", VAR_6->id);
  return VAR_1;
 }

 FUNC_3(VAR_5, &VAR_7, VAR_3);

 if (VAR_6->flags & VAR_0)
  VAR_7.flags = FUNC_5(VAR_4);

 FUNC_0(VAR_5);
 VAR_9 = FUNC_2(VAR_5, &VAR_7, sizeof(VAR_7));
 if (VAR_9)
  goto fail;

 VAR_6->id = FUNC_6(VAR_8->vnic_id);

fail:
 FUNC_1(VAR_5);
 return (VAR_9);
}
