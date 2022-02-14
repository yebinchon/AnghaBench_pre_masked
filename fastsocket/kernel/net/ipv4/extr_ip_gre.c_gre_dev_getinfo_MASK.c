
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int driver; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct ethtool_drvinfo *VAR_1)
{
 FUNC_0(VAR_1->driver, "ip_gre");
}
