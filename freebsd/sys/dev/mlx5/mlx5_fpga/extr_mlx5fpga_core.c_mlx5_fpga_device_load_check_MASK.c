
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_fpga_query {scalar_t__ image_status; int oper_image; int admin_image; } ;
struct mlx5_fpga_device {scalar_t__ image_status; int last_oper_image; int mdev; int last_admin_image; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_fpga_device*,char*,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,struct mlx5_fpga_query*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_fpga_device *VAR_4)
{
 struct mlx5_fpga_query VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_4(VAR_4->mdev, &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4, "Failed to query status: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_4->last_admin_image = VAR_5.admin_image;
 VAR_4->last_oper_image = VAR_5.oper_image;
 VAR_4->image_status = VAR_5.image_status;

 FUNC_3(VAR_4, "Status %u; Admin image %u; Oper image %u\n",
        VAR_5.image_status, VAR_5.admin_image, VAR_5.oper_image);


 VAR_7 = FUNC_0(VAR_4->mdev, VAR_7);
 if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
  return 0;

 if (VAR_5.image_status != VAR_3) {
  FUNC_1(VAR_4, "%s image failed to load; status %u\n",
         FUNC_2(VAR_4->last_oper_image),
         VAR_5.image_status);
  return -VAR_0;
 }

 return 0;
}
