
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;
typedef int in ;
struct TYPE_2__ {int promisc; } ;


 int * FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5(struct mlx5_core_dev *VAR_5, int VAR_6,
          bool VAR_7, bool VAR_8,
          bool VAR_9)
{
 u8 VAR_10[FUNC_2(VAR_1)];
 u8 *VAR_11 = FUNC_0(VAR_1, VAR_10,
          VAR_2);

 FUNC_3(VAR_10, 0, FUNC_2(VAR_1));

 FUNC_1(VAR_1, VAR_10, VAR_4, VAR_6);
 if (VAR_6)
  FUNC_1(VAR_1, VAR_10,
    VAR_3, 1);
 FUNC_1(VAR_1, VAR_10, VAR_0.promisc, 1);
 if (VAR_7)
  FUNC_1(VAR_2, VAR_11, VAR_7, 1);
 if (VAR_8)
  FUNC_1(VAR_2, VAR_11, VAR_8, 1);
 if (VAR_9)
  FUNC_1(VAR_2, VAR_11, VAR_9, 1);

 return FUNC_4(VAR_5, VAR_10, sizeof(VAR_10));
}
