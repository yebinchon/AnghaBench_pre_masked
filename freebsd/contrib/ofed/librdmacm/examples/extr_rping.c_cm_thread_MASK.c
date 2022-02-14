
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int cm_channel; } ;
struct rdma_cm_event {int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rdma_cm_event*) ;
 int FUNC_3 (int ,struct rdma_cm_event**) ;
 int FUNC_4 (int ,struct rdma_cm_event*) ;

__attribute__((used)) static void *FUNC_5(void *VAR_0)
{
 struct rping_cb *VAR_1 = VAR_0;
 struct rdma_cm_event *VAR_2;
 int VAR_3;

 while (1) {
  VAR_3 = FUNC_3(VAR_1->cm_channel, &VAR_2);
  if (VAR_3) {
   FUNC_1("rdma_get_cm_event");
   FUNC_0(VAR_3);
  }
  VAR_3 = FUNC_4(VAR_2->id, VAR_2);
  FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_0(VAR_3);
 }
}
