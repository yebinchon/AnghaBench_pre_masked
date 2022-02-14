
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flow_cache_percpu {scalar_t__ hash_rnd_recalc; int hash_rnd; } ;
struct flow_cache {int dummy; } ;


 int FUNC_0 (struct flow_cache*,struct flow_cache_percpu*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct flow_cache *VAR_0,
         struct flow_cache_percpu *VAR_1)
{
 FUNC_1(&VAR_1->hash_rnd, sizeof(u32));
 VAR_1->hash_rnd_recalc = 0;
 FUNC_0(VAR_0, VAR_1, 0);
}
