
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int cqe_size; int cons_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_cqe*,int) ;
 struct mlx4_cqe* FUNC_1 (struct mlx4_cq*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct mlx4_cq *VAR_2,
        struct mlx4_cqe **VAR_3)
{
 struct mlx4_cqe *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return VAR_0;

 if (VAR_2->cqe_size == 64)
  ++VAR_4;

 ++VAR_2->cons_index;

 FUNC_0(VAR_4, sizeof *VAR_4);





 FUNC_2();

 *VAR_3 = VAR_4;

 return VAR_1;
}
