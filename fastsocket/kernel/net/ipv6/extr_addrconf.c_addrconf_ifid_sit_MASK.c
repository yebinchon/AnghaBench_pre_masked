
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int priv_flags; scalar_t__ dev_addr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, struct net_device *VAR_2)
{
 if (VAR_2->priv_flags & VAR_0)
  return FUNC_0(VAR_1, *(__be32 *)VAR_2->dev_addr);
 return -1;
}
