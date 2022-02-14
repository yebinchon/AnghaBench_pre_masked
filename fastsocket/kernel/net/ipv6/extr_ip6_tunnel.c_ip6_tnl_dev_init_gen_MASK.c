
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_2__ {int name; } ;
struct ip6_tnl {TYPE_1__ parms; struct net_device* dev; } ;


 struct ip6_tnl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct net_device *VAR_0)
{
 struct ip6_tnl *VAR_1 = FUNC_0(VAR_0);
 VAR_1->dev = VAR_0;
 FUNC_1(VAR_1->parms.name, VAR_0->name);
}
