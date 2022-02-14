
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct mlx5e_priv {TYPE_1__ cq_uar; } ;
struct mlx5e_cq_param {void* cqc; } ;


 int FUNC_0 (void*,void*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_priv *VAR_1,
    struct mlx5e_cq_param *VAR_2)
{
 void *VAR_3 = VAR_2->cqc;

 FUNC_0(VAR_3, VAR_3, VAR_0, VAR_1->cq_uar.index);
}
