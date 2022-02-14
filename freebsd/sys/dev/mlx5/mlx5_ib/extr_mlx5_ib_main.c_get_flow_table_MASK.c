
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_flow_prio {struct mlx5_flow_table* flow_table; scalar_t__ refcount; } ;
struct TYPE_2__ {struct mlx5_ib_flow_prio* sniffer; struct mlx5_ib_flow_prio* prios; } ;
struct mlx5_ib_dev {TYPE_1__ flow_db; int mdev; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct ib_flow_attr {int flags; scalar_t__ type; int priority; } ;
typedef enum flow_table_type { ____Placeholder_flow_table_type } flow_table_type ;


 int VAR_0 ;
 struct mlx5_ib_flow_prio* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct mlx5_flow_table*) ;
 int VAR_15 ;
 int FUNC_4 (char*,int*,int*,int*) ;
 scalar_t__ FUNC_5 (struct ib_flow_attr*) ;
 int FUNC_6 (int ,int) ;
 struct mlx5_flow_table* FUNC_7 (struct mlx5_flow_namespace*,int,char*,int,int) ;
 struct mlx5_flow_namespace* FUNC_8 (int ,int ) ;

__attribute__((used)) static struct mlx5_ib_flow_prio *FUNC_9(struct mlx5_ib_dev *VAR_16,
      struct ib_flow_attr *VAR_17,
      enum flow_table_type VAR_18)
{
 bool VAR_19 = VAR_17->flags & VAR_2;
 struct mlx5_flow_namespace *VAR_20 = ((void*)0);
 struct mlx5_ib_flow_prio *VAR_21;
 struct mlx5_flow_table *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26 = 0;

 if (VAR_17->type == VAR_4) {
  if (FUNC_5(VAR_17) &&
      !VAR_19)
   VAR_25 = VAR_13;
  else
   VAR_25 = FUNC_6(VAR_17->priority,
       VAR_19);
  VAR_20 = FUNC_8(VAR_16->mdev,
          VAR_6);
  VAR_23 = VAR_10;
  VAR_24 = VAR_11;
  VAR_21 = &VAR_16->flow_db.prios[VAR_25];
 } else if (VAR_17->type == VAR_1 ||
     VAR_17->type == VAR_3) {
  VAR_20 = FUNC_8(VAR_16->mdev,
          VAR_7);
  FUNC_4("bypass", &VAR_25,
      &VAR_23,
      &VAR_24);
  VAR_21 = &VAR_16->flow_db.prios[VAR_12];
 } else if (VAR_17->type == VAR_5) {
  if (!FUNC_2(VAR_16->mdev,
     VAR_15))
   return FUNC_0(-VAR_0);

  VAR_20 = FUNC_8(VAR_16->mdev, VAR_18 == VAR_14 ?
          VAR_8 :
          VAR_9);

  VAR_21 = &VAR_16->flow_db.sniffer[VAR_18];
  VAR_25 = 0;
  VAR_23 = 1;
  VAR_24 = 1;
 }

 if (!VAR_20)
  return FUNC_0(-VAR_0);

 VAR_22 = VAR_21->flow_table;
 if (!VAR_22) {
  VAR_22 = FUNC_7(VAR_20, VAR_25, "bypass",
        VAR_23,
        VAR_24);

  if (!FUNC_1(VAR_22)) {
   VAR_21->refcount = 0;
   VAR_21->flow_table = VAR_22;
  } else {
   VAR_26 = FUNC_3(VAR_22);
  }
 }

 return VAR_26 ? FUNC_0(VAR_26) : VAR_21;
}
