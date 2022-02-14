
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {scalar_t__ last_link_state; } ;
struct ifnet {struct mlx4_en_priv* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*) ;

__attribute__((used)) static void FUNC_1(struct ifnet *VAR_3, struct ifmediareq *VAR_4)
{
 struct mlx4_en_priv *VAR_5;

 VAR_5 = VAR_3->if_softc;
 VAR_4->ifm_status = VAR_1;
 if (VAR_5->last_link_state != VAR_2)
  VAR_4->ifm_status |= VAR_0;
 VAR_4->ifm_active = FUNC_0(VAR_5);

 return;
}
