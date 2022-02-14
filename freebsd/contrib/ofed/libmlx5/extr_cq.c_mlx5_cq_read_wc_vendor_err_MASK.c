
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_err_cqe {int vendor_err_synd; } ;
struct mlx5_cq {scalar_t__ cqe64; } ;
struct ibv_cq_ex {int dummy; } ;


 int FUNC_0 (struct ibv_cq_ex*) ;
 struct mlx5_cq* FUNC_1 (int ) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct ibv_cq_ex *VAR_0)
{
 struct mlx5_cq *VAR_1 = FUNC_1(FUNC_0(VAR_0));
 struct mlx5_err_cqe *VAR_2 = (struct mlx5_err_cqe *)VAR_1->cqe64;

 return VAR_2->vendor_err_synd;
}
