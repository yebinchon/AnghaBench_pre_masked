
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_cqe64 {int dummy; } ;
struct TYPE_2__ {int context; } ;
struct mlx5_cq {int cqe_sz; int cqn; TYPE_1__ ibv_cq; int cons_index; } ;
struct mlx5_context {int * dbg_fp; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_cqe64*,int) ;
 int FUNC_1 (int *,struct mlx5_cqe64*) ;
 int FUNC_2 (int *,int,char*,int ) ;
 int VAR_3 ;
 void* FUNC_3 (struct mlx5_cq*) ;
 struct mlx5_context* FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static inline int FUNC_6(struct mlx5_cq *VAR_4,
        struct mlx5_cqe64 **VAR_5,
        void **VAR_6)
{
 void *VAR_7;
 struct mlx5_cqe64 *VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return VAR_0;

 VAR_8 = (VAR_4->cqe_sz == 64) ? VAR_7 : VAR_7 + 64;

 ++VAR_4->cons_index;

 FUNC_0(VAR_8, sizeof *VAR_8);





 FUNC_5();
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_7;

 return VAR_1;
}
