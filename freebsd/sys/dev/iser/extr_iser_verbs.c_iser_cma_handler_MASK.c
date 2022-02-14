
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct iser_conn* context; } ;
struct rdma_cm_event {int event; int status; } ;
struct iser_conn {int state_mutex; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ,struct iser_conn*,struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*,int) ;
 int FUNC_4 (struct rdma_cm_id*) ;
 int FUNC_5 (struct rdma_cm_id*) ;
 int FUNC_6 (struct rdma_cm_id*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct rdma_cm_id *VAR_0, struct rdma_cm_event *VAR_1)
{
 struct iser_conn *VAR_2;
 int VAR_3 = 0;

 VAR_2 = VAR_0->context;
 FUNC_1("event %d status %d conn %p id %p",
    VAR_1->event, VAR_1->status, VAR_0->context, VAR_0);

 FUNC_7(&VAR_2->state_mutex);
 switch (VAR_1->event) {
 case 136:
  FUNC_2(VAR_0);
  break;
 case 130:
  FUNC_6(VAR_0);
  break;
 case 133:
  FUNC_5(VAR_0);
  break;
 case 137:
 case 131:
 case 135:
 case 128:
 case 132:
  FUNC_4(VAR_0);
  break;
 case 134:
 case 138:
 case 129:
  FUNC_3(VAR_0, 0);
  break;
 default:
  FUNC_0("Unexpected RDMA CM event (%d)", VAR_1->event);
  break;
 }
 FUNC_8(&VAR_2->state_mutex);

 return (VAR_3);
}
