
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
typedef int sli4_t ;
struct TYPE_7__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_2__ u; void* buffer_length; } ;
struct TYPE_10__ {int lenloc; int xbl; int cq_id; int cmd_type; scalar_t__ xc; scalar_t__ qosd; void* sof; void* eof; void* request_tag; void* timer; int class; int command; scalar_t__ ct; scalar_t__ context_tag; scalar_t__ pu; void* xri_tag; void* frame_length; void** fc_header_2_5; void** fc_header_0_1; TYPE_3__ bde; int dbde; } ;
typedef TYPE_4__ sli4_send_frame_wqe_t ;
struct TYPE_11__ {int phys; } ;
typedef TYPE_5__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,size_t) ;

int32_t
FUNC_3(sli4_t *VAR_4, void *VAR_5, size_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint32_t *VAR_9,
     ocs_dma_t *VAR_10, uint32_t VAR_11, uint8_t VAR_12,
     uint16_t VAR_13, uint16_t VAR_14)
{
 sli4_send_frame_wqe_t *VAR_15 = VAR_5;

 FUNC_2(VAR_5, 0, VAR_6);

 VAR_15->dbde = VAR_3;
 VAR_15->bde.buffer_length = VAR_11;
 VAR_15->bde.u.data.buffer_address_low = FUNC_1(VAR_10->phys);
 VAR_15->bde.u.data.buffer_address_high = FUNC_0(VAR_10->phys);


 VAR_15->fc_header_0_1[0] = VAR_9[0];
 VAR_15->fc_header_0_1[1] = VAR_9[1];
 VAR_15->fc_header_2_5[0] = VAR_9[2];
 VAR_15->fc_header_2_5[1] = VAR_9[3];
 VAR_15->fc_header_2_5[2] = VAR_9[4];
 VAR_15->fc_header_2_5[3] = VAR_9[5];

 VAR_15->frame_length = VAR_11;

 VAR_15->xri_tag = VAR_13;
 VAR_15->pu = 0;
 VAR_15->context_tag = 0;


 VAR_15->ct = 0;
 VAR_15->command = VAR_2;
 VAR_15->class = VAR_1;
 VAR_15->timer = VAR_12;

 VAR_15->request_tag = VAR_14;
 VAR_15->eof = VAR_8;
 VAR_15->sof = VAR_7;

 VAR_15->qosd = 0;
 VAR_15->lenloc = 1;
 VAR_15->xc = 0;

 VAR_15->xbl = 1;

 VAR_15->cmd_type = VAR_0;
 VAR_15->cq_id = 0xffff;

 return 0;
}
