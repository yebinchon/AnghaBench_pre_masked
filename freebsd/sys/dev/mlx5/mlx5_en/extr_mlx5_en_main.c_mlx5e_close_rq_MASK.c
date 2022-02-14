
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int mtx; int watchdog; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_rq*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_rq *VAR_2)
{
 FUNC_2(&VAR_2->mtx);
 VAR_2->enabled = 0;
 FUNC_0(&VAR_2->watchdog);
 FUNC_3(&VAR_2->mtx);

 FUNC_1(VAR_2, VAR_1, VAR_0);
}
