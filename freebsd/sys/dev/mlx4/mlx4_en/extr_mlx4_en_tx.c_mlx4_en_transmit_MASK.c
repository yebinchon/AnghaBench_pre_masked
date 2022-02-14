
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_tx_ring {int tx_lock; } ;
struct mlx4_en_priv {scalar_t__ port_up; int tx_ring_num; struct mlx4_en_tx_ring** tx_ring; } ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct ifnet*,struct mbuf*) ;
 int FUNC_4 (struct ifnet*,int,struct mbuf*) ;
 int FUNC_5 (struct mlx4_en_priv*,int) ;
 struct mlx4_en_priv* FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int
FUNC_10(struct ifnet *VAR_3, struct mbuf *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_6(VAR_3);
 struct mlx4_en_tx_ring *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (VAR_5->port_up == 0) {
  FUNC_2(VAR_4);
  return (VAR_0);
 }


 if (FUNC_0(VAR_4) != VAR_2) {
  VAR_7 = (VAR_4->m_pkthdr.flowid % 128) % VAR_5->tx_ring_num;
 }
 else {
  VAR_7 = FUNC_3(VAR_3, VAR_4);
 }

 VAR_6 = VAR_5->tx_ring[VAR_7];

 FUNC_7(&VAR_6->tx_lock);

 VAR_8 = FUNC_4(VAR_3, VAR_7, VAR_4);
 FUNC_8(&VAR_6->tx_lock);


 FUNC_5(VAR_5, VAR_7);





 return (VAR_8);
}
