
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int uint16_t ;
struct TYPE_19__ {int* pi_virt_addr; int ci_local; int elem_size; int num_elem; int ci_register_offset; int ci_register_abs; scalar_t__ array_virt_addr; } ;
struct TYPE_18__ {int taglist; TYPE_12__* rcb; int admin_ib_queue; TYPE_4__ admin_ob_queue; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
typedef TYPE_4__ ob_queue_t ;
typedef int ib_queue_t ;
struct TYPE_17__ {scalar_t__ iu_type; } ;
struct TYPE_20__ {scalar_t__ fn_code; int status; TYPE_2__ header; } ;
typedef TYPE_5__ gen_adm_resp_iu_t ;
struct TYPE_16__ {int comp_feature; int iu_length; int iu_type; } ;
struct TYPE_21__ {size_t req_id; scalar_t__ fn_code; scalar_t__ work; scalar_t__ res1; TYPE_1__ header; } ;
typedef TYPE_6__ gen_adm_req_iu_t ;
struct TYPE_15__ {size_t tag; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 size_t VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_5__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_12__*) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (TYPE_3__*,int *,TYPE_6__*) ;

int FUNC_11(pqisrc_softstate_t *VAR_8,
   gen_adm_req_iu_t *VAR_9, gen_adm_resp_iu_t *VAR_10)
{
 int VAR_11 = VAR_6;
 ob_queue_t *VAR_12 = &VAR_8->admin_ob_queue;
 ib_queue_t *VAR_13 = &VAR_8->admin_ib_queue;
 int VAR_14 = VAR_1;

 FUNC_3("IN\n");

 VAR_9->header.iu_type =
  VAR_2;
 VAR_9->header.comp_feature = 0x00;
 VAR_9->header.iu_length = VAR_4;
 VAR_9->res1 = 0;
 VAR_9->work = 0;


 VAR_9->req_id = FUNC_8(&VAR_8->taglist);
 if (VAR_0 == VAR_9->req_id) {
  FUNC_2("Tag not available0x%x\n",(uint16_t)VAR_9->req_id);
  VAR_11 = VAR_5;
  goto err_out;
 }
 VAR_8->rcb[VAR_9->req_id].tag = VAR_9->req_id;


 VAR_11 = FUNC_10(VAR_8, VAR_13, VAR_9);
 if (VAR_11 != VAR_6) {
  FUNC_2("Unable to submit command\n");
  goto err_cmd;
 }


 FUNC_1((*(VAR_12->pi_virt_addr) != VAR_12->ci_local), VAR_14);
 if (VAR_14 <= 0) {
  FUNC_2("Admin cmd timeout\n");
  FUNC_2("tmo : %d\n",VAR_14); VAR_11 = VAR_7;

  goto err_cmd;
 }


 FUNC_6(VAR_10, VAR_12->array_virt_addr + (VAR_12->ci_local * VAR_12->elem_size),
     sizeof(gen_adm_resp_iu_t));


 VAR_12->ci_local = (VAR_12->ci_local + 1 ) % VAR_12->num_elem;
 FUNC_5(VAR_8, VAR_12->ci_register_abs,
        VAR_12->ci_register_offset, FUNC_4(VAR_12->ci_local));


 FUNC_0(VAR_9->fn_code == VAR_10->fn_code);
 FUNC_0(VAR_10->header.iu_type == VAR_3);
 VAR_11 = VAR_10->status;
 if (VAR_11)
  goto err_cmd;

 FUNC_7(&VAR_8->rcb[VAR_9->req_id]);
 FUNC_9(&VAR_8->taglist,VAR_9->req_id);
 FUNC_3("OUT\n");
 return VAR_11;
err_cmd:
 FUNC_7(&VAR_8->rcb[VAR_9->req_id]);
 FUNC_9(&VAR_8->taglist,VAR_9->req_id);
err_out:
 FUNC_3("failed OUT : %d\n", VAR_11);
 return VAR_11;
}
