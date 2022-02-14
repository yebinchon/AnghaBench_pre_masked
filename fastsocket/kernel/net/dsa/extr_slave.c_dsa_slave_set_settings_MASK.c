
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct dsa_slave_priv {int * phy; } ;


 int VAR_0 ;
 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->phy != ((void*)0))
  return FUNC_1(VAR_3->phy, VAR_2);

 return -VAR_0;
}
