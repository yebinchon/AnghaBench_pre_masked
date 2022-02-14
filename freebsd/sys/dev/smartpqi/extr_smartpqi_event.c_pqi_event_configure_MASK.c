
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* op_ob_q; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
struct TYPE_14__ {int type; scalar_t__ zero; int length; int addr; } ;
struct TYPE_12__ {int comp_feature; scalar_t__ iu_length; } ;
struct TYPE_16__ {TYPE_3__ sg_desc; int buffer_length; int response_queue_id; TYPE_1__ header; } ;
typedef TYPE_5__ pqi_event_config_request_t ;
struct TYPE_17__ {int size; int dma_addr; } ;
typedef TYPE_6__ dma_mem_t ;
struct TYPE_13__ {int q_id; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_2(pqisrc_softstate_t *VAR_3 ,
                              pqi_event_config_request_t *VAR_4,
                              dma_mem_t *VAR_5)
{
        int VAR_6 = VAR_1;

 FUNC_0(" IN\n");

 VAR_4->header.comp_feature = 0x00;
 VAR_4->header.iu_length = sizeof(pqi_event_config_request_t) -
      VAR_0;


 VAR_4->response_queue_id = VAR_3->op_ob_q[0].q_id;
 VAR_4->buffer_length = VAR_5->size;
 VAR_4->sg_desc.addr = VAR_5->dma_addr;
 VAR_4->sg_desc.length = VAR_5->size;
 VAR_4->sg_desc.zero = 0;
 VAR_4->sg_desc.type = VAR_2;


 VAR_6 = FUNC_1(VAR_3,VAR_4);
 if(VAR_6)
  goto err_out;


 FUNC_0(" OUT\n");
 return VAR_6;

err_out:
 FUNC_0("Failed OUT\n");
 return VAR_6;
}
