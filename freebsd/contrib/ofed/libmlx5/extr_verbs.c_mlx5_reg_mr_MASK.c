
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mr {int dummy; } ;
struct mlx5_mr {int alloc_flags; struct ibv_mr ibv_mr; int buf; } ;
struct ibv_reg_mr_resp {int dummy; } ;
struct ibv_reg_mr {int dummy; } ;
struct ibv_pd {int dummy; } ;
typedef enum ibv_access_flags { ____Placeholder_ibv_access_flags } ibv_access_flags ;
typedef int cmd ;


 struct mlx5_mr* FUNC_0 (int,int) ;
 int FUNC_1 (struct mlx5_mr*) ;
 int FUNC_2 (struct ibv_pd*,void*,size_t,uintptr_t,int,struct ibv_mr*,struct ibv_reg_mr*,int,struct ibv_reg_mr_resp*,int) ;
 int FUNC_3 (int *) ;

struct ibv_mr *FUNC_4(struct ibv_pd *VAR_0, void *VAR_1, size_t VAR_2,
      int VAR_3)
{
 struct mlx5_mr *VAR_4;
 struct ibv_reg_mr VAR_5;
 int VAR_6;
 enum ibv_access_flags VAR_7 = (enum ibv_access_flags)VAR_3;
 struct ibv_reg_mr_resp VAR_8;

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, (uintptr_t)VAR_1, VAR_7,
        &(VAR_4->ibv_mr), &VAR_5, sizeof(VAR_5), &VAR_8,
        sizeof VAR_8);
 if (VAR_6) {
  FUNC_3(&(VAR_4->buf));
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 VAR_4->alloc_flags = VAR_3;

 return &VAR_4->ibv_mr;
}
