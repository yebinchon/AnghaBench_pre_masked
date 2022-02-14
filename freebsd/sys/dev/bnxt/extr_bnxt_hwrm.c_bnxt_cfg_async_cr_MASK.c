
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwrm_func_vf_cfg_input {void* async_event_cr; void* enables; int member_0; void* fid; } ;
struct hwrm_func_cfg_input {void* async_event_cr; void* enables; int member_0; void* fid; } ;
struct TYPE_3__ {int phys_id; } ;
struct TYPE_4__ {TYPE_1__ ring; } ;
struct bnxt_softc {TYPE_2__ def_cp_ring; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnxt_softc*,struct hwrm_func_vf_cfg_input*,int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct bnxt_softc*,struct hwrm_func_vf_cfg_input*,int) ;

int
FUNC_5(struct bnxt_softc *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(VAR_4)) {
  struct hwrm_func_cfg_input VAR_6 = {0};

  FUNC_1(VAR_4, &VAR_6, VAR_0);

  VAR_6.fid = FUNC_2(0xffff);
  VAR_6.enables = FUNC_3(VAR_1);
  VAR_6.async_event_cr = FUNC_2(VAR_4->def_cp_ring.ring.phys_id);

  VAR_5 = FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6));
 }
 else {
  struct hwrm_func_vf_cfg_input VAR_7 = {0};

  FUNC_1(VAR_4, &VAR_7, VAR_2);

  VAR_7.enables = FUNC_3(VAR_3);
  VAR_7.async_event_cr = FUNC_2(VAR_4->def_cp_ring.ring.phys_id);

  VAR_5 = FUNC_4(VAR_4, &VAR_7, sizeof(VAR_7));
 }
 return VAR_5;
}
