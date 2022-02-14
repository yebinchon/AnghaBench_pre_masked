
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int shared_refcount; } ;
struct fs_prio {int objs; } ;


 struct mlx5_flow_table* FUNC_0 (struct fs_prio*,int *) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_1(struct fs_prio *VAR_0)
{
 struct mlx5_flow_table *VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->objs);
 if (VAR_1) {
  VAR_1->shared_refcount++;
  return VAR_1;
 }

 return ((void*)0);
}
