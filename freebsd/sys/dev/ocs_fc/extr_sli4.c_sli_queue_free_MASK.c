
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_23__ {scalar_t__ virt; } ;
struct TYPE_24__ {scalar_t__ if_type; int * os; TYPE_1__ bmbx; int port_type; } ;
typedef TYPE_2__ sli4_t ;
struct TYPE_25__ {int additional_status; int status; } ;
typedef TYPE_3__ sli4_res_hdr_t ;
struct TYPE_26__ {int type; struct TYPE_26__* id; int dma; int lock; } ;
typedef TYPE_4__ sli4_queue_t ;
typedef scalar_t__ (* sli4_destroy_q_fn_t ) (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;





 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,TYPE_2__*) ;
 int FUNC_3 (int *,char*,TYPE_2__*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,int ,TYPE_4__*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int32_t
FUNC_13(sli4_t *VAR_6, sli4_queue_t *VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 sli4_destroy_q_fn_t VAR_10 = ((void*)0);
 int32_t VAR_11 = -1;

 if (!VAR_6 || !VAR_7) {
  FUNC_3(((void*)0), "bad parameter sli4=%p q=%p\n", VAR_6, VAR_7);
  return -1;
 }

 if (VAR_8) {
  switch (VAR_7->type) {
  case 131:
   VAR_10 = FUNC_8;
   break;
  case 132:
   VAR_10 = FUNC_7;
   break;
  case 130:
   VAR_10 = FUNC_9;
   break;
  case 128:
   if (VAR_2 == VAR_6->port_type) {
    VAR_10 = FUNC_11;
   } else {

    FUNC_4(VAR_6->os, "unsupported WQ destroy\n");
    return -1;
   }
   break;
  case 129:
   if (VAR_2 == VAR_6->port_type) {
    VAR_10 = FUNC_10;
   } else {

    FUNC_4(VAR_6->os, "unsupported RQ destroy\n");
    return -1;
   }
   break;
  default:
   FUNC_4(VAR_6->os, "bad queue type %d\n",
     VAR_7->type);
   return -1;
  }






  if (VAR_1 == VAR_6->if_type) {
   VAR_10 = ((void*)0);
  }


  if (VAR_10 && VAR_10(VAR_6, VAR_6->bmbx.virt, VAR_0, VAR_7->id)) {
   sli4_res_hdr_t *VAR_12 = ((void*)0);

   if (FUNC_6(VAR_6)){
    FUNC_2(VAR_6->os, "bootstrap mailbox write fail destroy %s\n",
      VAR_3[VAR_7->type]);
   } else if (FUNC_12(VAR_6->bmbx.virt)) {
    FUNC_3(VAR_6->os, "bad status destroy %s\n", VAR_3[VAR_7->type]);
   } else {
    VAR_12 = (void *)((uint8_t *)VAR_6->bmbx.virt +
      FUNC_5(VAR_5, VAR_4));

    if (VAR_12->status) {
     FUNC_3(VAR_6->os, "bad destroy %s status=%#x addl=%#x\n",
       VAR_3[VAR_7->type],
       VAR_12->status, VAR_12->additional_status);
    } else {
     VAR_11 = 0;
    }
   }
  }
 }

 if (VAR_9) {
  FUNC_1(&VAR_7->lock);

  if (FUNC_0(VAR_6->os, &VAR_7->dma)) {
   FUNC_3(VAR_6->os, "%s queue ID %d free failed\n",
        VAR_3[VAR_7->type], VAR_7->id);
   VAR_11 = -1;
  }
 }

 return VAR_11;
}
