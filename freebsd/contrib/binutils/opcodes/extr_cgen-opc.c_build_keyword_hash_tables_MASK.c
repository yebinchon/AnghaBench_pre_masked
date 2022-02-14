
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_init_entries; unsigned int hash_table_size; int * init_entries; int ** value_hash_table; int ** name_hash_table; } ;
typedef int CGEN_KEYWORD_ENTRY ;
typedef TYPE_1__ CGEN_KEYWORD ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int **,int ,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void
FUNC_4 (CGEN_KEYWORD *VAR_0)
{
  int VAR_1;


  unsigned int VAR_2 = FUNC_0 (VAR_0->num_init_entries);

  VAR_0->hash_table_size = VAR_2;
  VAR_0->name_hash_table = (CGEN_KEYWORD_ENTRY **)
    FUNC_3 (VAR_2 * sizeof (CGEN_KEYWORD_ENTRY *));
  FUNC_2 (VAR_0->name_hash_table, 0, VAR_2 * sizeof (CGEN_KEYWORD_ENTRY *));
  VAR_0->value_hash_table = (CGEN_KEYWORD_ENTRY **)
    FUNC_3 (VAR_2 * sizeof (CGEN_KEYWORD_ENTRY *));
  FUNC_2 (VAR_0->value_hash_table, 0, VAR_2 * sizeof (CGEN_KEYWORD_ENTRY *));



  for (VAR_1 = VAR_0->num_init_entries - 1; VAR_1 >= 0; --VAR_1)
    FUNC_1 (VAR_0, &VAR_0->init_entries[VAR_1]);
}
