
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_mdb_htable {int max; int ver; int rcu; struct net_bridge_mdb_htable* mhash; int secret; int size; struct net_bridge_mdb_htable* old; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_mdb_htable*,struct net_bridge_mdb_htable*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct net_bridge_mdb_htable*) ;
 struct net_bridge_mdb_htable* FUNC_4 (int,int ) ;
 struct net_bridge_mdb_htable* FUNC_5 (int,int ) ;
 int FUNC_6 (struct net_bridge_mdb_htable*,struct net_bridge_mdb_htable*) ;

__attribute__((used)) static int FUNC_7(struct net_bridge_mdb_htable **VAR_3, int VAR_4,
    int VAR_5)
{
 struct net_bridge_mdb_htable *VAR_6 = *VAR_3;
 struct net_bridge_mdb_htable *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->max = VAR_4;
 VAR_7->old = VAR_6;

 VAR_7->mhash = FUNC_5(VAR_4 * sizeof(*VAR_7->mhash), VAR_1);
 if (!VAR_7->mhash) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 VAR_7->size = VAR_6 ? VAR_6->size : 0;
 VAR_7->ver = VAR_6 ? VAR_6->ver ^ 1 : 0;

 if (!VAR_6 || VAR_5)
  FUNC_2(&VAR_7->secret, sizeof(VAR_7->secret));
 else
  VAR_7->secret = VAR_6->secret;

 if (!VAR_6)
  goto out;

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_7->mhash);
  FUNC_3(VAR_7);
  return VAR_8;
 }

 FUNC_1(&VAR_7->rcu, VAR_2);

out:
 FUNC_6(*VAR_3, VAR_7);

 return 0;
}
