
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_table {int size_order; int hash_mask; int gates_lock; int * hashwlock; int hash_rnd; int entries; struct mesh_table* hash_buckets; } ;
struct hlist_head {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mesh_table*) ;
 void* FUNC_3 (int,int ) ;
 struct mesh_table* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct mesh_table *FUNC_6(int VAR_1)
{
 int VAR_2;
 struct mesh_table *VAR_3;

 VAR_3 = FUNC_3(sizeof(struct mesh_table), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->hash_buckets = FUNC_4(sizeof(struct hlist_head) *
   (1 << VAR_1), VAR_0);

 if (!VAR_3->hash_buckets) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 VAR_3->hashwlock = FUNC_3(sizeof(spinlock_t) *
   (1 << VAR_1), VAR_0);
 if (!VAR_3->hashwlock) {
  FUNC_2(VAR_3->hash_buckets);
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 VAR_3->size_order = VAR_1;
 VAR_3->hash_mask = (1 << VAR_1) - 1;
 FUNC_0(&VAR_3->entries, 0);
 FUNC_1(&VAR_3->hash_rnd,
   sizeof(VAR_3->hash_rnd));
 for (VAR_2 = 0; VAR_2 <= VAR_3->hash_mask; VAR_2++)
  FUNC_5(&VAR_3->hashwlock[VAR_2]);
 FUNC_5(&VAR_3->gates_lock);

 return VAR_3;
}
