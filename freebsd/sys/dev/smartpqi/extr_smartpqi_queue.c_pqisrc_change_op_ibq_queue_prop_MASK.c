
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_12__ {int q_id; } ;
typedef TYPE_3__ ib_queue_t ;
struct TYPE_10__ {int vend_specific; int qid; } ;
struct TYPE_11__ {TYPE_1__ change_op_iq_prop; } ;
struct TYPE_13__ {TYPE_2__ req_type; int fn_code; } ;
typedef TYPE_4__ gen_adm_resp_iu_t ;
typedef TYPE_4__ gen_adm_req_iu_t ;
typedef int admin_resp ;
typedef int admin_req ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int *,TYPE_4__*,TYPE_4__*) ;

int FUNC_3(pqisrc_softstate_t *VAR_2,
   ib_queue_t *VAR_3, uint32_t VAR_4)
{
 int VAR_5 = VAR_1;;
 gen_adm_req_iu_t VAR_6;
 gen_adm_resp_iu_t VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 FUNC_0("IN\n");

 VAR_6.fn_code = VAR_0;
 VAR_6.req_type.change_op_iq_prop.qid = VAR_3->q_id;
 VAR_6.req_type.change_op_iq_prop.vend_specific = VAR_4;

 VAR_5 = FUNC_2(VAR_2, &VAR_6, &VAR_7);

 FUNC_0("OUT\n");
 return VAR_5;
}
