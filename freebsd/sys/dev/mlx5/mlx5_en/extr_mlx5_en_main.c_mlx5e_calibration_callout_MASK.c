
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct mlx5e_priv {size_t clbr_curr; scalar_t__ clbr_done; int clbr_gen; int ifp; struct mlx5e_clbr_point* clbr_points; } ;
struct mlx5e_clbr_point {int clbr_hw_prev; int clbr_hw_curr; scalar_t__ clbr_gen; int base_curr; int base_prev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct timespec*) ;
 int FUNC_6 (struct timespec*) ;
 int FUNC_7 (struct mlx5e_clbr_point*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct mlx5e_priv *VAR_3;
 struct mlx5e_clbr_point *VAR_4, *VAR_5;
 struct timespec VAR_6;
 int VAR_7;

 VAR_3 = VAR_2;
 VAR_5 = &VAR_3->clbr_points[VAR_3->clbr_curr];
 VAR_7 = VAR_3->clbr_curr + 1;
 if (VAR_7 >= FUNC_7(VAR_3->clbr_points))
  VAR_7 = 0;
 VAR_4 = &VAR_3->clbr_points[VAR_7];

 VAR_4->base_prev = VAR_5->base_curr;
 VAR_4->clbr_hw_prev = VAR_5->clbr_hw_curr;

 VAR_4->clbr_hw_curr = FUNC_3(VAR_3);
 if (((VAR_4->clbr_hw_curr - VAR_5->clbr_hw_curr) >> VAR_0) ==
     0) {
  if (VAR_3->clbr_done != 0) {
   FUNC_2(VAR_3->ifp,
       "HW failed tstmp frozen %#jx %#jx, disabling\n",
        VAR_4->clbr_hw_curr, VAR_5->clbr_hw_prev);
   VAR_3->clbr_done = 0;
  }
  FUNC_0(&VAR_5->clbr_gen, 0);
  return;
 }

 FUNC_6(&VAR_6);
 VAR_4->base_curr = FUNC_5(&VAR_6);

 VAR_5->clbr_gen = 0;
 FUNC_1();
 VAR_3->clbr_curr = VAR_7;
 FUNC_0(&VAR_4->clbr_gen, ++(VAR_3->clbr_gen));

 if (VAR_3->clbr_done < VAR_1)
  VAR_3->clbr_done++;
 FUNC_4(VAR_3);
}
