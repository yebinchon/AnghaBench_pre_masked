
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_2__ {int* pkey_table_len; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,size_t,int,int *,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_0, u8 VAR_1, u16 *VAR_2,
          struct mlx4_cmd_mailbox *VAR_3,
          struct mlx4_cmd_mailbox *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->caps.pkey_table_len[VAR_1]; VAR_5 += 32) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2 + VAR_5, VAR_3, VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
