
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int num_tx_rings_p_up; } ;
struct TYPE_2__ {int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct mbuf*,int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

u16 FUNC_2(struct net_device *VAR_5, struct mbuf *VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = VAR_7->num_tx_rings_p_up;
 u32 VAR_9 = 0;
 u32 VAR_10;
 VAR_10 = FUNC_0(VAR_0 | VAR_1, VAR_6, VAR_4);

 return ((VAR_10 % VAR_8) + (VAR_9 * VAR_8));
}
