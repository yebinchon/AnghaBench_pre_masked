
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct mlx5_flow_namespace {TYPE_1__ base; } ;
struct fs_prio {int objs; int base; } ;


 int VAR_0 ;
 struct mlx5_flow_namespace* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int) ;
 int FUNC_2 (struct mlx5_flow_namespace*) ;
 struct mlx5_flow_namespace* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static struct mlx5_flow_namespace *FUNC_5(struct fs_prio *VAR_2,
             const char *VAR_3)
{
 struct mlx5_flow_namespace *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_4);
 FUNC_1(&VAR_4->base, &VAR_2->base, VAR_3, 1);
 FUNC_4(&VAR_4->base.list, &VAR_2->objs);

 return VAR_4;
}
