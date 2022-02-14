
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int expiry_time; struct cache_head* next; int flags; } ;
struct cache_detail {int hash_lock; int entries; int (* update ) (struct cache_head*,struct cache_head*) ;struct cache_head** hash_table; int (* init ) (struct cache_head*,struct cache_head*) ;struct cache_head* (* alloc ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_head*,int ) ;
 int FUNC_1 (struct cache_head*,struct cache_detail*) ;
 int FUNC_2 (struct cache_head*) ;
 int FUNC_3 (struct cache_head*) ;
 int FUNC_4 (struct cache_head*,struct cache_detail*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct cache_head*,struct cache_head*) ;
 struct cache_head* FUNC_7 () ;
 int FUNC_8 (struct cache_head*,struct cache_head*) ;
 int FUNC_9 (struct cache_head*,struct cache_head*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct cache_head *FUNC_13(struct cache_detail *VAR_2,
           struct cache_head *VAR_3, struct cache_head *VAR_4, int VAR_5)
{




 struct cache_head **VAR_6;
 struct cache_head *VAR_7;

 if (!FUNC_10(VAR_1, &VAR_4->flags)) {
  FUNC_11(&VAR_2->hash_lock);
  if (!FUNC_10(VAR_1, &VAR_4->flags)) {
   if (FUNC_10(VAR_0, &VAR_3->flags))
    FUNC_5(VAR_0, &VAR_4->flags);
   else
    VAR_2->update(VAR_4, VAR_3);
   FUNC_0(VAR_4, VAR_3->expiry_time);
   FUNC_12(&VAR_2->hash_lock);
   FUNC_1(VAR_4, VAR_2);
   return VAR_4;
  }
  FUNC_12(&VAR_2->hash_lock);
 }

 VAR_7 = VAR_2->alloc();
 if (!VAR_7) {
  FUNC_4(VAR_4, VAR_2);
  return ((void*)0);
 }
 FUNC_3(VAR_7);
 VAR_2->init(VAR_7, VAR_4);
 VAR_6 = &VAR_2->hash_table[VAR_5];

 FUNC_11(&VAR_2->hash_lock);
 if (FUNC_10(VAR_0, &VAR_3->flags))
  FUNC_5(VAR_0, &VAR_7->flags);
 else
  VAR_2->update(VAR_7, VAR_3);
 VAR_7->next = *VAR_6;
 *VAR_6 = VAR_7;
 VAR_2->entries++;
 FUNC_2(VAR_7);
 FUNC_0(VAR_7, VAR_3->expiry_time);
 FUNC_0(VAR_4, 0);
 FUNC_12(&VAR_2->hash_lock);
 FUNC_1(VAR_7, VAR_2);
 FUNC_1(VAR_4, VAR_2);
 FUNC_4(VAR_4, VAR_2);
 return VAR_7;
}
