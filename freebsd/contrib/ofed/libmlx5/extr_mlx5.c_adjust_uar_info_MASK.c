
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_device {int page_size; } ;
struct mlx5_context {int uar_size; int num_uars_per_page; } ;
struct mlx5_alloc_ucontext_resp {int log_uar_size; int num_uars_per_page; } ;



__attribute__((used)) static void FUNC_0(struct mlx5_device *VAR_0,
       struct mlx5_context *VAR_1,
       struct mlx5_alloc_ucontext_resp VAR_2)
{
 if (!VAR_2.log_uar_size && !VAR_2.num_uars_per_page) {

  VAR_1->uar_size = VAR_0->page_size;
  VAR_1->num_uars_per_page = 1;
  return;
 }

 VAR_1->uar_size = 1 << VAR_2.log_uar_size;
 VAR_1->num_uars_per_page = VAR_2.num_uars_per_page;
}
