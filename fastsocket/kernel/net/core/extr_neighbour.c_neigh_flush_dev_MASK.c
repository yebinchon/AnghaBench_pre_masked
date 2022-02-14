
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neighbour {int dead; int nud_state; int lock; int output; int arp_queue; int refcnt; struct neighbour* next; struct net_device* dev; } ;
struct neigh_table {int hash_mask; struct neighbour** hash_buckets; } ;


 int FUNC_0 (char*,struct neighbour*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct neighbour*) ;
 int FUNC_3 (struct neighbour*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct neigh_table *VAR_4, struct net_device *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_4->hash_mask; VAR_6++) {
  struct neighbour *VAR_7, **VAR_8 = &VAR_4->hash_buckets[VAR_6];

  while ((VAR_7 = *VAR_8) != ((void*)0)) {
   if (VAR_5 && VAR_7->dev != VAR_5) {
    VAR_8 = &VAR_7->next;
    continue;
   }
   *VAR_8 = VAR_7->next;
   FUNC_5(&VAR_7->lock);
   FUNC_3(VAR_7);
   VAR_7->dead = 1;

   if (FUNC_1(&VAR_7->refcnt) != 1) {
    FUNC_4(&VAR_7->arp_queue);
    VAR_7->output = VAR_3;
    if (VAR_7->nud_state & VAR_2)
     VAR_7->nud_state = VAR_0;
    else
     VAR_7->nud_state = VAR_1;
    FUNC_0("neigh %p is stray.\n", VAR_7);
   }
   FUNC_6(&VAR_7->lock);
   FUNC_2(VAR_7);
  }
 }
}
