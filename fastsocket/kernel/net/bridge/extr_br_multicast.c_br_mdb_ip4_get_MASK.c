
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_mdb_htable {int dummy; } ;
struct net_bridge_mdb_entry {int dummy; } ;
struct TYPE_2__ {int ip4; } ;
struct br_ip {int proto; TYPE_1__ u; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct net_bridge_mdb_entry* FUNC_0 (struct net_bridge_mdb_htable*,struct br_ip*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct net_bridge_mdb_entry *FUNC_2(
 struct net_bridge_mdb_htable *VAR_1, __be32 VAR_2)
{
 struct br_ip VAR_3;

 VAR_3.u.ip4 = VAR_2;
 VAR_3.proto = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, &VAR_3);
}
