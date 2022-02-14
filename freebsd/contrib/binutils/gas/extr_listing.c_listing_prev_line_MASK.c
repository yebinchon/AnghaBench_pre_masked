
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int frag; struct TYPE_6__* next; } ;
typedef TYPE_1__ list_info_type ;
struct TYPE_7__ {TYPE_1__* line; struct TYPE_7__* fr_next; } ;
typedef TYPE_2__ fragS ;
struct TYPE_8__ {TYPE_2__* frch_root; } ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;

void
FUNC_1 (void)
{
  list_info_type *VAR_4;
  fragS *VAR_5;

  if (VAR_2 == (list_info_type *) ((void*)0)
      || VAR_2 == VAR_3)
    return;

  FUNC_0 ();

  for (VAR_4 = VAR_2; VAR_4->next != VAR_3; VAR_4 = VAR_4->next)
    ;

  for (VAR_5 = VAR_1->frch_root; VAR_5 != (fragS *) ((void*)0); VAR_5 = VAR_5->fr_next)
    if (VAR_5->line == VAR_3)
      VAR_5->line = VAR_4;

  VAR_3->frag = VAR_0;
  FUNC_0 ();
}
