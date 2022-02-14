
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int size; int table; scalar_t__ n_elems; } ;
struct expr {int dummy; } ;


 int FUNC_0 (struct hash_table*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct hash_table *VAR_0)
{

  VAR_0->n_elems = 0;
  FUNC_1 (VAR_0->table, 0, VAR_0->size * sizeof (struct expr *));

  FUNC_0 (VAR_0);
}
