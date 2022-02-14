
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__ const* next_name; } ;
struct TYPE_7__ {size_t current_hash; TYPE_3__ const* current_entry; TYPE_1__* table; } ;
struct TYPE_6__ {size_t hash_table_size; TYPE_3__ const** name_hash_table; } ;
typedef TYPE_2__ CGEN_KEYWORD_SEARCH ;
typedef TYPE_3__ CGEN_KEYWORD_ENTRY ;



const CGEN_KEYWORD_ENTRY *
FUNC_0 (CGEN_KEYWORD_SEARCH *VAR_0)
{

  if (VAR_0->current_hash == VAR_0->table->hash_table_size)
    return ((void*)0);


  if (VAR_0->current_entry != ((void*)0)

      && VAR_0->current_entry->next_name != ((void*)0))
    {
      VAR_0->current_entry = VAR_0->current_entry->next_name;
      return VAR_0->current_entry;
    }


  if (VAR_0->current_entry != ((void*)0))
    ++VAR_0->current_hash;

  while (VAR_0->current_hash < VAR_0->table->hash_table_size)
    {
      VAR_0->current_entry = VAR_0->table->name_hash_table[VAR_0->current_hash];
      if (VAR_0->current_entry != ((void*)0))
 return VAR_0->current_entry;
      ++VAR_0->current_hash;
    }

  return ((void*)0);
}
