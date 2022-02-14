
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neigh_parms {int dead; int rcu_head; scalar_t__ dev; struct neigh_parms* next; } ;
struct neigh_table {int lock; struct neigh_parms parms; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct neigh_table *VAR_1, struct neigh_parms *VAR_2)
{
 struct neigh_parms **VAR_3;

 if (!VAR_2 || VAR_2 == &VAR_1->parms)
  return;
 FUNC_3(&VAR_1->lock);
 for (VAR_3 = &VAR_1->parms.next; *VAR_3; VAR_3 = &(*VAR_3)->next) {
  if (*VAR_3 == VAR_2) {
   *VAR_3 = VAR_2->next;
   VAR_2->dead = 1;
   FUNC_4(&VAR_1->lock);
   if (VAR_2->dev)
    FUNC_2(VAR_2->dev);
   FUNC_1(&VAR_2->rcu_head, VAR_0);
   return;
  }
 }
 FUNC_4(&VAR_1->lock);
 FUNC_0("neigh_parms_release: not found\n");
}
