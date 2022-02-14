
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* eq; } ;
struct mlx4_priv {TYPE_3__ eq_table; } ;
struct TYPE_8__ {int num_comp_vectors; int num_ports; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct TYPE_5__ {int ports; } ;
struct TYPE_6__ {TYPE_1__ actv_ports; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_1, int VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 <= 0 || (VAR_2 >= VAR_1->caps.num_comp_vectors + 1))
  return -VAR_0;

 return !!(FUNC_1(VAR_3->eq_table.eq[VAR_2].actv_ports.ports,
    VAR_1->caps.num_ports) > 1);
}
