
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int req_pending; size_t tag; } ;
typedef TYPE_1__ rcb_t ;
struct TYPE_12__ {int taglist; TYPE_1__* rcb; int * op_raid_ib_q; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_13__ {size_t request_id; } ;
typedef TYPE_3__ pqi_event_config_request_t ;
typedef int ib_queue_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;

int FUNC_7(pqisrc_softstate_t *VAR_3,
                                      pqi_event_config_request_t *VAR_4)
{
 int VAR_5 = VAR_2;
 ib_queue_t *VAR_6 = &VAR_3->op_raid_ib_q[0];
 rcb_t *VAR_7 = ((void*)0);

 FUNC_1(" IN\n");


 VAR_4->request_id = FUNC_3(&VAR_3->taglist);
 if (VAR_0 == VAR_4->request_id) {
  FUNC_0("Tag not available\n");
  VAR_5 = VAR_1;
  goto err_out;
 }

 VAR_7 = &VAR_3->rcb[VAR_4->request_id];
 VAR_7->req_pending = 1;
 VAR_7->tag = VAR_4->request_id;

 VAR_5 = FUNC_5(VAR_3, VAR_6, VAR_4);
 if (VAR_5 != VAR_2) {
  FUNC_0("  Unable to submit command\n");
  goto err_cmd;
 }

 VAR_5 = FUNC_6(VAR_3, VAR_7);
 if (VAR_5 != VAR_2) {
  FUNC_0("Management request timed out !!\n");
  goto err_cmd;
 }

 FUNC_2(VAR_7);
  FUNC_4(&VAR_3->taglist,VAR_4->request_id);
 FUNC_1("OUT\n");
 return VAR_5;

err_cmd:
 FUNC_2(VAR_7);
 FUNC_4(&VAR_3->taglist,VAR_4->request_id);
err_out:
 FUNC_1(" failed OUT : %d\n", VAR_5);
 return VAR_5;
}
