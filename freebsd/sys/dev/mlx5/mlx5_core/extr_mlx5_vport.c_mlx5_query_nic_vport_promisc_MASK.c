
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int promisc_all; int promisc_mc; int promisc_uc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int *,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct mlx5_core_dev *VAR_4,
     u16 VAR_5,
     int *VAR_6,
     int *VAR_7,
     int *VAR_8)
{
 u32 *VAR_9;
 int VAR_10 = FUNC_1(VAR_3);
 int VAR_11;

 VAR_9 = FUNC_3(VAR_10, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_9, VAR_10);
 if (VAR_11)
  goto out;

 *VAR_6 = FUNC_0(VAR_3, VAR_9,
          VAR_2.promisc_uc);
 *VAR_7 = FUNC_0(VAR_3, VAR_9,
          VAR_2.promisc_mc);
 *VAR_8 = FUNC_0(VAR_3, VAR_9,
    VAR_2.promisc_all);

out:
 FUNC_2(VAR_9);
 return VAR_11;
}
