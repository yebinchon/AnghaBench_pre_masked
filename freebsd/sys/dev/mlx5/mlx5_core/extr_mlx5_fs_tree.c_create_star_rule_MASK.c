
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct mlx5_flow_group* fte; struct mlx5_flow_group* fg; } ;
struct mlx5_flow_table {int id; int type; int vport; int base; TYPE_1__ star_rule; int max_fte; } ;
struct mlx5_flow_root_namespace {int fs_chain_lock; int dev; } ;
struct mlx5_flow_group {int id; } ;
struct fs_prio {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_group*) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_flow_group*) ;
 struct mlx5_flow_group* FUNC_4 (struct mlx5_flow_table*,struct mlx5_flow_group*,int *,int ) ;
 int FUNC_5 (int *,struct fs_prio*,struct mlx5_flow_table*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_flow_table* FUNC_6 (struct fs_prio*) ;
 struct mlx5_flow_table* FUNC_7 (struct mlx5_flow_table*,struct fs_prio*) ;
 struct mlx5_flow_root_namespace* FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5_flow_group*) ;
 struct mlx5_flow_group* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct fs_prio*,struct mlx5_flow_table*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct mlx5_flow_table*,struct mlx5_flow_table*) ;
 int VAR_3 ;
 int FUNC_15 (struct mlx5_flow_group*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_18 (int ,int ,int ,int ,int ) ;
 int FUNC_19 (int ,char*) ;
 int * FUNC_20 (int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_23(struct mlx5_flow_table *VAR_5, struct fs_prio *VAR_6)
{
 struct mlx5_flow_group *VAR_7;
 int VAR_8;
 u32 *VAR_9;
 u32 *VAR_10;
 struct mlx5_flow_table *VAR_11;
 struct mlx5_flow_table *VAR_12;
 struct mlx5_flow_root_namespace *VAR_13 = FUNC_8(&VAR_6->base);
 int VAR_14 = FUNC_2(VAR_1);
 int VAR_15 = FUNC_2(VAR_3);

 VAR_9 = FUNC_20(VAR_14);
 if (!VAR_9) {
  FUNC_19(VAR_13->dev, "failed to allocate inbox\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_20(VAR_15);
 if (!VAR_10) {
  FUNC_19(VAR_13->dev, "failed to allocate inbox\n");
  FUNC_16(VAR_9);
  return -VAR_0;
 }

 FUNC_1(VAR_1, VAR_9, VAR_4, VAR_5->max_fte);
 FUNC_1(VAR_1, VAR_9, VAR_2, VAR_5->max_fte);
 VAR_7 = FUNC_10(VAR_9);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_3(VAR_7);
  goto out;
 }
 VAR_5->star_rule.fg = VAR_7;
 VAR_8 = FUNC_17(FUNC_11(&VAR_6->base),
         VAR_9, VAR_5->vport, VAR_5->type,
         VAR_5->id,
         &VAR_7->id);
 if (VAR_8)
  goto free_fg;

 VAR_5->star_rule.fte = FUNC_4(VAR_5, VAR_7,
            VAR_10,
            VAR_5->max_fte);
 if (FUNC_0(VAR_5->star_rule.fte))
  goto free_star_rule;

 FUNC_21(&VAR_13->fs_chain_lock);
 VAR_11 = FUNC_6(VAR_6);
 VAR_8 = FUNC_14(VAR_13->dev, VAR_5, VAR_11);
 if (VAR_8) {
  FUNC_22(&VAR_13->fs_chain_lock);
  goto free_star_rule;
 }
 if (VAR_11) {
  struct fs_prio *VAR_16;

  FUNC_12(VAR_16, VAR_11);
  FUNC_13(&VAR_11->base);
 }
 VAR_12 = FUNC_7(VAR_5, VAR_6);
 if (VAR_12) {
  struct fs_prio *VAR_17;

  FUNC_12(VAR_17, VAR_12);

  VAR_8 = FUNC_5(((void*)0), VAR_17, VAR_5);
  if (VAR_8) {
   FUNC_22(&VAR_13->fs_chain_lock);
   goto destroy_chained_star_rule;
  }
  FUNC_13(&VAR_12->base);
 }
 FUNC_22(&VAR_13->fs_chain_lock);
 FUNC_16(VAR_9);
 FUNC_16(VAR_10);

 return 0;

destroy_chained_star_rule:
 FUNC_14(FUNC_11(&VAR_6->base), VAR_5, ((void*)0));
 if (VAR_11)
  FUNC_13(&VAR_11->base);
free_star_rule:
 FUNC_9(VAR_5->star_rule.fte);
 FUNC_18(FUNC_11(&VAR_5->base), VAR_5->vport,
          VAR_5->type, VAR_5->id,
          VAR_7->id);
free_fg:
 FUNC_15(VAR_7);
out:
 FUNC_16(VAR_9);
 FUNC_16(VAR_10);
 return VAR_8;
}
