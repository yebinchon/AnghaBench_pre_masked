
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_comp_vectors; } ;
struct mlx4_ib_dev {int * eq_table; TYPE_1__ ib_dev; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0, struct mlx4_ib_dev *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->ib_dev.num_comp_vectors;


 if (!VAR_1->eq_table)
  return;


 VAR_1->ib_dev.num_comp_vectors = 0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_1(VAR_0, VAR_1->eq_table[VAR_2]);

 FUNC_0(VAR_1->eq_table);
 VAR_1->eq_table = ((void*)0);
}
