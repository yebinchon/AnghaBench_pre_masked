
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int board_id; } ;
struct TYPE_2__ {int vsd_contd_psid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int *,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_7(struct mlx5_core_dev *VAR_3)
{
 u32 *VAR_4;
 int VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_4 = FUNC_4(VAR_5, VAR_0);

 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto out_out;

 FUNC_5(VAR_3->board_id,
        FUNC_0(VAR_1, VAR_4,
       VAR_2.vsd_contd_psid),
        FUNC_1(VAR_1,
     VAR_2.vsd_contd_psid));

out_out:
 FUNC_3(VAR_4);

 return VAR_6;
}
