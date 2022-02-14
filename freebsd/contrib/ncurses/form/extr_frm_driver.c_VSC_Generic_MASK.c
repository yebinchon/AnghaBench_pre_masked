
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int drows; int rows; } ;
struct TYPE_4__ {int toprow; int currow; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(FORM *VAR_2, int VAR_3)
{
  FIELD *VAR_4 = VAR_2->current;
  int VAR_5 = VAR_1;
  int VAR_6 = (VAR_3 > 0 ? VAR_3 : -VAR_3);

  if (VAR_3 > 0)
    {
      if ((VAR_6 + VAR_2->toprow) > (VAR_4->drows - VAR_4->rows))
 VAR_6 = (VAR_4->drows - VAR_4->rows - VAR_2->toprow);

      if (VAR_6 > 0)
 {
   VAR_2->currow += VAR_6;
   VAR_2->toprow += VAR_6;
   VAR_5 = VAR_0;
 }
    }
  else
    {
      if (VAR_6 > VAR_2->toprow)
 VAR_6 = VAR_2->toprow;

      if (VAR_6 > 0)
 {
   VAR_2->currow -= VAR_6;
   VAR_2->toprow -= VAR_6;
   VAR_5 = VAR_0;
 }
    }
  return (VAR_5);
}
