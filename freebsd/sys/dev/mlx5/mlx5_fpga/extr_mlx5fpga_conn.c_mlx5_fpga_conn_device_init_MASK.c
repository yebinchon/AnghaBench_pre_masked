
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int key; } ;
struct TYPE_7__ {TYPE_2__* uar; int pdn; TYPE_4__ mkey; } ;
struct mlx5_fpga_device {int mdev; TYPE_1__ conn_res; } ;
struct TYPE_8__ {int index; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int ) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;

int FUNC_11(struct mlx5_fpga_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_9(VAR_0->mdev);
 if (VAR_1) {
  FUNC_6(VAR_0, "Failed to enable RoCE: %d\n", VAR_1);
  goto out;
 }

 VAR_0->conn_res.uar = FUNC_7(VAR_0->mdev);
 if (FUNC_0(VAR_0->conn_res.uar)) {
  VAR_1 = FUNC_1(VAR_0->conn_res.uar);
  FUNC_6(VAR_0, "get_uars_page failed, %d\n", VAR_1);
  goto err_roce;
 }
 FUNC_5(VAR_0, "Allocated UAR index %u\n",
        VAR_0->conn_res.uar->index);

 VAR_1 = FUNC_2(VAR_0->mdev, &VAR_0->conn_res.pdn);
 if (VAR_1) {
  FUNC_6(VAR_0, "alloc pd failed, %d\n", VAR_1);
  goto err_uar;
 }
 FUNC_5(VAR_0, "Allocated PD %u\n", VAR_0->conn_res.pdn);

 VAR_1 = FUNC_4(VAR_0->mdev, VAR_0->conn_res.pdn,
      &VAR_0->conn_res.mkey);
 if (VAR_1) {
  FUNC_6(VAR_0, "create mkey failed, %d\n", VAR_1);
  goto err_dealloc_pd;
 }
 FUNC_5(VAR_0, "Created mkey 0x%x\n", VAR_0->conn_res.mkey.key);

 return 0;

err_dealloc_pd:
 FUNC_3(VAR_0->mdev, VAR_0->conn_res.pdn);
err_uar:
 FUNC_10(VAR_0->mdev, VAR_0->conn_res.uar);
err_roce:
 FUNC_8(VAR_0->mdev);
out:
 return VAR_1;
}
