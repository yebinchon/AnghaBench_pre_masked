
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ freelist; scalar_t__ inuse; } ;
struct kmem_cache_node {scalar_t__ nr_partial; } ;
struct kmem_cache_cpu {int dummy; } ;
struct kmem_cache {int flags; scalar_t__ min_partial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct kmem_cache_node*,struct page*) ;
 int FUNC_3 (struct kmem_cache_node*,struct page*,int) ;
 int FUNC_4 (struct kmem_cache*,struct page*) ;
 struct kmem_cache_cpu* FUNC_5 (struct kmem_cache*,int ) ;
 struct kmem_cache_node* FUNC_6 (struct kmem_cache*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct kmem_cache_cpu*,int ) ;

__attribute__((used)) static void FUNC_12(struct kmem_cache *VAR_7, struct page *VAR_8, int VAR_9)
{
 struct kmem_cache_node *VAR_10 = FUNC_6(VAR_7, FUNC_7(VAR_8));
 struct kmem_cache_cpu *VAR_11 = FUNC_5(VAR_7, FUNC_10());

 FUNC_1(VAR_8);
 if (VAR_8->inuse) {

  if (VAR_8->freelist) {
   FUNC_3(VAR_10, VAR_8, VAR_9);
   FUNC_11(VAR_11, VAR_9 ? VAR_3 : VAR_2);
  } else {
   FUNC_11(VAR_11, VAR_1);
   if (VAR_5 && FUNC_0(VAR_8) &&
      (VAR_7->flags & VAR_6))
    FUNC_2(VAR_10, VAR_8);
  }
  FUNC_9(VAR_8);
 } else {
  FUNC_11(VAR_11, VAR_0);
  if (VAR_10->nr_partial < VAR_7->min_partial) {
   FUNC_3(VAR_10, VAR_8, 1);
   FUNC_9(VAR_8);
  } else {
   FUNC_9(VAR_8);
   FUNC_11(FUNC_5(VAR_7, FUNC_8()), VAR_4);
   FUNC_4(VAR_7, VAR_8);
  }
 }
}
