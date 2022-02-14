
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {struct neighbour* next; int dev; int primary_key; } ;
struct neigh_table {int hash_mask; unsigned int (* hash ) (int ,int ) ;struct neighbour** hash_buckets; int hash_rnd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct neigh_table*,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned long) ;
 struct neighbour** FUNC_4 (unsigned long) ;
 int FUNC_5 (struct neighbour**,unsigned int) ;
 unsigned int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct neigh_table *VAR_1, unsigned long VAR_2)
{
 struct neighbour **VAR_3, **VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;

 FUNC_1(VAR_1, VAR_0);

 FUNC_0(!FUNC_3(VAR_2));
 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  return;

 VAR_7 = VAR_1->hash_mask + 1;
 VAR_6 = VAR_2 - 1;
 VAR_4 = VAR_1->hash_buckets;

 FUNC_2(&VAR_1->hash_rnd, sizeof(VAR_1->hash_rnd));
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  struct neighbour *VAR_8, *VAR_9;

  for (VAR_8 = VAR_4[VAR_5]; VAR_8; VAR_8 = VAR_9) {
   unsigned int VAR_10 = VAR_1->hash(VAR_8->primary_key, VAR_8->dev);

   VAR_10 &= VAR_6;
   VAR_9 = VAR_8->next;

   VAR_8->next = VAR_3[VAR_10];
   VAR_3[VAR_10] = VAR_8;
  }
 }
 VAR_1->hash_buckets = VAR_3;
 VAR_1->hash_mask = VAR_6;

 FUNC_5(VAR_4, VAR_7);
}
