
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd_work_ent {int uin_size; int uout_size; int page_queue; struct mlx5_cmd* cmd; void* context; scalar_t__ callback; void* uout; struct mlx5_cmd_msg* out; struct mlx5_cmd_msg* in; } ;
struct mlx5_cmd_msg {int dummy; } ;
struct mlx5_cmd {int dummy; } ;
typedef scalar_t__ mlx5_cmd_cbk_t ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mlx5_cmd_work_ent* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_cmd_work_ent* FUNC_1 (int,int ) ;

__attribute__((used)) static struct mlx5_cmd_work_ent *FUNC_2(struct mlx5_cmd *VAR_3,
        struct mlx5_cmd_msg *VAR_4,
        int VAR_5,
        struct mlx5_cmd_msg *VAR_6,
        void *VAR_7, int VAR_8,
        mlx5_cmd_cbk_t VAR_9,
        void *VAR_10, int VAR_11)
{
 gfp_t VAR_12 = VAR_9 ? VAR_1 : VAR_2;
 struct mlx5_cmd_work_ent *VAR_13;

 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_12);
 if (!VAR_13)
  return FUNC_0(-VAR_0);

 VAR_13->in = VAR_4;
 VAR_13->uin_size = VAR_5;
 VAR_13->out = VAR_6;
 VAR_13->uout = VAR_7;
 VAR_13->uout_size = VAR_8;
 VAR_13->callback = VAR_9;
 VAR_13->context = VAR_10;
 VAR_13->cmd = VAR_3;
 VAR_13->page_queue = VAR_11;

 return VAR_13;
}
