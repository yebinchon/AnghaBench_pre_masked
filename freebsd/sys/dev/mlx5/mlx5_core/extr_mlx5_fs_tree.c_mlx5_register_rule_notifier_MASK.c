
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int notifiers_rw_sem; int list_notifiers; } ;
struct mlx5_flow_handler {int list; struct mlx5_flow_namespace* ns; void* client_context; void* del_dst_cb; void* add_dst_cb; } ;
struct mlx5_core_dev {int dummy; } ;
typedef void* rule_event_fn ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_flow_handler* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct mlx5_flow_handler* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct mlx5_flow_namespace* FUNC_4 (struct mlx5_core_dev*,int) ;
 int FUNC_5 (int *) ;

struct mlx5_flow_handler *FUNC_6(struct mlx5_core_dev *VAR_3,
        enum mlx5_flow_namespace_type VAR_4,
        rule_event_fn VAR_5,
        rule_event_fn VAR_6,
        void *VAR_7)
{
 struct mlx5_flow_namespace *VAR_8;
 struct mlx5_flow_handler *VAR_9;

 VAR_8 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->add_dst_cb = VAR_5;
 VAR_9->del_dst_cb = VAR_6;
 VAR_9->client_context = VAR_7;
 VAR_9->ns = VAR_8;
 FUNC_1(&VAR_8->notifiers_rw_sem);
 FUNC_3(&VAR_9->list, &VAR_8->list_notifiers);
 FUNC_5(&VAR_8->notifiers_rw_sem);

 return VAR_9;
}
