
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_flow_prio {int * flow_table; scalar_t__ refcount; } ;
struct mlx5_ib_dev {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_0,
      struct mlx5_ib_flow_prio *VAR_1, bool VAR_2)
{
 VAR_1->refcount -= !!VAR_2;
 if (!VAR_1->refcount) {
  FUNC_0(VAR_1->flow_table);
  VAR_1->flow_table = ((void*)0);
 }
}
