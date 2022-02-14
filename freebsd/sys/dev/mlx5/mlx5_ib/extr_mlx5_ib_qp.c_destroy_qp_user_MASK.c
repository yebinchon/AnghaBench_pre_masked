
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_ucontext {int uuari; } ;
struct TYPE_4__ {scalar_t__ umem; } ;
struct mlx5_ib_qp_base {TYPE_2__ ubuffer; } ;
struct mlx5_ib_qp {int uuarn; int db; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct TYPE_3__ {int context; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mlx5_ib_ucontext*,int *) ;
 struct mlx5_ib_ucontext* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ib_pd *VAR_0, struct mlx5_ib_qp *VAR_1,
       struct mlx5_ib_qp_base *VAR_2)
{
 struct mlx5_ib_ucontext *VAR_3;

 VAR_3 = FUNC_3(VAR_0->uobject->context);
 FUNC_2(VAR_3, &VAR_1->db);
 if (VAR_2->ubuffer.umem)
  FUNC_1(VAR_2->ubuffer.umem);
 FUNC_0(&VAR_3->uuari, VAR_1->uuarn);
}
