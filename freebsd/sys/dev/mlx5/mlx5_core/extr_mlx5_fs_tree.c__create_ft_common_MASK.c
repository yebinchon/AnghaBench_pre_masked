
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int list; int type; } ;
struct mlx5_flow_table {scalar_t__ type; int max_fte; int id; int vport; TYPE_1__ base; scalar_t__ level; int fgs; } ;
struct mlx5_flow_root_namespace {scalar_t__ table_type; int dev; } ;
struct TYPE_7__ {int name; } ;
struct mlx5_flow_namespace {TYPE_2__ base; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_prio {scalar_t__ num_ft; scalar_t__ max_ft; int objs; int base; } ;
struct TYPE_8__ {int modify_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_flow_table* FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_4 (struct fs_prio*) ;
 int FUNC_5 (struct mlx5_flow_table*,struct fs_prio*) ;
 int FUNC_6 (struct mlx5_flow_table*,struct fs_prio*) ;
 struct mlx5_flow_root_namespace* FUNC_7 (TYPE_2__*) ;
 TYPE_3__ VAR_8 ;
 struct mlx5_core_dev* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int ,scalar_t__,scalar_t__,int,int*) ;
 int FUNC_15 (int ,int ,scalar_t__,int) ;
 int FUNC_16 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*,int,char*,int) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_21(struct mlx5_flow_namespace *VAR_9,
       u16 VAR_10,
       struct fs_prio *VAR_11,
       int VAR_12,
       const char *VAR_13)
{
 struct mlx5_flow_table *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 char VAR_18[20];
 struct mlx5_flow_root_namespace *VAR_19 = FUNC_7(&VAR_9->base);
 struct mlx5_core_dev *VAR_20 = FUNC_8(&VAR_9->base);

 if (!VAR_19) {
  FUNC_16(VAR_20,
      "flow steering failed to find root of namespace %s",
      VAR_9->base.name);
  return FUNC_0(-VAR_0);
 }

 if (VAR_11->num_ft == VAR_11->max_ft)
  return FUNC_0(-VAR_2);

 VAR_14 = FUNC_12(sizeof(*VAR_14), VAR_7);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 FUNC_9(&VAR_14->base, 1);
 FUNC_1(&VAR_14->fgs);


 if (VAR_19->table_type == VAR_3 ||
  VAR_19->table_type == VAR_4)
  VAR_14->level = 0;
 else
  VAR_14->level = FUNC_4(VAR_11);

 VAR_14->base.type = VAR_6;
 VAR_14->vport = VAR_10;
 VAR_14->type = VAR_19->table_type;

 VAR_17 = FUNC_17(VAR_12 + 2);

 VAR_14->max_fte = VAR_17 - 2;
 VAR_16 = FUNC_10(VAR_17);
 VAR_15 = FUNC_14(VAR_19->dev, VAR_14->vport, VAR_14->type,
        VAR_14->level, VAR_16, &VAR_14->id);
 if (VAR_15)
  goto free_ft;

 VAR_15 = FUNC_5(VAR_14, VAR_11);
 if (VAR_15)
  goto del_ft;

 if ((VAR_19->table_type == VAR_5) && FUNC_2(VAR_19->dev,
          VAR_8.modify_root)) {
  VAR_15 = FUNC_20(VAR_19, VAR_14);
  if (VAR_15)
   goto destroy_star_rule;
 }

 if (!VAR_13 || !FUNC_19(VAR_13)) {
  FUNC_18(VAR_18, 20, "flow_table_%u", VAR_14->id);
  FUNC_3(&VAR_14->base, VAR_18, &VAR_11->base);
 } else {
  FUNC_3(&VAR_14->base, VAR_13, &VAR_11->base);
 }
 FUNC_13(&VAR_14->base.list, &VAR_11->objs);
 VAR_11->num_ft++;

 return VAR_14;

destroy_star_rule:
 FUNC_6(VAR_14, VAR_11);
del_ft:
 FUNC_15(VAR_19->dev, VAR_14->vport, VAR_14->type, VAR_14->id);
free_ft:
 FUNC_11(VAR_14);
 return FUNC_0(VAR_15);
}
