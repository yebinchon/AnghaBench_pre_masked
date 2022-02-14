
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ opts; TYPE_1__* form; } ;
struct TYPE_11__ {int w; scalar_t__ begincol; scalar_t__ toprow; scalar_t__ curcol; scalar_t__ currow; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 unsigned int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(FIELD *VAR_5)
{
  FORM *VAR_6;
  int VAR_7 = VAR_1;

  if (!VAR_5)
    return (VAR_0);

  if (((VAR_6 = VAR_5->form) != (FORM *)0)
      && FUNC_2(VAR_5))
    {
      if (VAR_5 == VAR_6->current)
 {
   VAR_6->currow = VAR_6->curcol = VAR_6->toprow = VAR_6->begincol = 0;
   FUNC_7(VAR_6->w);

   if (((unsigned)VAR_5->opts & VAR_2) && FUNC_3(VAR_5))
     FUNC_5(VAR_5, VAR_6->w);
   else
     FUNC_0(VAR_5, VAR_6->w);

   FUNC_4(VAR_5, VAR_4);
   VAR_7 = FUNC_6(VAR_6);
 }
      else
 VAR_7 = FUNC_1(VAR_5);
    }
  FUNC_4(VAR_5, VAR_3);
  return (VAR_7);
}
