
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_context {int params2; int flags; } ;
struct mlx4_qp {int dummy; } ;
struct mlx4_mtt {int dummy; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_qp_state { ____Placeholder_mlx4_qp_state } mlx4_qp_state ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_mtt*,int,int,struct mlx4_qp_context*,int ,int ,struct mlx4_qp*) ;

int FUNC_4(struct mlx4_dev *VAR_5, struct mlx4_mtt *VAR_6,
       struct mlx4_qp_context *VAR_7,
       struct mlx4_qp *VAR_8, enum mlx4_qp_state *VAR_9)
{
 int VAR_10;
 int VAR_11;
 enum mlx4_qp_state VAR_12[] = {
  VAR_2,
  VAR_1,
  VAR_3,
  VAR_4
 };

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_12) - 1; VAR_11++) {
  VAR_7->flags &= FUNC_1(~(0xf << 28));
  VAR_7->flags |= FUNC_1(VAR_12[VAR_11 + 1] << 28);
  if (VAR_12[VAR_11 + 1] != VAR_3)
   VAR_7->params2 &= ~VAR_0;
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_12[VAR_11], VAR_12[VAR_11 + 1],
         VAR_7, 0, 0, VAR_8);
  if (VAR_10) {
   FUNC_2(VAR_5, "Failed to bring QP to state: %d with error: %d\n",
     VAR_12[VAR_11 + 1], VAR_10);
   return VAR_10;
  }

  *VAR_9 = VAR_12[VAR_11 + 1];
 }

 return 0;
}
