
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_ucontext {int dummy; } ;
struct mlx5_ib_rwq {scalar_t__ umem; int db; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx5_ib_ucontext*,int *) ;
 struct mlx5_ib_ucontext* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_0, struct mlx5_ib_rwq *VAR_1)
{
 struct mlx5_ib_ucontext *VAR_2;

 VAR_2 = FUNC_2(VAR_0->uobject->context);
 FUNC_1(VAR_2, &VAR_1->db);
 if (VAR_1->umem)
  FUNC_0(VAR_1->umem);
}
