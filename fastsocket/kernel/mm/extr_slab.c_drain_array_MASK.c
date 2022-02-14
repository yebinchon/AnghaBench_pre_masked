
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_list3 {int list_lock; } ;
struct kmem_cache {int dummy; } ;
struct array_cache {int avail; int limit; int * entry; scalar_t__ touched; } ;


 int FUNC_0 (struct kmem_cache*,int *,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kmem_cache *VAR_0, struct kmem_list3 *VAR_1,
    struct array_cache *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_2 || !VAR_2->avail)
  return;
 if (VAR_2->touched && !VAR_3) {
  VAR_2->touched = 0;
 } else {
  FUNC_2(&VAR_1->list_lock);
  if (VAR_2->avail) {
   VAR_5 = VAR_3 ? VAR_2->avail : (VAR_2->limit + 4) / 5;
   if (VAR_5 > VAR_2->avail)
    VAR_5 = (VAR_2->avail + 1) / 2;
   FUNC_0(VAR_0, VAR_2->entry, VAR_5, VAR_4);
   VAR_2->avail -= VAR_5;
   FUNC_1(VAR_2->entry, &(VAR_2->entry[VAR_5]),
    sizeof(void *) * VAR_2->avail);
  }
  FUNC_3(&VAR_1->list_lock);
 }
}
