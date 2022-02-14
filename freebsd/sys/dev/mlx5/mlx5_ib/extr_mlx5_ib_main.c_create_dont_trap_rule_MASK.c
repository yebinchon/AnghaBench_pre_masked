
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_flow_prio {int refcount; } ;
struct mlx5_ib_flow_handler {int list; int rule; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct ib_flow_attr {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_ib_flow_handler*) ;
 struct mlx5_ib_flow_handler* FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr*,struct mlx5_flow_destination*) ;
 int FUNC_2 (struct mlx5_ib_flow_handler*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *FUNC_5(struct mlx5_ib_dev *VAR_0,
         struct mlx5_ib_flow_prio *VAR_1,
         struct ib_flow_attr *VAR_2,
         struct mlx5_flow_destination *VAR_3)
{
 struct mlx5_ib_flow_handler *VAR_4 = ((void*)0);
 struct mlx5_ib_flow_handler *VAR_5 = ((void*)0);

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));
 if (!FUNC_0(VAR_5)) {
  VAR_4 = FUNC_1(VAR_0, VAR_1,
            VAR_2, VAR_3);
  if (FUNC_0(VAR_4)) {
   FUNC_4(VAR_5->rule);
   VAR_1->refcount--;
   FUNC_2(VAR_5);
   VAR_5 = VAR_4;
  } else {
   FUNC_3(&VAR_4->list, &VAR_5->list);
  }
 }

 return VAR_5;
}
