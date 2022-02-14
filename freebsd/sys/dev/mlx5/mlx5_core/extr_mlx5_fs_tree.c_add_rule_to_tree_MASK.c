
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct mlx5_flow_rule {TYPE_1__ base; int dest_attr; } ;
struct fs_fte {int dests; int base; } ;


 int FUNC_0 (struct mlx5_flow_rule*,struct fs_fte*) ;
 int FUNC_1 (TYPE_1__*,int *,char*,int) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_flow_rule *VAR_0,
        struct fs_fte *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->dest_attr);
 FUNC_1(&VAR_0->base, &VAR_1->base, VAR_2, 1);

 FUNC_4(&VAR_0->base.list, &VAR_1->dests);
 FUNC_3(VAR_2);
 FUNC_0(VAR_0, VAR_1);
}
