
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct dsa_switch {TYPE_3__* drv; } ;
struct dsa_slave_priv {int port; TYPE_2__* dev; struct dsa_switch* parent; } ;
struct TYPE_6__ {int (* get_ethtool_stats ) (struct dsa_switch*,int ,int *) ;} ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     struct ethtool_stats *VAR_1,
     uint64_t *VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_4 = VAR_3->parent;

 VAR_2[0] = VAR_3->dev->stats.tx_packets;
 VAR_2[1] = VAR_3->dev->stats.tx_bytes;
 VAR_2[2] = VAR_3->dev->stats.rx_packets;
 VAR_2[3] = VAR_3->dev->stats.rx_bytes;
 if (VAR_4->drv->get_ethtool_stats != ((void*)0))
  VAR_4->drv->get_ethtool_stats(VAR_4, VAR_3->port, VAR_2 + 4);
}
