
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* unit_set_el_t ;
struct TYPE_5__ {TYPE_1__* unit_decl; struct TYPE_5__* next_unit_set_el; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (unit_set_el_t VAR_1)
{
  unit_set_el_t VAR_2;

  for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_unit_set_el)
    {
      if (VAR_2 != VAR_1)
 FUNC_0 (VAR_0, ", ");
      FUNC_0 (VAR_0, "%s", VAR_2->unit_decl->name);
    }
}
