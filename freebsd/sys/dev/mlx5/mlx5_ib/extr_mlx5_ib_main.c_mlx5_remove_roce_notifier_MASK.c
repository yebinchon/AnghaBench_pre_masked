
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * notifier_call; } ;
struct TYPE_3__ {TYPE_2__ nb; } ;
struct mlx5_ib_dev {TYPE_1__ roce; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_0)
{
 if (VAR_0->roce.nb.notifier_call) {
  FUNC_0(&VAR_0->roce.nb);
  VAR_0->roce.nb.notifier_call = ((void*)0);
 }
}
