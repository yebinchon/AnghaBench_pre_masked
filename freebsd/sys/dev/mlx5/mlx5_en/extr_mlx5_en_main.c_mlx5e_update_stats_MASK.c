
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int watchdog; int update_stats_work; int wq; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct mlx5e_priv*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct mlx5e_priv *VAR_2 = VAR_1;

 FUNC_1(VAR_2->wq, &VAR_2->update_stats_work);

 FUNC_0(&VAR_2->watchdog, VAR_0, &FUNC_2, VAR_2);
}
