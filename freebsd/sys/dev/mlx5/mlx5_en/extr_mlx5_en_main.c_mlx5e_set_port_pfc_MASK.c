
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_pauseframe_control; scalar_t__ rx_pauseframe_control; } ;
struct mlx5e_priv {scalar_t__ gone; int ifp; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_priv *VAR_2)
{
 int VAR_3;

 if (VAR_2->gone != 0) {
  VAR_3 = -VAR_1;
 } else if (VAR_2->params.rx_pauseframe_control ||
     VAR_2->params.tx_pauseframe_control) {
  FUNC_0(VAR_2->ifp,
      "Global pauseframes must be disabled before enabling PFC.\n");
  VAR_3 = -VAR_0;
 } else {
  VAR_3 = FUNC_1(VAR_2);
 }
 return (VAR_3);
}
