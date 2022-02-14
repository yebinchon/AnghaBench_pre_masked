
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {scalar_t__ port_up; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 struct mlx4_en_priv* FUNC_1 (struct ifnet*) ;

void
FUNC_2(struct ifnet *VAR_0)
{
 struct mlx4_en_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->port_up == 0)
  return;

 FUNC_0(VAR_0);
}
