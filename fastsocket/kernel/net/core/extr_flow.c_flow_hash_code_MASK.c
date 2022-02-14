
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flowi {int dummy; } ;
struct flow_cache_percpu {int hash_rnd; } ;
struct flow_cache {int dummy; } ;


 int FUNC_0 (struct flow_cache*) ;
 int FUNC_1 (int*,int,int ) ;

__attribute__((used)) static u32 FUNC_2(struct flow_cache *VAR_0,
     struct flow_cache_percpu *VAR_1,
     struct flowi *VAR_2)
{
 u32 *VAR_3 = (u32 *) VAR_2;

 return (FUNC_1(VAR_3, (sizeof(*VAR_2) / sizeof(u32)), VAR_1->hash_rnd)
  & (FUNC_0(VAR_0) - 1));
}
