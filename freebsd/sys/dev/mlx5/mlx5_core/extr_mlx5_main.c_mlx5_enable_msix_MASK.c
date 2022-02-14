
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_eq_table {int num_comp_vectors; } ;
struct mlx5_priv {TYPE_1__* msix_arr; struct mlx5_eq_table eq_table; } ;
struct mlx5_core_dev {int msix_eqvec; int pdev; struct mlx5_priv priv; } ;
struct TYPE_3__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_priv *VAR_6 = &VAR_5->priv;
 struct mlx5_eq_table *VAR_7 = &VAR_6->eq_table;
 int VAR_8 = 1 << FUNC_0(VAR_5, VAR_3);
 int VAR_9 = VAR_5->msix_eqvec;
 int VAR_10 = VAR_2;
 int VAR_11;

 if (VAR_9 > 0)
  VAR_10 += VAR_9;
 else
  VAR_10 += FUNC_0(VAR_5, VAR_4) * FUNC_2();

 if (VAR_10 > VAR_8)
  VAR_10 = VAR_8;
 if (VAR_10 > 256)
  VAR_10 = 256;
 if (VAR_10 <= VAR_2)
  return -VAR_0;

 VAR_6->msix_arr = FUNC_1(VAR_10 * sizeof(*VAR_6->msix_arr), VAR_1);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_6->msix_arr[VAR_11].entry = VAR_11;

 VAR_10 = FUNC_3(VAR_5->pdev, VAR_6->msix_arr,
         VAR_2 + 1, VAR_10);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->num_comp_vectors = VAR_10 - VAR_2;
 return 0;
}
