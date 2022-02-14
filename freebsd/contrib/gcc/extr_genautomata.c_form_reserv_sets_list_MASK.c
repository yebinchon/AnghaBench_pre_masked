
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pattern_reserv {int dummy; } ;
typedef TYPE_2__* pattern_set_el_t ;
typedef TYPE_3__* pattern_reserv_t ;
struct TYPE_9__ {struct TYPE_9__* next_pattern_reserv; int reserv; } ;
struct TYPE_8__ {int units_num; TYPE_1__** unit_decls; struct TYPE_8__* next_pattern_set_el; } ;
struct TYPE_7__ {int in_set_p; int unit_num; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int) ;

__attribute__((used)) static pattern_reserv_t
FUNC_3 (pattern_set_el_t VAR_1)
{
  pattern_set_el_t VAR_2;
  pattern_reserv_t VAR_3, VAR_4, VAR_5;
  int VAR_6;

  VAR_5 = VAR_3 = ((void*)0);
  for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_pattern_set_el)
    {
      VAR_4 = FUNC_2 (sizeof (struct pattern_reserv));
      VAR_4->reserv = FUNC_1 ();
      VAR_4->next_pattern_reserv = ((void*)0);
      for (VAR_6 = 0; VAR_6 < VAR_2->units_num; VAR_6++)
 {
   FUNC_0 (VAR_4->reserv, VAR_2->unit_decls [VAR_6]->unit_num);
   VAR_2->unit_decls [VAR_6]->in_set_p = VAR_0;
 }
      if (VAR_5 != ((void*)0))
 VAR_5->next_pattern_reserv = VAR_4;
      else
 VAR_3 = VAR_4;
      VAR_5 = VAR_4;
    }
  return VAR_3;
}
