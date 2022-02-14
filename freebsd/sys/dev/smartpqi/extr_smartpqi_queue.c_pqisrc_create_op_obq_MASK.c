
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {scalar_t__ pci_mem_base_vaddr; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_20__ {int elem_size; scalar_t__ ci_register_offset; int * ci_register_abs; int num_elem; int pi_dma_addr; int array_dma_addr; int intr_msg_num; int q_id; } ;
typedef TYPE_6__ ob_queue_t ;
struct TYPE_17__ {int * status_desc; scalar_t__ ci_offset; } ;
struct TYPE_18__ {TYPE_3__ create_op_oq; } ;
struct TYPE_15__ {int elem_len; int intr_msg_num; int qid; int num_elem; int ob_pi_addr; int elem_arr_addr; } ;
struct TYPE_16__ {TYPE_1__ create_op_oq; } ;
struct TYPE_21__ {TYPE_4__ resp_type; TYPE_2__ req_type; int fn_code; } ;
typedef TYPE_7__ gen_adm_resp_iu_t ;
typedef TYPE_7__ gen_adm_req_iu_t ;
typedef int admin_resp ;
typedef int admin_req ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*,TYPE_7__*) ;

int FUNC_5(pqisrc_softstate_t *VAR_3,
   ob_queue_t *VAR_4)
{
 int VAR_5 = VAR_2;;
 gen_adm_req_iu_t VAR_6;
 gen_adm_resp_iu_t VAR_7;

 FUNC_0("IN\n");

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 VAR_6.fn_code = VAR_1;
 VAR_6.req_type.create_op_oq.qid = VAR_4->q_id;
 VAR_6.req_type.create_op_oq.intr_msg_num = VAR_4->intr_msg_num;
 VAR_6.req_type.create_op_oq.elem_arr_addr = VAR_4->array_dma_addr;
 VAR_6.req_type.create_op_oq.ob_pi_addr = VAR_4->pi_dma_addr;
 VAR_6.req_type.create_op_oq.num_elem = VAR_4->num_elem;
 VAR_6.req_type.create_op_oq.elem_len = VAR_4->elem_size / 16;

 FUNC_1("admin_req.req_type.create_op_oq.qid : %x\n",VAR_6.req_type.create_op_oq.qid);
 FUNC_1("admin_req.req_type.create_op_oq.intr_msg_num  : %x\n", VAR_6.req_type.create_op_oq.intr_msg_num );

 VAR_5 = FUNC_4(VAR_3, &VAR_6, &VAR_7);
 if( VAR_2 == VAR_5) {
  VAR_4->ci_register_offset = (VAR_0 +
    VAR_7.resp_type.create_op_oq.ci_offset);
  VAR_4->ci_register_abs = (uint32_t *)(VAR_3->pci_mem_base_vaddr +
    VAR_4->ci_register_offset);
     } else {
  int VAR_8 = 0;
  FUNC_2("Error Status Descriptors\n");
  for(VAR_8 = 0; VAR_8 < 4;VAR_8++)
   FUNC_2(" %x ",VAR_7.resp_type.create_op_oq.status_desc[VAR_8]);
 }

 FUNC_0("OUT ret : %d\n", VAR_5);

 return VAR_5;
}
