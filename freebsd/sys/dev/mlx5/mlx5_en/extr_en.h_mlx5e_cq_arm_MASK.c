
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cc; } ;
struct mlx5_core_cq {TYPE_1__* uar; } ;
struct mlx5e_cq {TYPE_2__ wq; struct mlx5_core_cq mcq; } ;
typedef int spinlock_t ;
struct TYPE_3__ {int map; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_cq*,int ,int ,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct mlx5e_cq *VAR_1, spinlock_t *VAR_2)
{
 struct mlx5_core_cq *VAR_3;

 VAR_3 = &VAR_1->mcq;
 FUNC_0(VAR_3, VAR_0, VAR_3->uar->map, VAR_2, VAR_1->wq.cc);
}
