
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq {int lock; } ;
struct ibv_cq_ex {int dummy; } ;


 int FUNC_0 (struct ibv_cq_ex*) ;
 int FUNC_1 (struct mlx4_cq*) ;
 int FUNC_2 (int *) ;
 struct mlx4_cq* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct ibv_cq_ex *VAR_0, int VAR_1)
{
 struct mlx4_cq *VAR_2 = FUNC_3(FUNC_0(VAR_0));

 FUNC_1(VAR_2);

 if (VAR_1)
  FUNC_2(&VAR_2->lock);
}
