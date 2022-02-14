
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int * buckets; } ;
struct hash_bucket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 struct hash_table* FUNC_1 (int) ;

struct hash_table *
FUNC_2(void)
{
 struct hash_table *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return (VAR_1);
 FUNC_0(&VAR_1->buckets[0], 0,
     VAR_0 * sizeof(struct hash_bucket *));
 return (VAR_1);
}
