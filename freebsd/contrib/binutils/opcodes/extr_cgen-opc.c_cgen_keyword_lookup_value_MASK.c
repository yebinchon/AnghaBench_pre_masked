
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** value_hash_table; int * name_hash_table; } ;
struct TYPE_7__ {int value; struct TYPE_7__* next_value; } ;
typedef TYPE_1__ CGEN_KEYWORD_ENTRY ;
typedef TYPE_2__ CGEN_KEYWORD ;


 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (TYPE_2__*,int) ;

const CGEN_KEYWORD_ENTRY *
FUNC_2 (CGEN_KEYWORD *VAR_0, int VAR_1)
{
  const CGEN_KEYWORD_ENTRY *VAR_2;

  if (VAR_0->name_hash_table == ((void*)0))
    FUNC_0 (VAR_0);

  VAR_2 = VAR_0->value_hash_table[FUNC_1 (VAR_0, VAR_1)];

  while (VAR_2 != ((void*)0))
    {
      if (VAR_1 == VAR_2->value)
 return VAR_2;
      VAR_2 = VAR_2->next_value;
    }

  return ((void*)0);
}
