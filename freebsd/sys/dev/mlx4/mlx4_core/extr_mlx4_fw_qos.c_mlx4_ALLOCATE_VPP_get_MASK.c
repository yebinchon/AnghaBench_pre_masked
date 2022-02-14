
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_alloc_vpp_param* buf; } ;
struct mlx4_alloc_vpp_param {int * vpp_p_up; int availible_vpp; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_5, u8 VAR_6,
     u16 *VAR_7, u8 *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct mlx4_cmd_mailbox *VAR_11;
 struct mlx4_alloc_vpp_param *VAR_12;

 VAR_11 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = VAR_11->buf;

 VAR_10 = FUNC_4(VAR_5, 0, VAR_11->dma, VAR_6,
      VAR_0,
      VAR_1,
      VAR_3,
      VAR_2);
 if (VAR_10)
  goto out;


 *VAR_7 = (u16)FUNC_2(VAR_12->availible_vpp);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  VAR_8[VAR_9] = (u8)FUNC_2(VAR_12->vpp_p_up[VAR_9]);

out:
 FUNC_5(VAR_5, VAR_11);

 return VAR_10;
}
