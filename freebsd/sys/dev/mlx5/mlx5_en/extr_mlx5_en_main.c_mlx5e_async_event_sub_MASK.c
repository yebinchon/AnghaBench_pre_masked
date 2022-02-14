
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int update_carrier_work; int wq; } ;
typedef enum mlx5_dev_event { ____Placeholder_mlx5_dev_event } mlx5_dev_event ;




 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_priv *VAR_0,
    enum mlx5_dev_event VAR_1)
{
 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_0(VAR_0->wq, &VAR_0->update_carrier_work);
  break;

 default:
  break;
 }
}
