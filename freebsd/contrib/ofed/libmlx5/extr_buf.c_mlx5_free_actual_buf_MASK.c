
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_context {int dummy; } ;
struct mlx5_buf {int type; } ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx5_context*,struct mlx5_buf*) ;
 int FUNC_2 (struct mlx5_buf*) ;
 int FUNC_3 (struct mlx5_context*,struct mlx5_buf*) ;
 int VAR_0 ;

int FUNC_4(struct mlx5_context *VAR_1, struct mlx5_buf *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->type) {
 case 130:
  FUNC_2(VAR_2);
  break;

 case 128:
  FUNC_1(VAR_1, VAR_2);
  break;

 case 129:
  FUNC_3(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_0, "Bad allocation type\n");
 }

 return VAR_3;
}
