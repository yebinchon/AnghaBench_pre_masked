
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_wol_filter_free_input {int wol_filter_id; int enables; int port_id; int member_0; } ;
struct TYPE_2__ {int port_id; } ;
struct bnxt_softc {int wol_filter_id; TYPE_1__ pf; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_wol_filter_free_input*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_wol_filter_free_input*,int) ;

int
FUNC_4(struct bnxt_softc *VAR_2)
{
 struct hwrm_wol_filter_free_input VAR_3 = {0};

 FUNC_0(VAR_2, &VAR_3, VAR_0);
 VAR_3.port_id = FUNC_1(VAR_2->pf.port_id);
 VAR_3.enables =
  FUNC_2(VAR_1);
 VAR_3.wol_filter_id = VAR_2->wol_filter_id;
 return FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3));
}
