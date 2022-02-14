
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mlx4_cq {TYPE_1__* cqe; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_2__ {int ts_15_8; int ts_7_0; int ts_47_16; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t FUNC_3(struct ibv_cq_ex *VAR_0)
{
 struct mlx4_cq *VAR_1 = FUNC_2(FUNC_1(VAR_0));

 return ((uint64_t)FUNC_0(VAR_1->cqe->ts_47_16) << 16) |
          (VAR_1->cqe->ts_15_8 << 8) |
          (VAR_1->cqe->ts_7_0);
}
