
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct dsa_slave_priv {TYPE_1__* phy; } ;
struct TYPE_2__ {int link; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct dsa_slave_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_1)
{
 struct dsa_slave_priv *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->phy != ((void*)0)) {
  FUNC_0(VAR_2->phy);
  return VAR_2->phy->link;
 }

 return -VAR_0;
}
