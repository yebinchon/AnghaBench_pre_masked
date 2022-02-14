
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_event {int id; } ;
struct TYPE_2__ {int channel; scalar_t__ connects_left; } ;


 int FUNC_0 (int ,struct rdma_cm_event*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rdma_cm_event*) ;
 int FUNC_3 (int ,struct rdma_cm_event**) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct rdma_cm_event *VAR_2;
 int VAR_3 = 0;

 while (VAR_1.connects_left && !VAR_3) {
  VAR_3 = FUNC_3(VAR_1.channel, &VAR_2);
  if (!VAR_3) {
   VAR_3 = FUNC_0(VAR_2->id, VAR_2);
   FUNC_2(VAR_2);
  } else {
   FUNC_1("cmatose: failure in rdma_get_cm_event in connect events");
   VAR_3 = VAR_0;
  }
 }

 return VAR_3;
}
