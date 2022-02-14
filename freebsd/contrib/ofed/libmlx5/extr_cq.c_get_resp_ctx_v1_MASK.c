
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct mlx5_srq {int dummy; } ;
struct mlx5_resource {scalar_t__ rsn; int type; } ;
struct TYPE_3__ {int srq; } ;
struct TYPE_4__ {TYPE_1__ qp; } ;
struct mlx5_qp {TYPE_2__ verbs_qp; } ;
struct mlx5_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct mlx5_resource* FUNC_0 (struct mlx5_context*,scalar_t__) ;
 struct mlx5_qp* FUNC_1 (struct mlx5_resource*) ;
 struct mlx5_srq* FUNC_2 (struct mlx5_resource*) ;
 struct mlx5_srq* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct mlx5_context *VAR_2,
      struct mlx5_resource **VAR_3,
      struct mlx5_srq **VAR_4,
      uint32_t VAR_5, uint8_t *VAR_6)
{
 struct mlx5_qp *VAR_7;

 if (!*VAR_3 || (VAR_5 != (*VAR_3)->rsn)) {
  *VAR_3 = FUNC_0(VAR_2, VAR_5);
  if (FUNC_4(!*VAR_3))
   return VAR_1;
 }

 switch ((*VAR_3)->type) {
 case 130:
  VAR_7 = FUNC_1(*VAR_3);
  if (VAR_7->verbs_qp.qp.srq) {
   *VAR_4 = FUNC_3(VAR_7->verbs_qp.qp.srq);
   *VAR_6 = 1;
  }
  break;
 case 128:
  *VAR_4 = FUNC_2(*VAR_3);
  *VAR_6 = 1;
  break;
 case 129:
  break;
 default:
  return VAR_1;
 }

 return VAR_0;
}
