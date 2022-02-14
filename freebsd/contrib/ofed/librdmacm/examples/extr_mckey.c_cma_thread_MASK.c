
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_event {int event; int status; } ;
struct TYPE_2__ {int channel; } ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct rdma_cm_event*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,struct rdma_cm_event**) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void *FUNC_5(void *VAR_1)
{
 struct rdma_cm_event *VAR_2;
 int VAR_3;

 while (1) {
  VAR_3 = FUNC_4(VAR_0.channel, &VAR_2);
  if (VAR_3) {
   FUNC_0("rdma_get_cm_event");
   break;
  }

  switch (VAR_2->event) {
  case 128:
  case 129:
   FUNC_1("mckey: event: %s, status: %d\n",
          FUNC_3(VAR_2->event), VAR_2->status);
   break;
  default:
   break;
  }

  FUNC_2(VAR_2);
 }
 return ((void*)0);
}
