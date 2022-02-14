
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {TYPE_3__* eq; } ;
struct mlx4_priv {TYPE_4__ eq_table; } ;
struct TYPE_5__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_6__ {int ports; } ;
struct TYPE_7__ {TYPE_2__ actv_ports; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (scalar_t__,int ) ;

bool FUNC_3(struct mlx4_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_3);
 if (VAR_3 < 0 || (VAR_3 >= VAR_1->caps.num_comp_vectors + 1) ||
     (VAR_3 == VAR_0))
  return 0;

 return FUNC_2(VAR_2 - 1, VAR_4->eq_table.eq[VAR_3].actv_ports.ports);
}
