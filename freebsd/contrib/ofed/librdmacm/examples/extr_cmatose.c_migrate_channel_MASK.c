
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_event_channel {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
struct TYPE_4__ {struct rdma_event_channel* channel; TYPE_1__* nodes; } ;
struct TYPE_3__ {struct rdma_cm_id* cma_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct rdma_event_channel* FUNC_2 () ;
 int FUNC_3 (struct rdma_event_channel*) ;
 int FUNC_4 (struct rdma_cm_id*,struct rdma_event_channel*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rdma_cm_id *VAR_2)
{
 struct rdma_event_channel *VAR_3;
 int VAR_4, VAR_5;

 FUNC_1("migrating to new event channel\n");

 VAR_3 = FUNC_2();
 if (!VAR_3) {
  FUNC_0("cmatose: failed to create event channel");
  return -1;
 }

 VAR_5 = 0;
 if (VAR_2)
  VAR_5 = FUNC_4(VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0 && !VAR_5; VAR_4++)
  VAR_5 = FUNC_4(VAR_1.nodes[VAR_4].cma_id, VAR_3);

 if (!VAR_5) {
  FUNC_3(VAR_1.channel);
  VAR_1.channel = VAR_3;
 } else
  FUNC_0("cmatose: failure migrating to channel");

 return VAR_5;
}
