
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mlx4_eq* eq; } ;
struct mlx4_priv {TYPE_1__ eq_table; } ;
struct mlx4_eq {int affinity_cpu_id; } ;
struct TYPE_4__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_2__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct mlx4_priv *VAR_6 = FUNC_1(VAR_2);
 struct mlx4_eq *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_4 > VAR_2->caps.num_comp_vectors)
  return -VAR_0;

 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
  VAR_8 += FUNC_0(VAR_2, VAR_9);

 VAR_5 = VAR_4 - VAR_8 - !!(VAR_4 > VAR_1);


 if (VAR_5 < 0)
  return 0;

 VAR_7 = &VAR_6->eq_table.eq[VAR_4];

 VAR_7->affinity_cpu_id = VAR_5 % FUNC_2();

 return 0;
}
