
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx4_err_cqe {int vendor_err; } ;
struct mlx4_cq {scalar_t__ cqe; } ;
struct ibv_cq_ex {int dummy; } ;


 int FUNC_0 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t FUNC_2(struct ibv_cq_ex *VAR_0)
{
 struct mlx4_cq *VAR_1 = FUNC_1(FUNC_0(VAR_0));
 struct mlx4_err_cqe *VAR_2 = (struct mlx4_err_cqe *)VAR_1->cqe;

 return VAR_2->vendor_err;
}
