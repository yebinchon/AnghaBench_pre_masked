
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int umem; } ;
struct mlx5_ib_cq {TYPE_1__ buf; int db; } ;
struct ib_ucontext {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_cq *VAR_0, struct ib_ucontext *VAR_1)
{
 FUNC_1(FUNC_2(VAR_1), &VAR_0->db);
 FUNC_0(VAR_0->buf.umem);
}
