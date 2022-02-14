
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct dma_mem {int dummy; } ;
typedef int request ;
struct TYPE_20__ {int num_event_descriptors; TYPE_2__* descriptors; } ;
struct TYPE_22__ {TYPE_3__ event_config; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_23__ {TYPE_4__* descriptors; int num_event_descriptors; } ;
typedef TYPE_6__ pqi_event_config_t ;
struct TYPE_18__ {int iu_type; } ;
struct TYPE_24__ {char* tag; int size; scalar_t__ virt_addr; TYPE_1__ header; scalar_t__ dma_addr; int align; } ;
typedef TYPE_7__ pqi_event_config_request_t ;
typedef TYPE_7__ dma_mem_t ;
struct TYPE_21__ {int event_type; } ;
struct TYPE_19__ {int event_type; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_7__*,int ,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_7__*,TYPE_7__*) ;

int FUNC_8(pqisrc_softstate_t *VAR_4)
{

 int VAR_5,VAR_6 ;
 pqi_event_config_request_t VAR_7;
 pqi_event_config_t *VAR_8 ;
 dma_mem_t VAR_9 ;

 uint32_t VAR_10 = sizeof(pqi_event_config_t) ;
 FUNC_4(&VAR_7, 0 , sizeof(VAR_7));

 FUNC_1(" IN\n");

 FUNC_4(&VAR_9, 0, sizeof(struct dma_mem));
 VAR_9.tag = "pqi_report_event_buf" ;
 VAR_9.size = VAR_10;
 VAR_9.align = VAR_0;


 VAR_5 = FUNC_5(VAR_4, &VAR_9);
 if (VAR_5) {
  FUNC_0("Failed to Allocate report event config buffer : %d\n", VAR_5);
  goto err_out;
 }
 FUNC_2("buf_report_event.dma_addr	= %p \n",(void*)VAR_9.dma_addr);
 FUNC_2("buf_report_event.virt_addr 	= %p \n",(void*)VAR_9.virt_addr);

 VAR_7.header.iu_type = VAR_2;


 VAR_5=FUNC_7(VAR_4,&VAR_7,&VAR_9);
 if(VAR_5)
  goto free_mem;


 VAR_8 = (pqi_event_config_t*)VAR_9.virt_addr;
 VAR_4->event_config.num_event_descriptors = FUNC_3(VAR_8->num_event_descriptors,
                                              VAR_1) ;

        for (VAR_6=0; VAR_6 < VAR_4->event_config.num_event_descriptors ;VAR_6++){
  VAR_4->event_config.descriptors[VAR_6].event_type =
     VAR_8->descriptors[VAR_6].event_type;
 }

 FUNC_6(VAR_4, &VAR_9);

 FUNC_1(" OUT\n");
 return VAR_5;

free_mem:
 FUNC_6(VAR_4, &VAR_9);
err_out:
 FUNC_1("Failed OUT\n");
 return VAR_3;
}
