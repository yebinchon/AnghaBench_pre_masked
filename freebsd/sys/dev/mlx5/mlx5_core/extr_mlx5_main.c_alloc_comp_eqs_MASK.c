
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_eq_table {int num_comp_vectors; int lock; int comp_eqs_list; } ;
struct mlx5_eq {int index; int list; int eqn; } ;
struct TYPE_3__ {int * uars; } ;
struct TYPE_4__ {TYPE_1__ uuari; struct mlx5_eq_table eq_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_eq*) ;
 struct mlx5_eq* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_eq*,scalar_t__,int,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_eq_table *VAR_4 = &VAR_3->priv.eq_table;
 struct mlx5_eq *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(&VAR_4->comp_eqs_list);
 VAR_6 = VAR_4->num_comp_vectors;
 VAR_7 = VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);

  VAR_8 = FUNC_6(VAR_3, VAR_5,
      VAR_9 + VAR_2, VAR_7, 0,
      &VAR_3->priv.uuari.uars[0]);
  if (VAR_8) {
   FUNC_2(VAR_5);
   goto clean;
  }
  FUNC_5(VAR_3, "allocated completion EQN %d\n", VAR_5->eqn);
  VAR_5->index = VAR_9;
  FUNC_7(&VAR_4->lock);
  FUNC_4(&VAR_5->list, &VAR_4->comp_eqs_list);
  FUNC_8(&VAR_4->lock);
 }

 return 0;

clean:
 FUNC_1(VAR_3);
 return VAR_8;
}
