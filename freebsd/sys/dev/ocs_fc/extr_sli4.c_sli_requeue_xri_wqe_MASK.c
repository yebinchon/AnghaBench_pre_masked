
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int sli4_t ;
struct TYPE_2__ {int xc; int qosd; int cmd_type; void* cq_id; void* request_tag; void* xri_tag; int command; } ;
typedef TYPE_1__ sli4_requeue_xri_wqe_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_2, void *VAR_3, size_t VAR_4, uint16_t VAR_5, uint16_t VAR_6, uint16_t VAR_7)
{
 sli4_requeue_xri_wqe_t *VAR_8 = VAR_3;

 FUNC_0(VAR_3, 0, VAR_4);

 VAR_8->command = VAR_1;
 VAR_8->xri_tag = VAR_5;
 VAR_8->request_tag = VAR_6;
 VAR_8->xc = 1;
 VAR_8->qosd = 1;
 VAR_8->cq_id = VAR_7;
 VAR_8->cmd_type = VAR_0;
 return 0;
}
