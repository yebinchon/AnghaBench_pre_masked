
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx4_vhcr {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_1 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_2(struct mlx4_dev *VAR_6, int VAR_7,
     struct mlx4_vhcr *VAR_8,
     struct mlx4_cmd_mailbox *VAR_9,
     struct mlx4_cmd_mailbox *VAR_10,
     struct mlx4_cmd_info *VAR_11)
{
 u8 *VAR_12;
 int VAR_13;

 VAR_12 = VAR_10->buf;
 VAR_13 = FUNC_1(VAR_6, 0, VAR_10->dma, 0, 0, VAR_1,
       VAR_2, VAR_0);
 if (VAR_13)
  return VAR_13;



 VAR_12[0] = VAR_12[1] = 0;
 FUNC_0(&VAR_12[8], 0, VAR_4 - 8);
 VAR_12[VAR_5] = VAR_3;

 return 0;
}
