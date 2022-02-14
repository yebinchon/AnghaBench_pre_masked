
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {scalar_t__ context; } ;
struct rdma_cm_event {int event; int status; } ;
struct cmatest_node {int connected; } ;
struct TYPE_2__ {int disconnects_left; int connects_left; } ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct rdma_cm_id*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_7(struct rdma_cm_id *VAR_1, struct rdma_cm_event *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->event) {
 case 137:
  VAR_3 = FUNC_0(VAR_1->context);
  break;
 case 129:
  VAR_3 = FUNC_6(VAR_1->context);
  break;
 case 135:
  VAR_3 = FUNC_2(VAR_1);
  break;
 case 132:
  ((struct cmatest_node *) VAR_1->context)->connected = 1;
  VAR_0.connects_left--;
  VAR_0.disconnects_left++;
  break;
 case 138:
 case 130:
 case 136:
 case 128:
 case 131:
  FUNC_3("cmatose: event: %s, error: %d\n",
         FUNC_5(VAR_2->event), VAR_2->status);
  FUNC_1();
  VAR_3 = VAR_2->status;
  break;
 case 133:
  FUNC_4(VAR_1);
  VAR_0.disconnects_left--;
  break;
 case 134:

  break;
 default:
  break;
 }
 return VAR_3;
}
