
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cqe64 {int dummy; } ;
struct mlx5_cq {int flags; } ;
struct ibv_cq_ex {int dummy; } ;
typedef enum polling_mode { ____Placeholder_polling_mode } polling_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ibv_cq_ex*) ;
 int FUNC_1 (struct mlx5_cq*,struct mlx5_cqe64**,void**) ;
 int FUNC_2 (struct mlx5_cq*,struct mlx5_cqe64*,void*,int) ;
 struct mlx5_cq* FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct ibv_cq_ex *VAR_4,
     enum polling_mode VAR_5,
     int VAR_6)
{
 struct mlx5_cq *VAR_7 = FUNC_3(FUNC_0(VAR_4));
 struct mlx5_cqe64 *VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7, &VAR_8, &VAR_9);
 if (VAR_10 == VAR_0) {
  if (VAR_5 == VAR_3)
   VAR_7->flags |= VAR_2;

  return VAR_1;
 }

 return FUNC_2(VAR_7, VAR_8, VAR_9, VAR_6);
}
