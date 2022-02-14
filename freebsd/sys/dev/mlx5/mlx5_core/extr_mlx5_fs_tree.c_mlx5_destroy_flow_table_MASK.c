
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct mlx5_flow_table {int shared_refcount; TYPE_1__ base; } ;
struct mlx5_flow_root_namespace {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {int lock; int name; } ;
struct fs_prio {int flags; int shared_lock; TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_flow_table*,struct fs_prio*) ;
 struct mlx5_flow_root_namespace* FUNC_1 (TYPE_3__*) ;
 struct mlx5_core_dev* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct fs_prio*,struct mlx5_flow_table*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;

int FUNC_10(struct mlx5_flow_table *VAR_2)
{
 int VAR_3 = 0;
 struct fs_prio *VAR_4;
 struct mlx5_flow_root_namespace *VAR_5;
 bool VAR_6;
 struct mlx5_core_dev *VAR_7;

 FUNC_3(VAR_4, VAR_2);
 VAR_5 = FUNC_1(&VAR_4->base);
 VAR_7 = FUNC_2(&VAR_4->base);

 if (!VAR_5) {
  FUNC_6(VAR_7,
      "flow steering failed to find root of priority %s",
      VAR_4->base.name);
  return -VAR_0;
 }

 VAR_6 = VAR_4->flags & VAR_1;
 if (VAR_6) {
  FUNC_7(&VAR_4->shared_lock);
  if (VAR_2->shared_refcount > 1) {
   --VAR_2->shared_refcount;
   FUNC_4(&VAR_2->base);
   FUNC_8(&VAR_4->shared_lock);
   return 0;
  }
 }

 FUNC_7(&VAR_4->base.lock);
 FUNC_7(&VAR_2->base.lock);

 VAR_3 = FUNC_9(VAR_5, VAR_2);
 if (VAR_3)
  goto unlock_ft;


 FUNC_0(VAR_2, VAR_4);

 FUNC_8(&VAR_2->base.lock);
 FUNC_5(&VAR_2->base);
 FUNC_8(&VAR_4->base.lock);
 if (VAR_6)
  FUNC_8(&VAR_4->shared_lock);

 return VAR_3;

unlock_ft:
 FUNC_8(&VAR_2->base.lock);
 FUNC_8(&VAR_4->base.lock);
 if (VAR_6)
  FUNC_8(&VAR_4->shared_lock);

 return VAR_3;
}
