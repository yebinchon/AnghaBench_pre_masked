
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct fs_base* parent; } ;
struct mlx5_flow_rule {TYPE_1__ base; } ;
struct fs_fte {int val; } ;
struct fs_base {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fs_fte*,struct fs_base*) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(u32 *VAR_0,
     struct mlx5_flow_rule *VAR_1)
{
 struct fs_base *VAR_2;
 struct fs_fte *VAR_3;

 VAR_2 = VAR_1->base.parent;
 FUNC_0(!VAR_2);
 FUNC_1(VAR_3, VAR_2);

 FUNC_2(VAR_0, VAR_3->val, sizeof(VAR_3->val));
}
