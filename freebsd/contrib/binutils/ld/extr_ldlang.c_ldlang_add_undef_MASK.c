
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ ldlang_undef_chain_list_type ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const* const) ;

void
FUNC_3 (const char *const VAR_2)
{
  ldlang_undef_chain_list_type *VAR_3 =
    FUNC_1 (sizeof (ldlang_undef_chain_list_type));

  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;

  VAR_3->name = FUNC_2 (VAR_2);

  if (VAR_1 != ((void*)0))
    FUNC_0 (VAR_3->name);
}
