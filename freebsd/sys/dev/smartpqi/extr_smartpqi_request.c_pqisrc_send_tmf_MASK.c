
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int tmf_req ;
struct TYPE_20__ {int req_pending; scalar_t__ status; int resp_qid; int tag; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_21__ {int * op_raid_ib_q; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_19__ {int iu_length; int iu_type; } ;
struct TYPE_22__ {int tmf; int req_id_to_manage; int obq_id_to_manage; int resp_qid; int lun; int req_id; TYPE_1__ header; } ;
typedef TYPE_4__ pqi_tmf_req_t ;
struct TYPE_23__ {int scsi3addr; } ;
typedef TYPE_5__ pqi_scsi_dev_t ;
typedef int iu_header_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_5__*,char*,int,scalar_t__) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

int FUNC_9(pqisrc_softstate_t *VAR_5, pqi_scsi_dev_t *VAR_6,
                    rcb_t *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = VAR_2;
 pqi_tmf_req_t VAR_11;

 FUNC_6(&VAR_11, 0, sizeof(pqi_tmf_req_t));

 FUNC_2("IN");

 VAR_11.header.iu_type = VAR_0;
 VAR_11.header.iu_length = sizeof(VAR_11) - sizeof(iu_header_t);
 VAR_11.req_id = VAR_7->tag;

 FUNC_5(VAR_11.lun, VAR_6->scsi3addr, sizeof(VAR_11.lun));
 VAR_11.tmf = VAR_9;
 VAR_11.req_id_to_manage = VAR_8;
 VAR_11.resp_qid = FUNC_4(VAR_5, VAR_7);
 VAR_11.obq_id_to_manage = VAR_7->resp_qid;

 VAR_7->req_pending = 1;

 VAR_10 = FUNC_7(VAR_5,
 &VAR_5->op_raid_ib_q[FUNC_3(VAR_5, VAR_7)], &VAR_11);
 if (VAR_10 != VAR_2) {
  FUNC_0("Unable to submit command rval=%d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_5, VAR_7);
 if (VAR_10 != VAR_2){
  FUNC_0("Task Management tmf_type : %d timeout\n", VAR_9);
  VAR_7->status = VAR_3;
 }

 if (VAR_7->status != VAR_4) {
  FUNC_1(VAR_6, "Task Management failed tmf_type:%d "
    "stat:0x%x\n", VAR_9, VAR_7->status);
  VAR_10 = VAR_1;
 }

 FUNC_2("OUT");
 return VAR_10;
}
