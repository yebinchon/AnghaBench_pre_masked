
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_slave_priv {int * phy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dsa_slave_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct dsa_slave_priv *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->phy != ((void*)0))
  return FUNC_0(VAR_2->phy);

 return -VAR_0;
}
