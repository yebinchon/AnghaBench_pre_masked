
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {scalar_t__ clbr_done; int tstmp_clbr; } ;


 int FUNC_0 (int *,int,int (*) (struct mlx5e_priv*),struct mlx5e_priv*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_priv *VAR_4)
{

 if (VAR_4->clbr_done == 0)
  FUNC_1(VAR_4);
 else
  FUNC_0(&VAR_4->tstmp_clbr, (VAR_4->clbr_done <
      VAR_1 ? VAR_2 :
      VAR_3) * VAR_0, FUNC_1,
      VAR_4);
}
