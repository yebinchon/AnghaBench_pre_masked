
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_ptys_reg {int local_port; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_access_reg* buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct mlx4_access_reg {scalar_t__ method; scalar_t__ reg_data; int reg_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int ) ;

int FUNC_4(struct mlx4_dev *VAR_7, int VAR_8,
       struct mlx4_vhcr *VAR_9,
       struct mlx4_cmd_mailbox *VAR_10,
       struct mlx4_cmd_mailbox *VAR_11,
       struct mlx4_cmd_info *VAR_12)
{
 struct mlx4_access_reg *VAR_13 = VAR_10->buf;
 u8 VAR_14 = VAR_13->method & VAR_1;
 u16 VAR_15 = FUNC_0(VAR_13->reg_id);

 if (VAR_8 != FUNC_2(VAR_7) &&
     VAR_14 == VAR_2)
  return -VAR_0;

 if (VAR_15 == VAR_6) {
  struct mlx4_ptys_reg *VAR_16 =
   (struct mlx4_ptys_reg *)VAR_13->reg_data;

  VAR_16->local_port =
   FUNC_3(VAR_7, VAR_8,
      VAR_16->local_port);
 }

 return FUNC_1(VAR_7, VAR_10->dma, VAR_11->dma, VAR_9->in_modifier,
       0, VAR_3, VAR_5,
       VAR_4);
}
