
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {scalar_t__ watchdog_time; } ;
struct mlx4_en_priv {int port_up; struct mlx4_en_tx_ring** tx_ring; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mlx4_en_priv*,int,struct mbuf**) ;
 struct mlx4_en_priv* FUNC_3 (struct ifnet*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_5, int VAR_6, struct mbuf *VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_3(VAR_5);
 struct mlx4_en_tx_ring *VAR_9 = VAR_8->tx_ring[VAR_6];
 int VAR_10 = 0;

 if (FUNC_4((VAR_5->if_drv_flags & VAR_2) == 0 ||
     FUNC_0(VAR_8->port_up) == 0)) {
  FUNC_1(VAR_7);
  return (VAR_0);
 }

 if (FUNC_2(VAR_8, VAR_6, &VAR_7) != 0) {

  FUNC_1(VAR_7);
  VAR_10 = VAR_1;
  if (VAR_9->watchdog_time == 0)
   VAR_9->watchdog_time = VAR_4 + VAR_3;
 } else {
  VAR_9->watchdog_time = 0;
 }
 return (VAR_10);
}
