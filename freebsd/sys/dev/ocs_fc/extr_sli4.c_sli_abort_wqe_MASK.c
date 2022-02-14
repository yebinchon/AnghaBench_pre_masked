
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_4__ {int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_5__ {int ia; int ir; int cmd_type; void* cq_id; int qosd; void* request_tag; int command; void* t_tag; void* t_mask; int criteria; } ;
typedef TYPE_2__ sli4_abort_wqe_t ;
typedef int sli4_abort_type_e ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,void*,void*) ;
 int FUNC_2 (void*,int ,size_t) ;

int32_t
FUNC_3(sli4_t *VAR_6, void *VAR_7, size_t VAR_8, sli4_abort_type_e VAR_9, uint32_t VAR_10,
       uint32_t VAR_11, uint32_t VAR_12, uint16_t VAR_13, uint16_t VAR_14)
{
 sli4_abort_wqe_t *VAR_15 = VAR_7;

 FUNC_2(VAR_7, 0, VAR_8);

 switch (VAR_9) {
 case 128:
  VAR_15->criteria = VAR_2;
  if (VAR_12) {
   FUNC_1(VAR_6->os, "warning non-zero mask %#x when aborting XRI %#x\n", VAR_12, VAR_11);
   VAR_12 = 0;
  }
  break;
 case 130:
  VAR_15->criteria = VAR_0;
  break;
 case 129:
  VAR_15->criteria = VAR_1;
  break;
 default:
  FUNC_0(VAR_6->os, "unsupported type %#x\n", VAR_9);
  return -1;
 }

 VAR_15->ia = VAR_10 ? 0 : 1;


 VAR_15->ir = 1;

 VAR_15->t_mask = VAR_12;
 VAR_15->t_tag = VAR_11;
 VAR_15->command = VAR_4;
 VAR_15->request_tag = VAR_13;
 VAR_15->qosd = VAR_5;
 VAR_15->cq_id = VAR_14;
 VAR_15->cmd_type = VAR_3;

 return 0;
}
