
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_access_reg* buf; } ;
struct mlx4_access_reg {int constant2; int method; void* reg_data; int status; void* len_const; void* reg_id; void* constant1; } ;
typedef enum mlx4_access_reg_method { ____Placeholder_mlx4_access_reg_method } mlx4_access_reg_method ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int,int) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_8 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_9(struct mlx4_dev *VAR_6, u16 VAR_7,
      enum mlx4_access_reg_method VAR_8,
      u16 VAR_9, void *VAR_10)
{
 struct mlx4_cmd_mailbox *VAR_11, *VAR_12;
 struct mlx4_access_reg *VAR_13, *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_12)) {
  FUNC_8(VAR_6, VAR_11);
  return FUNC_1(VAR_12);
 }

 VAR_13 = VAR_11->buf;
 VAR_14 = VAR_12->buf;

 VAR_13->constant1 = FUNC_2(0x1<<11 | 0x4);
 VAR_13->constant2 = 0x1;
 VAR_13->reg_id = FUNC_2(VAR_7);
 VAR_13->method = VAR_8 & VAR_1;

 VAR_9 = FUNC_4(VAR_9, (u16)(sizeof(VAR_13->reg_data)));
 VAR_13->len_const =
  FUNC_2(((VAR_9/4 + 1) & VAR_0) |
       ((0x3) << 12));

 FUNC_3(VAR_13->reg_data, VAR_10, VAR_9);
 VAR_15 = FUNC_6(VAR_6, VAR_11->dma, VAR_12->dma, 0, 0,
      VAR_3, VAR_4,
      VAR_5);
 if (VAR_15)
  goto out;

 if (VAR_14->status & VAR_2) {
  VAR_15 = VAR_14->status & VAR_2;
  FUNC_7(VAR_6,
    "MLX4_CMD_ACCESS_REG(%x) returned REG status (%x)\n",
    VAR_7, VAR_15);
  goto out;
 }

 FUNC_3(VAR_10, VAR_14->reg_data, VAR_9);
out:
 FUNC_8(VAR_6, VAR_11);
 FUNC_8(VAR_6, VAR_12);
 return VAR_15;
}
