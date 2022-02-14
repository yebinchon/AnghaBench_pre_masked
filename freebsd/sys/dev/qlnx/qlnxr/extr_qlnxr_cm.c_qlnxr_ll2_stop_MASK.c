
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int gsi_ll2_handle; int ha; int rdma_ctx; int gsi_ll2_mac_address; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int *) ;

int
FUNC_4(struct qlnxr_dev *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->ha, "enter\n");

 if (VAR_0->gsi_ll2_handle == 0xFF)
  return 0;


 VAR_1 = FUNC_3(VAR_0->rdma_ctx,
     VAR_0->gsi_ll2_mac_address, ((void*)0));

 VAR_1 = FUNC_2(VAR_0->rdma_ctx,
   VAR_0->gsi_ll2_handle);

 FUNC_1(VAR_0->rdma_ctx, VAR_0->gsi_ll2_handle);

 VAR_0->gsi_ll2_handle = 0xFF;

 FUNC_0(VAR_0->ha, "exit rc = %d\n", VAR_1);
 return VAR_1;
}
