
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {struct expr** table; int size; } ;
struct expr {struct expr* next_same_hash; int expr; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct expr *
FUNC_3 (unsigned int VAR_0, struct hash_table *VAR_1)
{
  unsigned int VAR_2 = FUNC_2 (VAR_0, VAR_1->size);
  struct expr *VAR_3;

  VAR_3 = VAR_1->table[VAR_2];

  while (VAR_3 && FUNC_0 (FUNC_1 (VAR_3->expr)) != VAR_0)
    VAR_3 = VAR_3->next_same_hash;

  return VAR_3;
}
