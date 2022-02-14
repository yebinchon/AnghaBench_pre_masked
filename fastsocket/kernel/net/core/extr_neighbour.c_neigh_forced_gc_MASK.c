
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; int dead; struct neighbour* next; int lock; int refcnt; } ;
struct neigh_table {int hash_mask; int lock; int last_flush; struct neighbour** hash_buckets; } ;


 int FUNC_0 (struct neigh_table*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct neighbour*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct neigh_table *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 FUNC_0(VAR_3, VAR_1);

 FUNC_4(&VAR_3->lock);
 for (VAR_5 = 0; VAR_5 <= VAR_3->hash_mask; VAR_5++) {
  struct neighbour *VAR_6, **VAR_7;

  VAR_7 = &VAR_3->hash_buckets[VAR_5];
  while ((VAR_6 = *VAR_7) != ((void*)0)) {




   FUNC_3(&VAR_6->lock);
   if (FUNC_1(&VAR_6->refcnt) == 1 &&
       !(VAR_6->nud_state & VAR_0)) {
    *VAR_7 = VAR_6->next;
    VAR_6->dead = 1;
    VAR_4 = 1;
    FUNC_5(&VAR_6->lock);
    FUNC_2(VAR_6);
    continue;
   }
   FUNC_5(&VAR_6->lock);
   VAR_7 = &VAR_6->next;
  }
 }

 VAR_3->last_flush = VAR_2;

 FUNC_6(&VAR_3->lock);

 return VAR_4;
}
