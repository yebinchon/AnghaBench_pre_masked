
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_qp {int has_rq; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; scalar_t__ srq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct mlx5_ib_qp *VAR_5, struct ib_qp_init_attr *VAR_6)
{
 if (VAR_6->srq || (VAR_6->qp_type == VAR_1) ||
     (VAR_6->qp_type == VAR_0))
  return VAR_3;
 else if (!VAR_5->has_rq)
  return VAR_4;
 else
  return VAR_2;
}
