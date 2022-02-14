
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_flow_table {int dummy; } ;
struct TYPE_5__ {int list; TYPE_3__* parent; } ;
struct TYPE_4__ {int type; } ;
struct mlx5_flow_rule {TYPE_2__ base; TYPE_1__ dest_attr; } ;
struct mlx5_flow_group {scalar_t__ num_ftes; scalar_t__ max_ftes; int ftes; int base; } ;
struct TYPE_6__ {int list; int * parent; } ;
struct fs_fte {int dests_size; TYPE_3__ base; int dests; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fs_fte* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fs_fte*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fs_fte* FUNC_2 (int ,int ,int *,unsigned int) ;
 int FUNC_3 (struct fs_fte*) ;
 struct mlx5_flow_rule* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static struct fs_fte *FUNC_7(struct mlx5_flow_table *VAR_6,
       struct mlx5_flow_group *VAR_7,
       u32 *VAR_8,
       unsigned int VAR_9)
{
 int VAR_10;
 struct fs_fte *VAR_11;
 struct mlx5_flow_rule *VAR_12;

 if (VAR_7->num_ftes == VAR_7->max_ftes)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_2(VAR_3,
      VAR_5, VAR_8, VAR_9);
 if (FUNC_1(VAR_11))
  return VAR_11;


 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  VAR_10 = -VAR_0;
  goto free_fte;
 }

 VAR_11->base.parent = &VAR_7->base;
 VAR_11->dests_size = 1;
 VAR_12->dest_attr.type = VAR_4;
 VAR_12->base.parent = &VAR_11->base;
 FUNC_5(&VAR_12->base.list, &VAR_11->dests);

 FUNC_6(&VAR_11->base.list, &VAR_7->ftes);
 VAR_7->num_ftes++;

 return VAR_11;

free_fte:
 FUNC_3(VAR_11);
 return FUNC_0(VAR_10);
}
