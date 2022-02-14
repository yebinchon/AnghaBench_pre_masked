
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int linear; scalar_t__ db_numa_node; scalar_t__ buf_numa_node; } ;
struct mlx5e_sq_param {TYPE_1__ wq; void* sqc; } ;
struct TYPE_4__ {int log_sq_size; } ;
struct mlx5e_priv {int pdn; TYPE_2__ params; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct mlx5e_priv *VAR_5,
    struct mlx5e_sq_param *VAR_6)
{
 void *VAR_7 = VAR_6->sqc;
 void *VAR_8 = FUNC_0(VAR_7, VAR_7, VAR_8);

 FUNC_1(VAR_8, VAR_8, VAR_2, VAR_5->params.log_sq_size);
 FUNC_1(VAR_8, VAR_8, VAR_1, FUNC_2(VAR_0));
 FUNC_1(VAR_8, VAR_8, VAR_3, VAR_5->pdn);

 VAR_6->wq.buf_numa_node = 0;
 VAR_6->wq.db_numa_node = 0;
 VAR_6->wq.linear = 1;
}
