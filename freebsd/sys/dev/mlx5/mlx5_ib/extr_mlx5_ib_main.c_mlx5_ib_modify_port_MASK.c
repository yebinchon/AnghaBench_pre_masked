
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int cap_mask_mutex; int mdev; } ;
struct ib_port_modify {int set_port_cap_mask; int clr_port_cap_mask; } ;
struct ib_port_attr {int port_cap_flags; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*,int ) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
          struct ib_port_modify *VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_5(VAR_1);
 struct ib_port_attr VAR_6;
 u32 VAR_7;
 int VAR_8;






 if (FUNC_0(VAR_1, VAR_2) == VAR_0)
  return 0;

 FUNC_3(&VAR_5->cap_mask_mutex);

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_6);
 if (VAR_8)
  goto out;

 VAR_7 = (VAR_6.port_cap_flags | VAR_4->set_port_cap_mask) &
  ~VAR_4->clr_port_cap_mask;

 VAR_8 = FUNC_2(VAR_5->mdev, VAR_2, VAR_7);

out:
 FUNC_4(&VAR_5->cap_mask_mutex);
 return VAR_8;
}
