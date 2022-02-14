
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _PAGE ;
struct TYPE_5__ {TYPE_1__* form; } ;
struct TYPE_4__ {int maxfield; int maxpage; int * page; TYPE_2__** field; scalar_t__ cols; scalar_t__ rows; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(FORM *VAR_0)
{
  if (VAR_0->field)
    {
      FIELD **VAR_1;

      for (VAR_1 = VAR_0->field; *VAR_1; VAR_1++)
 {
   if (VAR_0 == (*VAR_1)->form)
     (*VAR_1)->form = (FORM *)0;
 }

      VAR_0->rows = VAR_0->cols = 0;
      VAR_0->maxfield = VAR_0->maxpage = -1;
      VAR_0->field = (FIELD **)0;
      if (VAR_0->page)
 FUNC_0(VAR_0->page);
      VAR_0->page = (_PAGE *) 0;
    }
}
