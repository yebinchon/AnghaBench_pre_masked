
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* pattern_set_el_t ;
struct TYPE_5__ {int units_num; TYPE_1__** unit_decls; struct TYPE_5__* next_pattern_set_el; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (pattern_set_el_t VAR_1)
{
  pattern_set_el_t VAR_2;
  int VAR_3;

  for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_pattern_set_el)
    {
      if (VAR_2 != VAR_1)
 FUNC_0 (VAR_0, ", ");
      for (VAR_3 = 0; VAR_3 < VAR_2->units_num; VAR_3++)
 FUNC_0 (VAR_0, (VAR_3 == 0 ? "%d" : " %s"),
   VAR_2->unit_decls [VAR_3]->name);
    }
}
