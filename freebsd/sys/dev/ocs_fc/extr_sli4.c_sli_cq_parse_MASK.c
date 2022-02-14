
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ port_type; int os; } ;
typedef TYPE_3__ sli4_t ;
struct TYPE_13__ {scalar_t__ is_mq; } ;
struct TYPE_14__ {TYPE_1__ flag; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
typedef TYPE_4__ sli4_queue_t ;
typedef int sli4_qentry_e ;
struct TYPE_17__ {scalar_t__ ae; } ;
typedef TYPE_5__ sli4_mcqe_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,TYPE_3__*,TYPE_4__*,int *,int *,int*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int *,int *,int*) ;

int32_t
FUNC_4(sli4_t *VAR_3, sli4_queue_t *VAR_4, uint8_t *VAR_5, sli4_qentry_e *VAR_6,
  uint16_t *VAR_7)
{
 int32_t VAR_8 = 0;

 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6) {
  FUNC_0(((void*)0), "bad parameters sli4=%p cq=%p cqe=%p etype=%p q_id=%p\n",
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  return -1;
 }

 if (VAR_4->u.flag.is_mq) {
  sli4_mcqe_t *VAR_9 = (void *)VAR_5;

  if (VAR_9->ae) {
   *VAR_6 = VAR_1;
  } else {
   *VAR_6 = VAR_2;
   VAR_8 = FUNC_2(VAR_9);
  }
  *VAR_7 = -1;
 } else if (VAR_0 == VAR_3->port_type) {
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 } else {
  FUNC_1(VAR_3->os, "implement CQE parsing type = %#x\n",
        VAR_3->port_type);
  VAR_8 = -1;
 }

 return VAR_8;
}
