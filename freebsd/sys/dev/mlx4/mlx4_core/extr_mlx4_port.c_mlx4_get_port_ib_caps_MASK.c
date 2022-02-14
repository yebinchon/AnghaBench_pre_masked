
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;
typedef int __be32 ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_3, u8 VAR_4, __be32 *VAR_5)
{
 struct mlx4_cmd_mailbox *VAR_6, *VAR_7;
 u8 *VAR_8, *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_6(VAR_3, VAR_6);
  return FUNC_1(VAR_7);
 }

 VAR_8 = VAR_6->buf;
 VAR_9 = VAR_7->buf;
 VAR_8[0] = 1;
 VAR_8[1] = 1;
 VAR_8[2] = 1;
 VAR_8[3] = 1;
 *(__be16 *) (&VAR_8[16]) = FUNC_2(0x0015);
 *(__be32 *) (&VAR_8[20]) = FUNC_3(VAR_4);

 VAR_10 = FUNC_5(VAR_3, VAR_6->dma, VAR_7->dma, VAR_4, 3,
      VAR_0, VAR_2,
      VAR_1);
 if (!VAR_10)
  *VAR_5 = *(__be32 *) (VAR_9 + 84);
 FUNC_6(VAR_3, VAR_6);
 FUNC_6(VAR_3, VAR_7);
 return VAR_10;
}
