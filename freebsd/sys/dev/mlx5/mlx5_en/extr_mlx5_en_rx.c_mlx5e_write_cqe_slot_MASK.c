
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sz_m1; } ;
struct mlx5e_cq {TYPE_1__ wq; } ;
struct mlx5_cqe64 {int dummy; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct mlx5e_cq *VAR_0, u32 VAR_1, void *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_0->wq, VAR_1 & VAR_0->wq.sz_m1),
     VAR_2, sizeof(struct mlx5_cqe64));
}
