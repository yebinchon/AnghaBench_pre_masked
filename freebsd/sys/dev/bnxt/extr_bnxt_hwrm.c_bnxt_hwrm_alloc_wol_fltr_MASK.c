
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hwrm_wol_filter_alloc_output {int wol_filter_id; } ;
struct hwrm_wol_filter_alloc_input {int mac_address; int enables; int wol_type; int port_id; int member_0; } ;
struct TYPE_5__ {int mac_addr; } ;
struct TYPE_4__ {int port_id; } ;
struct TYPE_6__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int wol_filter_id; TYPE_2__ func; TYPE_1__ pf; TYPE_3__ hwrm_cmd_resp; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_wol_filter_alloc_input*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_wol_filter_alloc_input*,int) ;
 int FUNC_4 (int ,int ,int ) ;

int
FUNC_5(struct bnxt_softc *VAR_4)
{
 struct hwrm_wol_filter_alloc_input VAR_5 = {0};
 struct hwrm_wol_filter_alloc_output *VAR_6 =
  (void *)VAR_4->hwrm_cmd_resp.idi_vaddr;
 int VAR_7;

 FUNC_0(VAR_4, &VAR_5, VAR_1);
 VAR_5.port_id = FUNC_1(VAR_4->pf.port_id);
 VAR_5.wol_type = VAR_3;
 VAR_5.enables =
  FUNC_2(VAR_2);
 FUNC_4(VAR_5.mac_address, VAR_4->func.mac_addr, VAR_0);
 VAR_7 = FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
 if (!VAR_7)
  VAR_4->wol_filter_id = VAR_6->wol_filter_id;

 return VAR_7;
}
