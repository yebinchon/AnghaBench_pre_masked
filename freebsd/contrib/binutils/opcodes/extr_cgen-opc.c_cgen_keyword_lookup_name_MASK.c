
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__ const* null_entry; TYPE_1__** name_hash_table; } ;
struct TYPE_7__ {char* name; struct TYPE_7__* next_name; } ;
typedef TYPE_1__ CGEN_KEYWORD_ENTRY ;
typedef TYPE_2__ CGEN_KEYWORD ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (TYPE_2__*,char const*,int ) ;

const CGEN_KEYWORD_ENTRY *
FUNC_4 (CGEN_KEYWORD *VAR_0, const char *VAR_1)
{
  const CGEN_KEYWORD_ENTRY *VAR_2;
  const char *VAR_3,*VAR_4;

  if (VAR_0->name_hash_table == ((void*)0))
    FUNC_2 (VAR_0);

  VAR_2 = VAR_0->name_hash_table[FUNC_3 (VAR_0, VAR_1, 0)];





  while (VAR_2 != ((void*)0))
    {
      VAR_4 = VAR_1;
      VAR_3 = VAR_2->name;

      while (*VAR_3
      && (*VAR_3 == *VAR_4
   || (FUNC_0 (*VAR_3) && (FUNC_1 (*VAR_3) == FUNC_1 (*VAR_4)))))
 ++VAR_4, ++VAR_3;

      if (!*VAR_3 && !*VAR_4)
 return VAR_2;

      VAR_2 = VAR_2->next_name;
    }

  if (VAR_0->null_entry)
    return VAR_0->null_entry;
  return ((void*)0);
}
