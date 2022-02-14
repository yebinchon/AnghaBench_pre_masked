
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct fs_prio {int dummy; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (int ) ;
 struct mlx5_flow_table* FUNC_1 (struct mlx5_flow_namespace*,int ,struct fs_prio*,int,char const*) ;
 struct fs_prio* FUNC_2 (struct mlx5_flow_namespace*,unsigned int) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_3(struct mlx5_flow_namespace *VAR_1,
      u16 VAR_2,
      unsigned int VAR_3,
      int VAR_4,
      const char *VAR_5)
{
 struct fs_prio *VAR_6 = ((void*)0);
 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_6, VAR_4, VAR_5);
}
