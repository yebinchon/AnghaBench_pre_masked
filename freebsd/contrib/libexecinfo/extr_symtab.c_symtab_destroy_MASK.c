
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nsymbols; struct TYPE_4__* symbols; struct TYPE_4__* st_name; } ;
typedef TYPE_1__ symtab_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(symtab_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->nsymbols; VAR_1++)
  FUNC_0(VAR_0->symbols[VAR_1].st_name);
 FUNC_0(VAR_0->symbols);
 FUNC_0(VAR_0);
}
