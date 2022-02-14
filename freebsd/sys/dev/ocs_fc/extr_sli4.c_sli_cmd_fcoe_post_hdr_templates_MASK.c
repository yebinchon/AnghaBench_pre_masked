
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_15__ {TYPE_1__* extent; } ;
struct TYPE_18__ {TYPE_2__ config; int os; } ;
typedef TYPE_5__ sli4_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_16__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_19__ {int page_count; TYPE_4__* page_descriptor; scalar_t__ rpi_offset; TYPE_3__ hdr; } ;
typedef TYPE_6__ sli4_req_fcoe_post_hdr_templates_t ;
typedef int sli4_physical_page_descriptor_t ;
struct TYPE_20__ {uintptr_t phys; scalar_t__ virt; int size; } ;
typedef TYPE_7__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_17__ {int high; int low; } ;
struct TYPE_14__ {scalar_t__* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 scalar_t__ FUNC_2 (int ,TYPE_7__*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*,void*,size_t,int,TYPE_7__*) ;
 int FUNC_5 (int ,scalar_t__) ;

int32_t
FUNC_6(sli4_t *VAR_5, void *VAR_6, size_t VAR_7,
  ocs_dma_t *VAR_8, uint16_t VAR_9, ocs_dma_t *VAR_10)
{
 sli4_req_fcoe_post_hdr_templates_t *VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;
 uintptr_t VAR_13 = 0;
 uint32_t VAR_14 = 0;
 uint32_t VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_5(VAR_8->size, VAR_2);

 VAR_16 = sizeof(sli4_req_fcoe_post_hdr_templates_t) +
    VAR_15 * sizeof(sli4_physical_page_descriptor_t);

 if (VAR_15 > 16) {


  if (FUNC_2(VAR_5->os, VAR_10, VAR_16, 4)) {
   FUNC_3(VAR_5->os, "mailbox payload memory allocation fail\n");
   return 0;
  }
  VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_16, VAR_10);
  VAR_11 = (sli4_req_fcoe_post_hdr_templates_t *)VAR_10->virt;
 } else {
  VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_16, ((void*)0));
  VAR_11 = (sli4_req_fcoe_post_hdr_templates_t *)((uint8_t *)VAR_6 + VAR_12);
 }

 if (VAR_4 == VAR_9) {
  VAR_9 = VAR_5->config.extent[VAR_3].base[0];
 }

 VAR_11->hdr.opcode = VAR_0;
 VAR_11->hdr.subsystem = VAR_1;
 VAR_11->hdr.request_length = sizeof(sli4_req_fcoe_post_hdr_templates_t) -
     sizeof(sli4_req_hdr_t);

 VAR_11->rpi_offset = VAR_9;
 VAR_11->page_count = VAR_15;
 VAR_13 = VAR_8->phys;
 for (VAR_14 = 0; VAR_14 < VAR_11->page_count; VAR_14++) {
  VAR_11->page_descriptor[VAR_14].low = FUNC_1(VAR_13);
  VAR_11->page_descriptor[VAR_14].high = FUNC_0(VAR_13);

  VAR_13 += VAR_2;
 }

 return(VAR_12 + VAR_16);
}
