
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mlx4_eq* eq; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_priv {TYPE_1__ eq_table; struct mlx4_dev dev; } ;
struct mlx4_eq {int affinity_cpu_id; int irq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_priv *VAR_0, int VAR_1)
{
 int VAR_2;
 struct mlx4_dev *VAR_3 = &VAR_0->dev;
 struct mlx4_eq *VAR_4 = &VAR_0->eq_table.eq[VAR_1];

 VAR_2 = FUNC_0(VAR_4->irq, VAR_4->affinity_cpu_id);

 if (VAR_2)
  FUNC_1(VAR_3, "bind_irq_to_cpu failed, err %d\n", VAR_2);
}
