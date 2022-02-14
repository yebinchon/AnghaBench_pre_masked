
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void** freelist; int inuse; } ;
struct kmem_cache_cpu {int dummy; } ;
struct kmem_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,struct page*,int) ;
 int FUNC_3 (struct kmem_cache*,struct page*) ;
 int FUNC_4 (struct kmem_cache*,struct page*,void*,unsigned long) ;
 struct kmem_cache_cpu* FUNC_5 (struct kmem_cache*,int ) ;
 int FUNC_6 (struct kmem_cache*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct kmem_cache*,struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct kmem_cache_cpu*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct kmem_cache *VAR_6, struct page *VAR_7,
   void *VAR_8, unsigned long VAR_9, unsigned int VAR_10)
{
 void *VAR_11;
 void **VAR_12 = (void *)VAR_8;
 struct kmem_cache_cpu *VAR_13;

 VAR_13 = FUNC_5(VAR_6, FUNC_8());
 FUNC_12(VAR_13, VAR_4);
 FUNC_10(VAR_7);

 if (FUNC_13(VAR_5 && FUNC_0(VAR_7)))
  goto debug;

checks_ok:
 VAR_11 = VAR_12[VAR_10] = VAR_7->freelist;
 VAR_7->freelist = VAR_12;
 VAR_7->inuse--;

 if (FUNC_13(FUNC_1(VAR_7))) {
  FUNC_12(VAR_13, VAR_1);
  goto out_unlock;
 }

 if (FUNC_13(!VAR_7->inuse))
  goto slab_empty;





 if (FUNC_13(!VAR_11)) {
  FUNC_2(FUNC_6(VAR_6, FUNC_7(VAR_7)), VAR_7, 1);
  FUNC_12(VAR_13, VAR_0);
 }

out_unlock:
 FUNC_11(VAR_7);
 return;

slab_empty:
 if (VAR_11) {



  FUNC_9(VAR_6, VAR_7);
  FUNC_12(VAR_13, VAR_2);
 }
 FUNC_11(VAR_7);
 FUNC_12(VAR_13, VAR_3);
 FUNC_3(VAR_6, VAR_7);
 return;

debug:
 if (!FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9))
  goto out_unlock;
 goto checks_ok;
}
