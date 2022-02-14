
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct dma_mem {int dummy; } ;
struct TYPE_27__ {int intr_coales_time_granularity; int max_oq_elem_len; int max_oq_elements; int max_oqs; int min_iq_elem_len; int max_iq_elem_len; int max_iq_elements; int max_iqs; } ;
struct TYPE_28__ {int ob_spanning_supported; int ib_spanning_supported; int max_ib_iu_length_per_fw; TYPE_4__ pqi_dev_cap; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_29__ {int ob_spanning_supported; int ib_spanning_supported; int max_ib_iu_len; } ;
typedef TYPE_6__ pqi_iu_layer_desc_t ;
struct TYPE_30__ {TYPE_6__* iu_layer_desc; int intr_coales_time_granularity; int max_oq_elem_len; int max_oq_elements; int max_oqs; int min_iq_elem_len; int max_iq_elem_len; int max_iq_elements; int max_iqs; } ;
typedef TYPE_7__ pqi_dev_cap_t ;
struct TYPE_24__ {int type; int addr; int length; } ;
struct TYPE_25__ {TYPE_1__ sg_desc; int buf_size; } ;
struct TYPE_26__ {TYPE_2__ general_func; } ;
struct TYPE_31__ {char* tag; int size; int virt_addr; TYPE_3__ req_type; int dma_addr; int fn_code; int align; } ;
typedef TYPE_8__ gen_adm_resp_iu_t ;
typedef TYPE_8__ gen_adm_req_iu_t ;
typedef TYPE_8__ dma_mem_t ;
typedef int admin_resp ;
typedef int admin_req ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_8__*,int ,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_8__*) ;
 TYPE_7__* FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,void*,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_8__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_10(pqisrc_softstate_t *VAR_7)
{
 int VAR_8 = VAR_4;

 FUNC_1("IN\n");

 gen_adm_req_iu_t VAR_9;
 gen_adm_resp_iu_t VAR_10;
 dma_mem_t VAR_11;
 pqi_dev_cap_t *VAR_12 = ((void*)0);
 pqi_iu_layer_desc_t *VAR_13 = ((void*)0);


 VAR_12 = FUNC_7(VAR_7, sizeof(*VAR_12));
 if (!VAR_12) {
  FUNC_0("Failed to allocate memory for capability\n");
  VAR_8 = VAR_3;
  goto err_out;
 }

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 FUNC_4(&VAR_11, 0, sizeof(struct dma_mem));
 VAR_11.tag = "pqi_cap_buf";
 VAR_11.size = VAR_5;
 VAR_11.align = VAR_0;

 VAR_8 = FUNC_5(VAR_7, &VAR_11);
 if (VAR_8) {
  FUNC_0("Failed to allocate capability DMA buffer : %d\n", VAR_8);
  goto err_dma_alloc;
 }

 VAR_9.fn_code = VAR_1;
 VAR_9.req_type.general_func.buf_size = VAR_11.size;
 VAR_9.req_type.general_func.sg_desc.length = VAR_11.size;
 VAR_9.req_type.general_func.sg_desc.addr = VAR_11.dma_addr;
 VAR_9.req_type.general_func.sg_desc.type = VAR_6;

 VAR_8 = FUNC_9(VAR_7, &VAR_9, &VAR_10);
 if( VAR_4 == VAR_8) {
                FUNC_3(VAR_12,
   VAR_11.virt_addr,
   VAR_11.size);
 } else {
  FUNC_0("Failed to send admin req report pqi device capability\n");
  goto err_admin_req;

 }

 VAR_7->pqi_dev_cap.max_iqs = VAR_12->max_iqs;
 VAR_7->pqi_dev_cap.max_iq_elements = VAR_12->max_iq_elements;
 VAR_7->pqi_dev_cap.max_iq_elem_len = VAR_12->max_iq_elem_len;
 VAR_7->pqi_dev_cap.min_iq_elem_len = VAR_12->min_iq_elem_len;
 VAR_7->pqi_dev_cap.max_oqs = VAR_12->max_oqs;
 VAR_7->pqi_dev_cap.max_oq_elements = VAR_12->max_oq_elements;
 VAR_7->pqi_dev_cap.max_oq_elem_len = VAR_12->max_oq_elem_len;
 VAR_7->pqi_dev_cap.intr_coales_time_granularity = VAR_12->intr_coales_time_granularity;

 VAR_13 = &VAR_12->iu_layer_desc[VAR_2];
 VAR_7->max_ib_iu_length_per_fw = VAR_13->max_ib_iu_len;
 VAR_7->ib_spanning_supported = VAR_13->ib_spanning_supported;
 VAR_7->ob_spanning_supported = VAR_13->ob_spanning_supported;

 FUNC_2("softs->pqi_dev_cap.max_iqs: %d\n", VAR_7->pqi_dev_cap.max_iqs);
 FUNC_2("softs->pqi_dev_cap.max_iq_elements: %d\n", VAR_7->pqi_dev_cap.max_iq_elements);
 FUNC_2("softs->pqi_dev_cap.max_iq_elem_len: %d\n", VAR_7->pqi_dev_cap.max_iq_elem_len);
 FUNC_2("softs->pqi_dev_cap.min_iq_elem_len: %d\n", VAR_7->pqi_dev_cap.min_iq_elem_len);
 FUNC_2("softs->pqi_dev_cap.max_oqs: %d\n", VAR_7->pqi_dev_cap.max_oqs);
 FUNC_2("softs->pqi_dev_cap.max_oq_elements: %d\n", VAR_7->pqi_dev_cap.max_oq_elements);
 FUNC_2("softs->pqi_dev_cap.max_oq_elem_len: %d\n", VAR_7->pqi_dev_cap.max_oq_elem_len);
 FUNC_2("softs->pqi_dev_cap.intr_coales_time_granularity: %d\n", VAR_7->pqi_dev_cap.intr_coales_time_granularity);
 FUNC_2("softs->max_ib_iu_length_per_fw: %d\n", VAR_7->max_ib_iu_length_per_fw);
 FUNC_2("softs->ib_spanning_supported: %d\n", VAR_7->ib_spanning_supported);
 FUNC_2("softs->ob_spanning_supported: %d\n", VAR_7->ob_spanning_supported);


 FUNC_8(VAR_7, (void *)VAR_12,
      VAR_5);
 FUNC_6(VAR_7, &VAR_11);

 FUNC_1("OUT\n");
 return VAR_8;

err_admin_req:
 FUNC_6(VAR_7, &VAR_11);
err_dma_alloc:
 if (VAR_12)
  FUNC_8(VAR_7, (void *)VAR_12,
       VAR_5);
err_out:
 FUNC_1("failed OUT\n");
 return VAR_3;
}
