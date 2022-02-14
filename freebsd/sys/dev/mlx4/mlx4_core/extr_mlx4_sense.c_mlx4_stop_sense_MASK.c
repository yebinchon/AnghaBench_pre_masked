
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_sense {int gone; int sense_poll; } ;
struct mlx4_priv {struct mlx4_sense sense; int port_mutex; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_1(VAR_0);
 struct mlx4_sense *VAR_2 = &VAR_1->sense;

 FUNC_2(&VAR_1->port_mutex);
 VAR_2->gone = 1;
 FUNC_3(&VAR_1->port_mutex);

 FUNC_0(&FUNC_1(VAR_0)->sense.sense_poll);
}
