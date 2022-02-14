
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_23__ {int virt; } ;
struct TYPE_24__ {int os; TYPE_3__ bmbx; int if_type; int port_type; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_21__ {int is_mq; } ;
struct TYPE_22__ {TYPE_1__ flag; } ;
struct TYPE_25__ {int ulp; int id; int dma; TYPE_2__ u; } ;
typedef TYPE_5__ sli4_queue_t ;
typedef scalar_t__ (* sli4_create_q_fn_t ) (TYPE_4__*,int ,int ,int *,int ,int ) ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;




 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*,int,int,int,int) ;
 int FUNC_2 (int ,char*,TYPE_4__*,...) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int) ;

int32_t
FUNC_10(sli4_t *VAR_6, uint32_t VAR_7, sli4_queue_t *VAR_8, uint32_t VAR_9,
  sli4_queue_t *VAR_10, uint16_t VAR_11)
{
 int32_t VAR_12;
 uint32_t VAR_13 = 0;
 sli4_create_q_fn_t VAR_14 = ((void*)0);

 if (!VAR_6 || !VAR_8) {
  FUNC_2(((void*)0), "bad parameter sli4=%p q=%p\n", VAR_6, VAR_8);
  return -1;
 }


 VAR_12 = FUNC_9(VAR_6, VAR_7);
 if (VAR_12 < 0)
  return -1;
 VAR_13 = VAR_3;

 switch (VAR_7) {
 case 130:
  VAR_14 = FUNC_5;
  break;
 case 131:
  VAR_14 = FUNC_4;
  break;
 case 129:

  switch (VAR_9) {
  case 16:
  case 32:
  case 64:
  case 128:
   break;
  default:
   FUNC_3(VAR_6->os, "illegal n_entries value %d for MQ\n", VAR_9);
   return -1;
  }
  VAR_10->u.flag.is_mq = VAR_5;
  VAR_14 = FUNC_6;
  break;
 case 128:
  if (VAR_2 == VAR_6->port_type) {
   if (VAR_6->if_type == VAR_1) {
    VAR_14 = FUNC_7;
   } else {
    VAR_14 = FUNC_8;
   }
  } else {

   FUNC_3(VAR_6->os, "unsupported WQ create\n");
   return -1;
  }
  break;
 default:
  FUNC_3(VAR_6->os, "unknown queue type %d\n", VAR_7);
  return -1;
 }


 if (FUNC_1(VAR_6, VAR_8, VAR_7, VAR_12, VAR_9, VAR_13)) {
  FUNC_2(VAR_6->os, "%s allocation failed\n", VAR_4[VAR_7]);
  return -1;
 }

 if (VAR_14(VAR_6, VAR_6->bmbx.virt, VAR_0, &VAR_8->dma, VAR_10 ? VAR_10->id : 0, VAR_11)) {

  if (FUNC_0(VAR_6, VAR_8)) {
   FUNC_2(VAR_6->os, "create %s failed\n", VAR_4[VAR_7]);
   return -1;
  }
  VAR_8->ulp = VAR_11;
 } else {
  FUNC_2(VAR_6->os, "cannot create %s\n", VAR_4[VAR_7]);
  return -1;
 }

 return 0;
}
