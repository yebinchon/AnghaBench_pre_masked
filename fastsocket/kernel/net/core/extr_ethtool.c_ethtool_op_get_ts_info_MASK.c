
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct net_device *VAR_3, struct ethtool_ts_info *VAR_4)
{
 VAR_4->so_timestamping =
  VAR_2 |
  VAR_0 |
  VAR_1;
 VAR_4->phc_index = -1;
 return 0;
}
