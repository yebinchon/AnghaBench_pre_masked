
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {struct node* context; } ;
struct rdma_cm_event {int event; int status; } ;
struct node {int error; int id; int retries; } ;
struct list_head {struct rdma_cm_id* id; } ;
struct TYPE_2__ {int ai_dst_addr; int ai_src_addr; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct node*) ;
 int FUNC_2 (struct node*) ;
 int FUNC_3 (struct node*) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct list_head*) ;
 struct list_head* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_8 (struct rdma_cm_event*) ;
 int FUNC_9 (struct rdma_cm_id*) ;
 int FUNC_10 (struct rdma_cm_id*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (struct rdma_cm_id*,int *,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_2 ;
 int FUNC_15 (struct node*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_16(struct rdma_cm_id *VAR_4, struct rdma_cm_event *VAR_5)
{
 struct node *VAR_6 = VAR_4->context;
 struct list_head *VAR_7;

 switch (VAR_5->event) {
 case 137:
  FUNC_1(VAR_6);
  break;
 case 129:
  FUNC_15(VAR_6);
  break;
 case 135:
  VAR_7 = FUNC_5(sizeof *VAR_7);
  if (!VAR_7) {
   FUNC_6("out of memory accepting connect request");
   FUNC_12(VAR_4, ((void*)0), 0);
   FUNC_9(VAR_4);
  } else {
   FUNC_0(VAR_7);
   VAR_7->id = VAR_4;
   FUNC_4(&VAR_2, VAR_7);
  }
  break;
 case 132:
  if (VAR_6)
   FUNC_2(VAR_6);
  break;
 case 138:
  if (VAR_6->retries--) {
   if (!FUNC_13(VAR_6->id, VAR_1->ai_src_addr,
            VAR_1->ai_dst_addr, VAR_3))
    break;
  }
  FUNC_7("RDMA_CM_EVENT_ADDR_ERROR, error: %d\n", VAR_5->status);
  FUNC_1(VAR_6);
  VAR_6->error = 1;
  break;
 case 130:
  if (VAR_6->retries--) {
   if (!FUNC_14(VAR_6->id, VAR_3))
    break;
  }
  FUNC_7("RDMA_CM_EVENT_ROUTE_ERROR, error: %d\n", VAR_5->status);
  FUNC_15(VAR_6);
  VAR_6->error = 1;
  break;
 case 136:
 case 128:
 case 131:
  FUNC_7("event: %s, error: %d\n",
         FUNC_11(VAR_5->event), VAR_5->status);
  FUNC_2(VAR_6);
  VAR_6->error = 1;
  break;
 case 133:
  if (!VAR_6) {
   VAR_7 = FUNC_5(sizeof *VAR_7);
   if (!VAR_7) {
    FUNC_6("out of memory queueing disconnect request, handling synchronously");
    FUNC_10(VAR_4);
    FUNC_9(VAR_4);
   } else {
    FUNC_0(VAR_7);
    VAR_7->id = VAR_4;
    FUNC_4(&VAR_0, VAR_7);
   }
  } else
   FUNC_3(VAR_6);
  break;
 case 134:

  break;
 default:
  break;
 }
 FUNC_8(VAR_5);
}
