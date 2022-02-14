
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_flow_spec {int size; } ;
typedef int u32 ;
struct mlx5_ib_flow_prio {struct mlx5_flow_table* flow_table; int refcount; } ;
struct mlx5_ib_flow_handler {struct mlx5_ib_flow_prio* prio; int rule; int list; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; int match_criteria_enable; } ;
struct mlx5_flow_destination {int dummy; } ;
struct ib_flow_attr {unsigned int num_of_specs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_ib_flow_handler* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_flow_attr const*) ;
 int FUNC_6 (struct mlx5_ib_flow_handler*) ;
 int FUNC_7 (struct mlx5_flow_spec*) ;
 struct mlx5_ib_flow_handler* FUNC_8 (int,int ) ;
 int FUNC_9 (struct mlx5_flow_table*,int ,int ,int ,int ,int ,struct mlx5_flow_destination*) ;
 struct mlx5_flow_spec* FUNC_10 (int) ;
 int FUNC_11 (int ,int ,void const*) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *FUNC_12(struct mlx5_ib_dev *VAR_6,
           struct mlx5_ib_flow_prio *VAR_7,
           const struct ib_flow_attr *VAR_8,
           struct mlx5_flow_destination *VAR_9)
{
 struct mlx5_flow_table *VAR_10 = VAR_7->flow_table;
 struct mlx5_ib_flow_handler *VAR_11;
 struct mlx5_flow_spec *VAR_12;
 const void *VAR_13 = (const void *)VAR_8 + sizeof(*VAR_8);
 unsigned int VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;

 if (!FUNC_5(VAR_8))
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_10(sizeof(*VAR_12));
 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (!VAR_11 || !VAR_12) {
  VAR_16 = -VAR_1;
  goto free;
 }

 FUNC_1(&VAR_11->list);

 for (VAR_14 = 0; VAR_14 < VAR_8->num_of_specs; VAR_14++) {
  VAR_16 = FUNC_11(VAR_12->match_criteria,
          VAR_12->match_value, VAR_13);
  if (VAR_16 < 0)
   goto free;

  VAR_13 += ((union ib_flow_spec *)VAR_13)->size;
 }

 VAR_12->match_criteria_enable = FUNC_4(VAR_12->match_criteria);
 VAR_15 = VAR_9 ? VAR_3 :
  VAR_4;
 VAR_11->rule = FUNC_9(VAR_10, VAR_12->match_criteria_enable,
        VAR_12->match_criteria,
        VAR_12->match_value,
        VAR_15,
        VAR_5,
        VAR_9);

 if (FUNC_2(VAR_11->rule)) {
  VAR_16 = FUNC_3(VAR_11->rule);
  goto free;
 }

 VAR_7->refcount++;
 VAR_11->prio = VAR_7;

 VAR_7->flow_table = VAR_10;
free:
 if (VAR_16)
  FUNC_6(VAR_11);
 FUNC_7(VAR_12);
 return VAR_16 ? FUNC_0(VAR_16) : VAR_11;
}
