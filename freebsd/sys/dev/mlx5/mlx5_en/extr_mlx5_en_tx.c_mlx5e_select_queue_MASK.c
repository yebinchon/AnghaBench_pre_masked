
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_sq {int running; } ;
struct TYPE_4__ {int num_channels; } ;
struct mlx5e_priv {int num_tc; int default_vlan_prio; TYPE_3__* channel; TYPE_1__ params; } ;
struct TYPE_5__ {int ether_vtag; int flowid; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;
struct TYPE_6__ {struct mlx5e_sq* sq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,struct mbuf*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,scalar_t__,int*) ;

__attribute__((used)) static struct mlx5e_sq *
FUNC_5(struct ifnet *VAR_5, struct mbuf *VAR_6)
{
 struct mlx5e_priv *VAR_7 = VAR_5->if_softc;
 struct mlx5e_sq *VAR_8;
 u32 VAR_9;
 u32 VAR_10;


 if (VAR_6->m_flags & VAR_3) {
  VAR_10 = (VAR_6->m_pkthdr.ether_vtag >> 13);
  if (VAR_10 >= VAR_7->num_tc)
   VAR_10 = VAR_7->default_vlan_prio;
 } else {
  VAR_10 = VAR_7->default_vlan_prio;
 }

 VAR_9 = VAR_7->params.num_channels;


 if (FUNC_0(VAR_6) != VAR_2) {
   VAR_9 = (VAR_6->m_pkthdr.flowid % 128) % VAR_9;
 } else {
  VAR_9 = 0;

 }


 VAR_8 = &VAR_7->channel[VAR_9].sq[VAR_10];
 if (FUNC_2(FUNC_1(VAR_8->running) != 0))
  return (VAR_8);
 return (((void*)0));
}
