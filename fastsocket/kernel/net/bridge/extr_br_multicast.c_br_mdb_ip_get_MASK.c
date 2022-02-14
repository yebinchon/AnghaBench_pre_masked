
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_htable {int dummy; } ;
struct net_bridge_mdb_entry {int dummy; } ;
struct br_ip {int dummy; } ;


 struct net_bridge_mdb_entry* FUNC_0 (struct net_bridge_mdb_htable*,struct br_ip*,int ) ;
 int FUNC_1 (struct net_bridge_mdb_htable*,struct br_ip*) ;

__attribute__((used)) static struct net_bridge_mdb_entry *FUNC_2(
 struct net_bridge_mdb_htable *VAR_0, struct br_ip *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_0, VAR_1));
}
