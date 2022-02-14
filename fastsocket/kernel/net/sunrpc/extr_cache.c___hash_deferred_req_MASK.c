
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct cache_deferred_req {int hash; int recent; } ;


 int FUNC_0 (struct cache_head*) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct cache_deferred_req *VAR_1, struct cache_head *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_1->recent);
 FUNC_2(&VAR_1->hash, &VAR_0[VAR_3]);
}
