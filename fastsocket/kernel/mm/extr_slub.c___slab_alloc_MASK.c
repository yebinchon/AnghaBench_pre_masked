
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void** freelist; int inuse; int objects; } ;
struct kmem_cache_cpu {size_t offset; int node; struct page* page; void* freelist; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct kmem_cache*,struct page*,void**,unsigned long) ;
 int FUNC_3 (struct kmem_cache*,struct kmem_cache_cpu*) ;
 int FUNC_4 (struct kmem_cache*,struct kmem_cache_cpu*) ;
 struct kmem_cache_cpu* FUNC_5 (struct kmem_cache*,int ) ;
 struct page* FUNC_6 (struct kmem_cache*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct page* FUNC_9 (struct kmem_cache*,int,int) ;
 int FUNC_10 (struct kmem_cache_cpu*,int) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct kmem_cache*,int,int) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct kmem_cache_cpu*,int ) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void *FUNC_19(struct kmem_cache *VAR_8, gfp_t VAR_9, int VAR_10,
     unsigned long VAR_11, struct kmem_cache_cpu *VAR_12)
{
 void **VAR_13;
 struct page *VAR_14;


 VAR_9 &= ~VAR_7;

 if (!VAR_12->page)
  goto new_slab;

 FUNC_13(VAR_12->page);
 if (FUNC_18(!FUNC_10(VAR_12, VAR_10)))
  goto another_slab;

 FUNC_17(VAR_12, VAR_1);

load_freelist:
 VAR_13 = VAR_12->page->freelist;
 if (FUNC_18(!VAR_13))
  goto another_slab;
 if (FUNC_18(VAR_4 && FUNC_0(VAR_12->page)))
  goto debug;

 VAR_12->freelist = VAR_13[VAR_12->offset];
 VAR_12->page->inuse = VAR_12->page->objects;
 VAR_12->page->freelist = ((void*)0);
 VAR_12->node = FUNC_11(VAR_12->page);
unlock_out:
 FUNC_15(VAR_12->page);
 FUNC_17(VAR_12, VAR_3);
 return VAR_13;

another_slab:
 FUNC_3(VAR_8, VAR_12);

new_slab:
 VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_10);
 if (VAR_14) {
  VAR_12->page = VAR_14;
  FUNC_17(VAR_12, VAR_0);
  goto load_freelist;
 }

 if (VAR_9 & VAR_6)
  FUNC_8();

 VAR_14 = FUNC_9(VAR_8, VAR_9, VAR_10);

 if (VAR_9 & VAR_6)
  FUNC_7();

 if (VAR_14) {
  VAR_12 = FUNC_5(VAR_8, FUNC_16());
  FUNC_17(VAR_12, VAR_2);
  if (VAR_12->page)
   FUNC_4(VAR_8, VAR_12);
  FUNC_13(VAR_14);
  FUNC_1(VAR_14);
  VAR_12->page = VAR_14;
  goto load_freelist;
 }
 if (!(VAR_9 & VAR_5) && FUNC_12())
  FUNC_14(VAR_8, VAR_9, VAR_10);
 return ((void*)0);
debug:
 if (!FUNC_2(VAR_8, VAR_12->page, VAR_13, VAR_11))
  goto another_slab;

 VAR_12->page->inuse++;
 VAR_12->page->freelist = VAR_13[VAR_12->offset];
 VAR_12->node = -1;
 goto unlock_out;
}
