
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ocs_softc {int attached; } ;
typedef int ocs_scsi_del_target_reason_e ;
struct TYPE_11__ {TYPE_1__* sport; struct ocs_softc* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_12__ {int ldt; TYPE_4__* tgt; } ;
typedef TYPE_3__ ocs_fcport ;
struct TYPE_13__ {int gone_timer; int state; } ;
typedef TYPE_4__ ocs_fc_target_t ;
typedef int int32_t ;
struct TYPE_10__ {TYPE_3__* tgt_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (struct ocs_softc*,TYPE_3__*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct ocs_softc*,char*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;

int32_t
FUNC_5(ocs_node_t *VAR_3, ocs_scsi_del_target_reason_e VAR_4)
{
 struct ocs_softc *VAR_5 = VAR_3->ocs;
 ocs_fcport *VAR_6 = ((void*)0);
 ocs_fc_target_t *VAR_7 = ((void*)0);
 int32_t VAR_8;

 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_5,"OCS is NULL \n");
  return -1;
 }

 VAR_6 = VAR_3->sport->tgt_data;
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_5,"FCP is NULL \n");
  return -1;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_3);
 if (VAR_8 == -1) {
  FUNC_3(VAR_5,"target is invalid\n");
  return -1;
 }

 VAR_7 = &VAR_6->tgt[VAR_8];


 if(!VAR_5->attached) {
  FUNC_2(VAR_5, VAR_6, VAR_8);
 } else {

  VAR_7->state = VAR_0;
  VAR_7->gone_timer = 30;
  if (!FUNC_0(&VAR_6->ldt)) {
   FUNC_1(&VAR_6->ldt, VAR_1, VAR_2, VAR_6);
  }
 }

 return 0;
}
