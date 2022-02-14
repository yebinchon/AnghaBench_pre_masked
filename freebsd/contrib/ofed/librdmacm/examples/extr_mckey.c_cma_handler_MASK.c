
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {int context; } ;
struct TYPE_2__ {int ud; } ;
struct rdma_cm_event {int event; int status; TYPE_1__ param; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rdma_cm_id *VAR_0, struct rdma_cm_event *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->event) {
 case 132:
  VAR_2 = FUNC_0(VAR_0->context);
  break;
 case 129:
  VAR_2 = FUNC_2(VAR_0->context, &VAR_1->param.ud);
  break;
 case 133:
 case 128:
 case 130:
  FUNC_3("mckey: event: %s, error: %d\n",
         FUNC_4(VAR_1->event), VAR_1->status);
  FUNC_1();
  VAR_2 = VAR_1->status;
  break;
 case 131:

  break;
 default:
  break;
 }
 return VAR_2;
}
