
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rdma_cm_id*,int *) ;
 int FUNC_3 (struct rdma_cm_id*,int *,int *) ;
 int FUNC_4 (struct rdma_cm_id*) ;
 int FUNC_5 (struct rdma_cm_id*,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct rdma_cm_id *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1, ((void*)0), &VAR_0);
 if (VAR_2) {
  FUNC_0("failure creating qp");
  goto err;
 }

 VAR_2 = FUNC_2(VAR_1, ((void*)0));
 if (VAR_2) {
  FUNC_0("failure accepting");
  goto err;
 }
 return;

err:
 FUNC_1("failing connection request\n");
 FUNC_5(VAR_1, ((void*)0), 0);
 FUNC_4(VAR_1);
 return;
}
