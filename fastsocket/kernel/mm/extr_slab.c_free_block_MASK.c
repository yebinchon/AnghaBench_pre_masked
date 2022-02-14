
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {scalar_t__ inuse; int list; } ;
struct kmem_list3 {scalar_t__ free_objects; scalar_t__ free_limit; int slabs_partial; int slabs_free; } ;
struct kmem_cache {scalar_t__ num; struct kmem_list3** nodelists; } ;


 int FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (struct kmem_cache*,struct slab*) ;
 int FUNC_2 (struct kmem_cache*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kmem_cache*,struct slab*) ;
 int FUNC_7 (struct kmem_cache*,struct slab*,void*,int) ;
 struct slab* FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(struct kmem_cache *VAR_0, void **VAR_1, int VAR_2,
         int VAR_3)
{
 int VAR_4;
 struct kmem_list3 *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  void *VAR_6 = VAR_1[VAR_4];
  struct slab *VAR_7;

  VAR_7 = FUNC_8(VAR_6);
  VAR_5 = VAR_0->nodelists[VAR_3];
  FUNC_5(&VAR_7->list);
  FUNC_2(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_7);
  FUNC_7(VAR_0, VAR_7, VAR_6, VAR_3);
  FUNC_0(VAR_0);
  VAR_5->free_objects++;
  FUNC_1(VAR_0, VAR_7);


  if (VAR_7->inuse == 0) {
   if (VAR_5->free_objects > VAR_5->free_limit) {
    VAR_5->free_objects -= VAR_0->num;






    FUNC_6(VAR_0, VAR_7);
   } else {
    FUNC_3(&VAR_7->list, &VAR_5->slabs_free);
   }
  } else {




   FUNC_4(&VAR_7->list, &VAR_5->slabs_partial);
  }
 }
}
