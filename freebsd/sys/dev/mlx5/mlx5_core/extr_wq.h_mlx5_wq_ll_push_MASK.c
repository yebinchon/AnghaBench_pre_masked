
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_ll {int cur_sz; int wqe_ctr; int head; } ;



__attribute__((used)) static inline void FUNC_0(struct mlx5_wq_ll *VAR_0, u16 VAR_1)
{
 VAR_0->head = VAR_1;
 VAR_0->wqe_ctr++;
 VAR_0->cur_sz++;
}
