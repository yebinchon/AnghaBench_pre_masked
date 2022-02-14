
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int context; } ;
struct rdma_cm_event {int event; int status; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ,struct rdma_cm_event*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rdma_cm_id *VAR_0, struct rdma_cm_event *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->event) {
 case 136:
  VAR_2 = FUNC_0(VAR_0->context);
  break;
 case 129:
  VAR_2 = FUNC_6(VAR_0->context);
  break;
 case 134:
  VAR_2 = FUNC_2(VAR_0);
  break;
 case 132:
  VAR_2 = FUNC_5(VAR_0->context, VAR_1);
  break;
 case 137:
 case 130:
 case 135:
 case 128:
 case 131:
  FUNC_3("udaddy: event: %s, error: %d\n",
         FUNC_4(VAR_1->event), VAR_1->status);
  FUNC_1();
  VAR_2 = VAR_1->status;
  break;
 case 133:

  break;
 default:
  break;
 }
 return VAR_2;
}
