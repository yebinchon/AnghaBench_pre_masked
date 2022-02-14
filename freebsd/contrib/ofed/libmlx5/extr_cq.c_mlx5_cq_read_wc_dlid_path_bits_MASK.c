
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5_cq {TYPE_1__* cqe64; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_2__ {int ml_path; } ;


 int FUNC_0 (struct ibv_cq_ex*) ;
 struct mlx5_cq* FUNC_1 (int ) ;

__attribute__((used)) static inline uint8_t FUNC_2(struct ibv_cq_ex *VAR_0)
{
 struct mlx5_cq *VAR_1 = FUNC_1(FUNC_0(VAR_0));

 return VAR_1->cqe64->ml_path & 0x7f;
}
