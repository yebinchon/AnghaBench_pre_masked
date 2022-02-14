
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {int dummy; } ;
struct page {int lru; } ;
struct kmem_cache {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*,struct page*) ;
 int FUNC_1 (struct rcu_head*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct kmem_cache *VAR_2, struct page *VAR_3)
{
 if (FUNC_2(VAR_2->flags & VAR_0)) {



  struct rcu_head *VAR_4 = (void *)&VAR_3->lru;

  FUNC_1(VAR_4, VAR_1);
 } else
  FUNC_0(VAR_2, VAR_3);
}
