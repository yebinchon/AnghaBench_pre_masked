
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint32_t ;
struct dma_mem {int dummy; } ;
typedef int request ;
struct TYPE_24__ {scalar_t__ q_id; } ;
struct TYPE_23__ {int num_event_descriptors; TYPE_3__* descriptors; } ;
struct TYPE_26__ {TYPE_5__ event_q; TYPE_4__ event_config; } ;
typedef TYPE_7__ pqisrc_softstate_t ;
struct TYPE_27__ {int num_event_descriptors; TYPE_6__* descriptors; } ;
typedef TYPE_8__ pqi_event_config_t ;
struct TYPE_21__ {scalar_t__ global_event_oq_id; } ;
struct TYPE_20__ {int iu_type; } ;
struct TYPE_28__ {char* tag; int size; scalar_t__ virt_addr; TYPE_2__ iu_specific; TYPE_1__ header; scalar_t__ dma_addr; int align; } ;
typedef TYPE_9__ pqi_event_config_request_t ;
typedef TYPE_9__ dma_mem_t ;
struct TYPE_25__ {scalar_t__ oq_id; int event_type; } ;
struct TYPE_22__ {int event_type; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int FUNC_4 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_7 (int ) ;

int FUNC_8(pqisrc_softstate_t *VAR_3)
{

 int VAR_4,VAR_5;
 pqi_event_config_request_t VAR_6;
 pqi_event_config_t *VAR_7;
 dma_mem_t VAR_8;

 uint32_t VAR_9 = sizeof(pqi_event_config_t);
 FUNC_3(&VAR_6, 0 , sizeof(VAR_6));

 FUNC_1(" IN\n");

  FUNC_3(&VAR_8, 0, sizeof(struct dma_mem));
 VAR_8.tag = "pqi_set_event_buf";
 VAR_8.size = VAR_9;
 VAR_8.align = VAR_0;


 VAR_4 = FUNC_4(VAR_3, &VAR_8);
 if (VAR_4) {
  FUNC_0("Failed to Allocate set event config buffer : %d\n", VAR_4);
  goto err_out;
 }

 FUNC_2("buf_set_event.dma_addr  	= %p\n",(void*)VAR_8.dma_addr);
 FUNC_2("buf_set_event.virt_addr 	= %p\n",(void*)VAR_8.virt_addr);

 VAR_6.header.iu_type = VAR_1;
 VAR_6.iu_specific.global_event_oq_id = VAR_3->event_q.q_id;



 VAR_7 = (pqi_event_config_t *)VAR_8.virt_addr;

 VAR_7->num_event_descriptors = VAR_3->event_config.num_event_descriptors;


 for (VAR_5=0; VAR_5 < VAR_3->event_config.num_event_descriptors ; VAR_5++){
  VAR_7->descriptors[VAR_5].event_type =
     VAR_3->event_config.descriptors[VAR_5].event_type;
  if( FUNC_7(VAR_7->descriptors[VAR_5].event_type) != -1)
   VAR_7->descriptors[VAR_5].oq_id = VAR_3->event_q.q_id;
  else
   VAR_7->descriptors[VAR_5].oq_id = 0;


 }

 VAR_4 = FUNC_6(VAR_3,&VAR_6,&VAR_8);
  if(VAR_4)
   goto free_mem;

 FUNC_5(VAR_3, &VAR_8);

 FUNC_1(" OUT\n");
 return VAR_4;

free_mem:
 FUNC_5(VAR_3, &VAR_8);
err_out:
 FUNC_1("Failed OUT\n");
 return VAR_2;

}
