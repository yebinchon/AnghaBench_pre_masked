
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ virt; } ;
struct TYPE_12__ {TYPE_6__ payload; int arg; int (* cb ) (int ,scalar_t__,int ,int ,int ) ;} ;
typedef TYPE_2__ uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ status; int response_length; } ;
struct TYPE_13__ {int page_data; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_res_common_read_transceiver_data_t ;
struct TYPE_14__ {int os; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef TYPE_2__ ocs_hw_sfp_cb_arg_t ;
typedef TYPE_6__ ocs_dma_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{

 ocs_hw_sfp_cb_arg_t *VAR_5 = VAR_4;
 ocs_dma_t *VAR_6 = ((void*)0);
 sli4_res_common_read_transceiver_data_t* VAR_7 = ((void*)0);
 uint32_t VAR_8;

 if (VAR_5) {
  VAR_6 = &(VAR_5->payload);
  if (VAR_5->cb) {
   VAR_7 = (sli4_res_common_read_transceiver_data_t*) VAR_6->virt;
   VAR_8 = VAR_7->hdr.response_length;
   if ((VAR_2 == 0) && VAR_7->hdr.status) {
    VAR_2 = VAR_7->hdr.status;
   }
   VAR_5->cb(VAR_1->os, VAR_2, VAR_8, VAR_7->page_data, VAR_5->arg);
  }

  FUNC_0(VAR_1->os, &VAR_5->payload);
  FUNC_1(VAR_1->os, VAR_5, sizeof(ocs_hw_sfp_cb_arg_t));
 }

 FUNC_1(VAR_1->os, VAR_3, VAR_0);
 return 0;
}
