
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ,int *,int ) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_6, u8 VAR_7,
        __be32 *VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_2(VAR_9->buf, VAR_8, VAR_5);
 VAR_10 = VAR_4 << 8 | VAR_7;
 VAR_11 = FUNC_4(VAR_6, VAR_9->dma, VAR_10, VAR_3,
         VAR_1, VAR_2,
         VAR_0);

 FUNC_5(VAR_6, VAR_9);

 return VAR_11;
}
