
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_priv {int port_mutex; } ;
struct TYPE_2__ {int num_ports; int* possible_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;


 int FUNC_0 (struct mlx4_dev*,int*) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_0,
          enum mlx4_port_type *VAR_1,
          enum mlx4_port_type *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_0);
 int VAR_4, VAR_5;

 FUNC_3(VAR_0);

 FUNC_4(&VAR_3->port_mutex);
 for (VAR_5 = 0; VAR_5 < VAR_0->caps.num_ports; VAR_5++)
  VAR_0->caps.possible_type[VAR_5 + 1] = VAR_2[VAR_5];
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_5(&VAR_3->port_mutex);

 FUNC_2(VAR_0);

 return VAR_4;
}
