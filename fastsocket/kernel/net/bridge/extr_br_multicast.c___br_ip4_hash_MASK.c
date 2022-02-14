
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_bridge_mdb_htable {int max; int secret; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct net_bridge_mdb_htable *VAR_0, __be32 VAR_1)
{
 return FUNC_0(VAR_0->secret, (u32)VAR_1) & (VAR_0->max - 1);
}
