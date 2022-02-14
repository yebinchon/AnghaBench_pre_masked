
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int sz_m1; int cc; int log_sz; } ;
struct mlx5e_cq {TYPE_1__ wq; } ;
struct mlx5_mini_cqe8 {int rx_hash_result; int byte_cnt; } ;
struct mlx5_cqe64 {int op_own; scalar_t__ check_sum; int rss_hash_result; int wqe_counter; int byte_cnt; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct mlx5e_cq *VAR_0, struct mlx5_cqe64 *VAR_1,
    struct mlx5_mini_cqe8 *VAR_2,
    u16 VAR_3, int VAR_4)
{





 VAR_1->byte_cnt = VAR_2->byte_cnt;
 VAR_1->wqe_counter = FUNC_0((VAR_3 + VAR_4) & VAR_0->wq.sz_m1);
 VAR_1->rss_hash_result = VAR_2->rx_hash_result;




 VAR_1->check_sum = 0;
 VAR_1->op_own = (VAR_1->op_own & 0xf0) |
     (((VAR_0->wq.cc + VAR_4) >> VAR_0->wq.log_sz) & 1);
}
