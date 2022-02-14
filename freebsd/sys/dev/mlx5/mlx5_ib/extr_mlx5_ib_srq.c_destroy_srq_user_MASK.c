
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_srq {int umem; int db; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_0, struct mlx5_ib_srq *VAR_1)
{
 FUNC_1(FUNC_2(VAR_0->uobject->context), &VAR_1->db);
 FUNC_0(VAR_1->umem);
}
