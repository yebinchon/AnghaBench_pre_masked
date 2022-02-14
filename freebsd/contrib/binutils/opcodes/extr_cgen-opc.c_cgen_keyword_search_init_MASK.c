
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * name_hash_table; } ;
struct TYPE_6__ {char const* spec; int * current_entry; scalar_t__ current_hash; TYPE_2__* table; } ;
typedef TYPE_1__ CGEN_KEYWORD_SEARCH ;
typedef TYPE_2__ CGEN_KEYWORD ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;

CGEN_KEYWORD_SEARCH
FUNC_2 (CGEN_KEYWORD *VAR_0, const char *VAR_1)
{
  CGEN_KEYWORD_SEARCH VAR_2;


  if (VAR_1 != ((void*)0))
    FUNC_0 ();

  if (VAR_0->name_hash_table == ((void*)0))
    FUNC_1 (VAR_0);

  VAR_2.table = VAR_0;
  VAR_2.spec = VAR_1;
  VAR_2.current_hash = 0;
  VAR_2.current_entry = ((void*)0);
  return VAR_2;
}
