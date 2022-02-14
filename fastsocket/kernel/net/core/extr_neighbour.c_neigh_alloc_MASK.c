
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {unsigned long updated; unsigned long used; int dead; int refcnt; struct neigh_table* tbl; int timer; int parms; int output; int nud_state; int lock; int arp_queue; } ;
struct neigh_table {int gc_thresh3; int gc_thresh2; int entries; int parms; int kmem_cachep; scalar_t__ last_flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neigh_table*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 unsigned long VAR_4 ;
 struct neighbour* FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct neigh_table*) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static struct neighbour *FUNC_11(struct neigh_table *VAR_7)
{
 struct neighbour *VAR_8 = ((void*)0);
 unsigned long VAR_9 = VAR_4;
 int VAR_10;

 VAR_10 = FUNC_2(&VAR_7->entries) - 1;
 if (VAR_10 >= VAR_7->gc_thresh3 ||
     (VAR_10 >= VAR_7->gc_thresh2 &&
      FUNC_10(VAR_9, VAR_7->last_flush + 5 * VAR_1))) {
  if (!FUNC_5(VAR_7) &&
      VAR_10 >= VAR_7->gc_thresh3)
   goto out_entries;
 }

 VAR_8 = FUNC_4(VAR_7->kmem_cachep, VAR_0);
 if (!VAR_8)
  goto out_entries;

 FUNC_9(&VAR_8->arp_queue);
 FUNC_7(&VAR_8->lock);
 VAR_8->updated = VAR_8->used = VAR_9;
 VAR_8->nud_state = VAR_2;
 VAR_8->output = VAR_5;
 VAR_8->parms = FUNC_6(&VAR_7->parms);
 FUNC_8(&VAR_8->timer, VAR_6, (unsigned long)VAR_8);

 FUNC_0(VAR_7, VAR_3);
 VAR_8->tbl = VAR_7;
 FUNC_3(&VAR_8->refcnt, 1);
 VAR_8->dead = 1;
out:
 return VAR_8;

out_entries:
 FUNC_1(&VAR_7->entries);
 goto out;
}
