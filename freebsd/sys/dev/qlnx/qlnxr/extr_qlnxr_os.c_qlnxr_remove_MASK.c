
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int ibdev; int rdma_ctx; int dpi; scalar_t__ pd_count; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 scalar_t__ FUNC_1 (struct qlnxr_dev*) ;
 int FUNC_2 (int *,char*,int *,void*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qlnxr_dev*) ;
 int FUNC_8 (struct qlnxr_dev*,int ,int ) ;
 int FUNC_9 (struct qlnxr_dev*) ;
 int FUNC_10 (struct qlnxr_dev*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_3, void *VAR_4)
{
 struct qlnxr_dev *VAR_5;
 qlnx_host_t *VAR_6;

 VAR_5 = VAR_4;
 VAR_6 = VAR_3;

 if ((VAR_6 == ((void*)0)) || (VAR_5 == ((void*)0)))
  return (0);

 FUNC_2(VAR_6, "enter ha = %p qlnx_rdma_dev = %p pd_count = %d\n",
  VAR_6, VAR_4, VAR_5->pd_count);

 FUNC_8(VAR_5, VAR_2,
  VAR_1);

 if (FUNC_0(VAR_5)) {
  if (VAR_5->pd_count)
   return (VAR_0);
 }

 FUNC_6(&VAR_5->ibdev);

 if (FUNC_1(VAR_5)) {
  if (VAR_5->pd_count)
   return (VAR_0);
 }

 FUNC_3(VAR_5->rdma_ctx, VAR_5->dpi);
 FUNC_4(VAR_5->rdma_ctx);

 FUNC_9(VAR_5);

 FUNC_7(VAR_5);

 FUNC_10(VAR_5);
 FUNC_5(&VAR_5->ibdev);

 FUNC_2(VAR_6, "exit ha = %p qlnx_rdma_dev = %p\n", VAR_6, VAR_4);
 return (0);
}
