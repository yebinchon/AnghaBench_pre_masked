
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {struct ibv_cq* cq; int channel; } ;
struct ibv_cq {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ibv_cq*,int) ;
 int FUNC_3 (int ,struct ibv_cq**,void**) ;
 int FUNC_4 (struct ibv_cq*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct rping_cb*) ;
 int VAR_0 ;

__attribute__((used)) static void *FUNC_8(void *VAR_1)
{
 struct rping_cb *VAR_2 = VAR_1;
 struct ibv_cq *VAR_3;
 void *VAR_4;
 int VAR_5;

 FUNC_0("cq_thread started.\n");

 while (1) {
  FUNC_6();

  VAR_5 = FUNC_3(VAR_2->channel, &VAR_3, &VAR_4);
  if (VAR_5) {
   FUNC_1(VAR_0, "Failed to get cq event!\n");
   FUNC_5(((void*)0));
  }
  if (VAR_3 != VAR_2->cq) {
   FUNC_1(VAR_0, "Unknown CQ!\n");
   FUNC_5(((void*)0));
  }
  VAR_5 = FUNC_4(VAR_2->cq, 0);
  if (VAR_5) {
   FUNC_1(VAR_0, "Failed to set notify!\n");
   FUNC_5(((void*)0));
  }
  VAR_5 = FUNC_7(VAR_2);
  FUNC_2(VAR_2->cq, 1);
  if (VAR_5)
   FUNC_5(((void*)0));
 }
}
