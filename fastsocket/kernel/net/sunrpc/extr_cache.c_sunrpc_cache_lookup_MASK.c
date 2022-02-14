
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {struct cache_head* next; } ;
struct cache_detail {int hash_lock; int entries; scalar_t__ (* match ) (struct cache_head*,struct cache_head*) ;int (* init ) (struct cache_head*,struct cache_head*) ;struct cache_head* (* alloc ) () ;struct cache_head** hash_table; } ;


 int FUNC_0 (struct cache_head*) ;
 int FUNC_1 (struct cache_head*) ;
 scalar_t__ FUNC_2 (struct cache_detail*,struct cache_head*) ;
 int FUNC_3 (struct cache_head*,struct cache_detail*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct cache_head*,struct cache_head*) ;
 struct cache_head* FUNC_7 () ;
 int FUNC_8 (struct cache_head*,struct cache_head*) ;
 scalar_t__ FUNC_9 (struct cache_head*,struct cache_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct cache_head *FUNC_12(struct cache_detail *VAR_0,
           struct cache_head *VAR_1, int VAR_2)
{
 struct cache_head **VAR_3, **VAR_4;
 struct cache_head *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 VAR_3 = &VAR_0->hash_table[VAR_2];

 FUNC_4(&VAR_0->hash_lock);

 for (VAR_4=VAR_3; *VAR_4 != ((void*)0) ; VAR_4 = &(*VAR_4)->next) {
  struct cache_head *VAR_7 = *VAR_4;
  if (VAR_0->match(VAR_7, VAR_1)) {
   if (FUNC_2(VAR_0, VAR_7))

    break;
   FUNC_0(VAR_7);
   FUNC_5(&VAR_0->hash_lock);
   return VAR_7;
  }
 }
 FUNC_5(&VAR_0->hash_lock);


 VAR_5 = VAR_0->alloc();
 if (!VAR_5)
  return ((void*)0);




 FUNC_1(VAR_5);
 VAR_0->init(VAR_5, VAR_1);

 FUNC_10(&VAR_0->hash_lock);


 for (VAR_4=VAR_3; *VAR_4 != ((void*)0) ; VAR_4 = &(*VAR_4)->next) {
  struct cache_head *VAR_8 = *VAR_4;
  if (VAR_0->match(VAR_8, VAR_1)) {
   if (FUNC_2(VAR_0, VAR_8)) {
    *VAR_4 = VAR_8->next;
    VAR_8->next = ((void*)0);
    VAR_0->entries --;
    VAR_6 = VAR_8;
    break;
   }
   FUNC_0(VAR_8);
   FUNC_11(&VAR_0->hash_lock);
   FUNC_3(VAR_5, VAR_0);
   return VAR_8;
  }
 }
 VAR_5->next = *VAR_3;
 *VAR_3 = VAR_5;
 VAR_0->entries++;
 FUNC_0(VAR_5);
 FUNC_11(&VAR_0->hash_lock);

 if (VAR_6)
  FUNC_3(VAR_6, VAR_0);
 return VAR_5;
}
