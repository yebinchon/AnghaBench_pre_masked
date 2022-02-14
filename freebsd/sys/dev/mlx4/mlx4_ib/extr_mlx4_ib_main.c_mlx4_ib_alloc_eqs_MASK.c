
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_comp_vectors; } ;
struct mlx4_ib_dev {int* eq_table; TYPE_2__ ib_dev; } ;
struct TYPE_3__ {int num_comp_vectors; int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int*) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_1, struct mlx4_ib_dev *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;

 VAR_2->eq_table = FUNC_0(VAR_1->caps.num_comp_vectors,
      sizeof(VAR_2->eq_table[0]), VAR_0);
 if (!VAR_2->eq_table)
  return;

 for (VAR_3 = 1; VAR_3 <= VAR_1->caps.num_ports; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_1, VAR_3);
       VAR_4++, VAR_6++) {
   if (VAR_3 > 1 && FUNC_3(VAR_1, VAR_6))
    continue;
   VAR_2->eq_table[VAR_5] = VAR_6;
   if (!FUNC_1(VAR_1, VAR_3,
         &VAR_2->eq_table[VAR_5]))
    VAR_5++;
   else
    VAR_2->eq_table[VAR_5] = -1;
  }
 }

 for (VAR_3 = VAR_5; VAR_3 < VAR_1->caps.num_comp_vectors;
      VAR_2->eq_table[VAR_3++] = -1)
  ;


 VAR_2->ib_dev.num_comp_vectors = VAR_5;
}
