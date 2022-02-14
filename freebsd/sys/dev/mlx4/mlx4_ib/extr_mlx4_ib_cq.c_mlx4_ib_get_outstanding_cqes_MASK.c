
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cons_index; } ;
struct mlx4_ib_cq {TYPE_1__ mcq; } ;


 scalar_t__ FUNC_0 (struct mlx4_ib_cq*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx4_ib_cq *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->mcq.cons_index;
 while (FUNC_0(VAR_0, VAR_1))
  ++VAR_1;

 return VAR_1 - VAR_0->mcq.cons_index;
}
