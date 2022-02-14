
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_core_health {scalar_t__ prev; scalar_t__ miss_counter; int timer; scalar_t__ fatal_error; int health_counter; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {scalar_t__ state; TYPE_1__ priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct mlx5_core_dev *VAR_3 = (struct mlx5_core_dev *)VAR_2;
 struct mlx5_core_health *VAR_4 = &VAR_3->priv.health;
 u32 VAR_5;
 u32 VAR_6;

 if (VAR_3->state != VAR_1)
  return;

 VAR_6 = FUNC_2(VAR_4->health_counter);
 if (VAR_6 == VAR_4->prev)
  ++VAR_4->miss_counter;
 else
  VAR_4->miss_counter = 0;

 VAR_4->prev = VAR_6;
 if (VAR_4->miss_counter == VAR_0) {
  FUNC_3(VAR_3, "device's health compromised - reached miss count\n");
  if (FUNC_6(VAR_3) == 0)
   FUNC_3(VAR_3, "FW is unable to respond to initialization segment reads\n");
 }

 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 && !VAR_4->fatal_error) {
  FUNC_3(VAR_3,
      "Fatal error %u detected\n", VAR_5);
  VAR_3->priv.health.fatal_error = VAR_5;
  FUNC_6(VAR_3);
  FUNC_4(VAR_3);
 }

 FUNC_5(&VAR_4->timer, FUNC_1());
}
