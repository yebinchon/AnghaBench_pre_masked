
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int hash_count; } ;
struct hash_bucket {int dummy; } ;


 int VAR_0 ;
 struct hash_table* FUNC_0 (int,int) ;

struct hash_table *
FUNC_1(int VAR_1)
{
 struct hash_table *VAR_2;

 VAR_2 = FUNC_0(1, sizeof(struct hash_table) -
     (VAR_0 * sizeof(struct hash_bucket *)) +
     (VAR_1 * sizeof(struct hash_bucket *)));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->hash_count = VAR_1;
 return (VAR_2);
}
