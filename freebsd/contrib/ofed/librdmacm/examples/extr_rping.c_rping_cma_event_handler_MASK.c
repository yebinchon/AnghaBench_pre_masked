
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int sem; void* state; int server; struct rdma_cm_id* child_cm_id; struct rdma_cm_id* cm_id; } ;
struct rdma_cm_id {struct rping_cb* context; } ;
struct rdma_cm_event {int event; int status; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,...) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct rdma_cm_id*,int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct rdma_cm_id *VAR_7,
        struct rdma_cm_event *VAR_8)
{
 int VAR_9 = 0;
 struct rping_cb *VAR_10 = VAR_7->context;

 FUNC_0("cma_event type %s cma_id %p (%s)\n",
    FUNC_3(VAR_8->event), VAR_7,
    (VAR_7 == VAR_10->cm_id) ? "parent" : "child");

 switch (VAR_8->event) {
 case 137:
  VAR_10->state = VAR_0;
  VAR_9 = FUNC_4(VAR_7, 2000);
  if (VAR_9) {
   VAR_10->state = VAR_4;
   FUNC_2("rdma_resolve_route");
   FUNC_5(&VAR_10->sem);
  }
  break;

 case 129:
  VAR_10->state = VAR_5;
  FUNC_5(&VAR_10->sem);
  break;

 case 135:
  VAR_10->state = VAR_2;
  VAR_10->child_cm_id = VAR_7;
  FUNC_0("child cma %p\n", VAR_10->child_cm_id);
  FUNC_5(&VAR_10->sem);
  break;

 case 132:
  FUNC_0("ESTABLISHED\n");




  if (!VAR_10->server) {
   VAR_10->state = VAR_1;
  }
  FUNC_5(&VAR_10->sem);
  break;

 case 138:
 case 130:
 case 136:
 case 128:
 case 131:
  FUNC_1(VAR_6, "cma event %s, error %d\n",
   FUNC_3(VAR_8->event), VAR_8->status);
  FUNC_5(&VAR_10->sem);
  VAR_9 = -1;
  break;

 case 133:
  FUNC_1(VAR_6, "%s DISCONNECT EVENT...\n",
   VAR_10->server ? "server" : "client");
  VAR_10->state = VAR_3;
  FUNC_5(&VAR_10->sem);
  break;

 case 134:
  FUNC_1(VAR_6, "cma detected device removal!!!!\n");
  VAR_10->state = VAR_4;
  FUNC_5(&VAR_10->sem);
  VAR_9 = -1;
  break;

 default:
  FUNC_1(VAR_6, "unhandled event: %s, ignoring\n",
   FUNC_3(VAR_8->event));
  break;
 }

 return VAR_9;
}
