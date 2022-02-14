
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_4, u8 VAR_5, u16 VAR_6)
{
 int VAR_7;
 struct mlx4_cmd_mailbox *VAR_8;

 VAR_8 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 *((__be32 *)VAR_8->buf) = FUNC_2(VAR_6);

 VAR_7 = FUNC_4(VAR_4, VAR_8->dma, VAR_5, VAR_3,
         VAR_1, VAR_2,
         VAR_0);

 FUNC_5(VAR_4, VAR_8);
 return VAR_7;
}
