
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int async_events_mtx; int state; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_dev_event { ____Placeholder_mlx5_dev_event } mlx5_dev_event ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct mlx5_core_dev *VAR_1, void *VAR_2,
    enum mlx5_dev_event VAR_3, unsigned long VAR_4)
{
 struct mlx5e_priv *VAR_5 = VAR_2;

 FUNC_1(&VAR_5->async_events_mtx);
 if (FUNC_3(VAR_0, &VAR_5->state))
  FUNC_0(VAR_5, VAR_3);
 FUNC_2(&VAR_5->async_events_mtx);
}
