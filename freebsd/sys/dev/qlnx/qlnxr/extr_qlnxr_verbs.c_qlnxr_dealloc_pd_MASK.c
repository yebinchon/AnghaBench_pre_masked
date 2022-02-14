
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_pd {int pd_id; } ;
struct qlnxr_dev {int pd_count; int rdma_ctx; int * ha; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 struct qlnxr_pd* FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (struct qlnxr_pd*) ;

int
FUNC_7(struct ib_pd *VAR_0)
{
 struct qlnxr_pd *VAR_1;
 struct qlnxr_dev *VAR_2;
 qlnx_host_t *VAR_3;

 VAR_1 = FUNC_5(VAR_0);
 VAR_2 = FUNC_4((VAR_0->device));
 VAR_3 = VAR_2->ha;

 FUNC_1(VAR_3, "enter\n");

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_3, "pd = NULL\n");
 } else {
  FUNC_3(VAR_2->rdma_ctx, VAR_1->pd_id);
  FUNC_6(VAR_1);
  FUNC_2(&VAR_2->pd_count, 1);
  FUNC_1(VAR_3, "exit [pd, pd_id, pd_count] = [%p, 0x%x, %d]\n",
   VAR_1, VAR_1->pd_id, VAR_2->pd_count);
 }

 FUNC_1(VAR_3, "exit\n");
 return 0;
}
