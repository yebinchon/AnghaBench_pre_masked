
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nargs; TYPE_1__* arg; } ;
typedef TYPE_2__ ins ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ r; unsigned int constant; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6 (ins *VAR_9)
{



  if (FUNC_1 (VAR_0))
    {

      if ((VAR_9->arg[0].type == VAR_4) || (VAR_9->arg[1].type == VAR_4))
        if (VAR_9->arg[0].r == VAR_9->arg[1].r)
          FUNC_3 (FUNC_2("Same src/dest register is used (`r%d'), result is undefined"), VAR_9->arg[0].r);
    }

  if (FUNC_0 ("pop")
      || FUNC_0 ("push")
      || FUNC_0 ("popret"))
    {
      unsigned int VAR_10 = VAR_9->arg[0].constant, VAR_11;



     if (VAR_9->nargs > 2)
       {
         VAR_11 = FUNC_5 (VAR_9->arg[1].r);

         if ( ((VAR_11 == 9) && (VAR_10 > 7))
      || ((VAR_11 == 10) && (VAR_10 > 6))
      || ((VAR_11 == 11) && (VAR_10 > 5))
      || ((VAR_11 == 12) && (VAR_10 > 4))
      || ((VAR_11 == 13) && (VAR_10 > 2))
      || ((VAR_11 == 14) && (VAR_10 > 0)))
           FUNC_4 (FUNC_2("RA register is saved twice."));


         if (!(((VAR_9->arg[2].r) == VAR_7) || ((VAR_9->arg[2].r) == VAR_3)))
           FUNC_3 (FUNC_2("`%s' Illegal use of registers."), VAR_5);
       }

      if (VAR_9->nargs > 1)
       {
         VAR_11 = FUNC_5 (VAR_9->arg[1].r);



         if (((VAR_11 == 11) && (VAR_10 > 7))
      || ((VAR_11 == 12) && (VAR_10 > 6))
      || ((VAR_11 == 13) && (VAR_10 > 4))
      || ((VAR_11 == 14) && (VAR_10 > 2))
      || ((VAR_11 == 15) && (VAR_10 > 0)))
           FUNC_3 (FUNC_2("`%s' Illegal count-register combination."), VAR_5);
       }
     else
       {

         if (!(((VAR_9->arg[0].r) == VAR_7) || ((VAR_9->arg[0].r) == VAR_3)))
           FUNC_3 (FUNC_2("`%s' Illegal use of register."), VAR_5);
       }
    }



  if (VAR_6->flags & VAR_2)
    {
      if (FUNC_5 (VAR_9->arg[1].r) == FUNC_5 (VAR_8))
        FUNC_3 (FUNC_2("`%s' has undefined result"), VAR_5);
    }



  if (VAR_6->flags & VAR_1)
    {
      if ((1 << FUNC_5 (VAR_9->arg[0].r)) & VAR_9->arg[1].constant)
        FUNC_3 (FUNC_2("Same src/dest register is used (`r%d'),result is undefined"),
                  FUNC_5 (VAR_9->arg[0].r));
    }
}
