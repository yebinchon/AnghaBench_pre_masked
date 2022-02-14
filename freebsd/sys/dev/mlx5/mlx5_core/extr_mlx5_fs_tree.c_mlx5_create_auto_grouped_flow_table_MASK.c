
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; int max_types; } ;
struct mlx5_flow_table {int shared_refcount; TYPE_1__ autogroup; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct fs_prio {int flags; int shared_lock; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 int VAR_1 ;
 struct mlx5_flow_table* FUNC_2 (struct mlx5_flow_namespace*,int ,int,int,char const*) ;
 struct fs_prio* FUNC_3 (struct mlx5_flow_namespace*,int) ;
 struct mlx5_flow_table* FUNC_4 (struct fs_prio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct mlx5_flow_table *FUNC_7(struct mlx5_flow_namespace *VAR_2,
          int VAR_3,
          const char *VAR_4,
          int VAR_5,
          int VAR_6)
{
 struct mlx5_flow_table *VAR_7 = ((void*)0);
 struct fs_prio *VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = VAR_8->flags & VAR_1;
 if (VAR_9) {
  FUNC_5(&VAR_8->shared_lock);
  VAR_7 = FUNC_4(VAR_8);
 }

 if (VAR_7)
  goto return_ft;

 VAR_7 = FUNC_2(VAR_2, 0, VAR_3, VAR_5,
         VAR_4);
 if (FUNC_1(VAR_7))
  goto return_ft;

 VAR_7->autogroup.active = 1;
 VAR_7->autogroup.max_types = VAR_6;
 if (VAR_9)
  VAR_7->shared_refcount = 1;

return_ft:
 if (VAR_9)
  FUNC_6(&VAR_8->shared_lock);
 return VAR_7;
}
