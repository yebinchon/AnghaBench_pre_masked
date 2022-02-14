
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_flow_group {int dummy; } ;
struct list_head {int dummy; } ;
struct fs_fte {int dummy; } ;


 scalar_t__ FUNC_0 (struct fs_fte*) ;
 struct fs_fte* FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (struct mlx5_flow_group*,struct list_head**) ;

__attribute__((used)) static struct fs_fte *FUNC_3(struct mlx5_flow_group *VAR_0,
        u32 *VAR_1,
        u8 VAR_2,
        u32 VAR_3,
        struct list_head **VAR_4)
{
 struct fs_fte *VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_0, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_6);
 if (FUNC_0(VAR_5))
  return VAR_5;

 return VAR_5;
}
