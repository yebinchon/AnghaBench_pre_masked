
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int off; int type; } ;
struct unw_ireg {unsigned long* loc; TYPE_1__ nat; } ;
struct _Unwind_Context {unsigned long regstk_top; unsigned long rnat; scalar_t__ bsp; struct unw_ireg* ireg; } ;






 int FUNC_0 () ;
 unsigned long* FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (unsigned long*,int) ;
 unsigned long FUNC_3 (unsigned long*) ;

__attribute__((used)) static void
FUNC_4 (struct _Unwind_Context *VAR_0, int VAR_1,
        unsigned long *VAR_2, char *VAR_3, int VAR_4)
{
  unsigned long *VAR_5, *VAR_6 = 0, VAR_7 = 0, VAR_8;
  struct unw_ireg *VAR_9;

  if ((unsigned) VAR_1 - 1 >= 127)
    FUNC_0 ();

  if (VAR_1 < 1)
    {
      VAR_6 = VAR_5 = &VAR_8;
      VAR_8 = 0;
    }
  else if (VAR_1 < 32)
    {

      VAR_9 = &VAR_0->ireg[VAR_1 - 2];
      VAR_5 = VAR_9->loc;
      if (VAR_5)
 {
   VAR_6 = VAR_5 + VAR_9->nat.off;
   switch (VAR_9->nat.type)
     {
     case 128:

       if (VAR_4)
  {
    if (*VAR_3)
      {

        VAR_5[0] = 0;
        VAR_5[1] = 0x1fffe;
        return;
      }
    VAR_5[1] = 0x1003e;
  }
       else if (VAR_5[0] == 0 && VAR_5[1] == 0x1ffe)
  {

    *VAR_2 = 0;
    *VAR_3 = 1;
    return;
  }


     case 130:
       VAR_8 = 0;
       VAR_6 = &VAR_8;
       break;

     case 131:
       VAR_7 = 1UL << ((long) VAR_5 & 0x1f8)/8;
       break;

     case 129:
       if ((unsigned long) VAR_5 >= VAR_0->regstk_top)
  VAR_6 = &VAR_0->rnat;
       else
  VAR_6 = FUNC_1 (VAR_5);
       VAR_7 = 1UL << FUNC_3 (VAR_5);
       break;
     }
 }
    }
  else
    {

      VAR_5 = FUNC_2 ((unsigned long *) VAR_0->bsp, VAR_1 - 32);
      if ((unsigned long) VAR_5 >= VAR_0->regstk_top)
 VAR_6 = &VAR_0->rnat;
      else
 VAR_6 = FUNC_1 (VAR_5);
      VAR_7 = 1UL << FUNC_3 (VAR_5);
    }

  if (VAR_4)
    {
      *VAR_5 = *VAR_2;
      if (*VAR_3)
 *VAR_6 |= VAR_7;
      else
 *VAR_6 &= ~VAR_7;
    }
  else
    {
      *VAR_2 = *VAR_5;
      *VAR_3 = (*VAR_6 & VAR_7) != 0;
    }
}
