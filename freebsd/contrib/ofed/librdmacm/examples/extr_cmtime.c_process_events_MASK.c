
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_event {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rdma_cm_event*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct rdma_cm_event**) ;

__attribute__((used)) static void *FUNC_3(void *VAR_2)
{
 struct rdma_cm_event *VAR_3;
 int VAR_4 = 0;

 while (!VAR_4) {
  VAR_4 = FUNC_2(VAR_0, &VAR_3);
  if (!VAR_4) {
   FUNC_0(VAR_3->id, VAR_3);
  } else {
   FUNC_1("failure in rdma_get_cm_event in process_server_events");
   VAR_4 = VAR_1;
  }
 }
 return ((void*)0);
}
