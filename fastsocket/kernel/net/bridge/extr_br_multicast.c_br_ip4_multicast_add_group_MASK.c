
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct TYPE_2__ {int ip4; } ;
struct br_ip {int proto; TYPE_1__ u; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,struct br_ip*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_bridge *VAR_1,
          struct net_bridge_port *VAR_2,
          __be32 VAR_3)
{
 struct br_ip VAR_4;

 if (FUNC_2(VAR_3))
  return 0;

 VAR_4.u.ip4 = VAR_3;
 VAR_4.proto = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2, &VAR_4);
}
