
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_event {int id; } ;
struct TYPE_2__ {int channel; scalar_t__ connects_left; } ;


 int FUNC_0 (int ,struct rdma_cm_event*) ;
 int FUNC_1 (struct rdma_cm_event*) ;
 int FUNC_2 (int ,struct rdma_cm_event**) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct rdma_cm_event *VAR_1;
 int VAR_2 = 0;

 while (VAR_0.connects_left && !VAR_2) {
  VAR_2 = FUNC_2(VAR_0.channel, &VAR_1);
  if (!VAR_2) {
   VAR_2 = FUNC_0(VAR_1->id, VAR_1);
   FUNC_1(VAR_1);
  }
 }
 return VAR_2;
}
