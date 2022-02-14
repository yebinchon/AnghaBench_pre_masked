
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_comp_vectors; } ;
struct TYPE_6__ {int disable_irqs; TYPE_2__* msix_arr; TYPE_1__ eq_table; } ;
struct mlx5_core_dev {TYPE_3__ priv; } ;
struct TYPE_5__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_core_dev *VAR_1)
{
 int VAR_2 = VAR_1->priv.eq_table.num_comp_vectors + VAR_0;
 int VAR_3;

 VAR_1->priv.disable_irqs = 1;


 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++)
  FUNC_0(VAR_1->priv.msix_arr[VAR_3].vector);
}
