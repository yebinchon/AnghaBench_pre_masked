
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct mlx5e_priv {TYPE_1__* mdev; } ;
struct mlx5_init_seg {int internal_timer_h; int internal_timer_l; } ;
struct TYPE_2__ {struct mlx5_init_seg* iseg; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static uint64_t
FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5_init_seg *VAR_1;
 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_1 = VAR_0->mdev->iseg;
 do {
  VAR_2 = FUNC_0(&VAR_1->internal_timer_h);
  VAR_4 = FUNC_0(&VAR_1->internal_timer_l);
  VAR_3 = FUNC_0(&VAR_1->internal_timer_h);
 } while (VAR_3 != VAR_2);
 return (((uint64_t)VAR_2 << 32) | VAR_4);
}
