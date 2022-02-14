
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int port_guid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int,int ,int *,int) ;
 int * FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_3,
       u64 *VAR_4)
{
 u32 *VAR_5;
 int VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_5 = FUNC_4(VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, 1, 0, VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 *VAR_4 = FUNC_0(VAR_2, VAR_5,
    VAR_1.port_guid);

out:
 FUNC_2(VAR_5);
 return VAR_7;
}
