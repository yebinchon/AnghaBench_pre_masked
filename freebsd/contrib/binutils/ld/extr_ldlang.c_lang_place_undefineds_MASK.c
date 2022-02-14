
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ ldlang_undef_chain_list_type ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  ldlang_undef_chain_list_type *VAR_1;

  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
    FUNC_0 (VAR_1->name);
}
