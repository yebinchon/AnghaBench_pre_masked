
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct obj_section {scalar_t__ endaddr; } ;
struct minimal_symbol {int dummy; } ;
typedef int asection ;
struct TYPE_4__ {scalar_t__ main_func_lowpc; scalar_t__ main_func_highpc; } ;
struct TYPE_5__ {TYPE_1__ ei; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct minimal_symbol*) ;
 int * FUNC_3 (struct minimal_symbol*) ;
 int FUNC_4 (struct symbol*) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 int * FUNC_6 (struct minimal_symbol*) ;
 scalar_t__ FUNC_7 (struct minimal_symbol*) ;
 struct symbol* FUNC_8 (scalar_t__) ;
 struct obj_section* FUNC_9 (scalar_t__,int *) ;
 struct minimal_symbol* FUNC_10 (int ,int *,TYPE_2__*) ;
 int FUNC_11 () ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

int
FUNC_12 (CORE_ADDR VAR_5)
{
  struct minimal_symbol *VAR_6;

  if (VAR_4 == 0)
    return 0;

  VAR_6 = FUNC_10 (FUNC_11 (), ((void*)0), VAR_4);




  if (VAR_6 != ((void*)0)
      && VAR_4->ei.main_func_lowpc == VAR_1
      && VAR_4->ei.main_func_highpc == VAR_0)
    {
      struct symbol *VAR_7 =
 FUNC_8 (FUNC_7 (VAR_6));

      if (VAR_7 && FUNC_5 (VAR_7) == VAR_2)
 {
   VAR_4->ei.main_func_lowpc =
     FUNC_1 (FUNC_4 (VAR_7));
   VAR_4->ei.main_func_highpc =
     FUNC_0 (FUNC_4 (VAR_7));
 }
    }



  if (VAR_6 != ((void*)0) && FUNC_2 (VAR_6) == VAR_3)
    {
      CORE_ADDR VAR_8 = FUNC_7 (VAR_6);
      asection *VAR_9 = FUNC_3 (VAR_6);
      struct obj_section *VAR_10 = FUNC_9 (VAR_8, VAR_9);

      if (VAR_10 != ((void*)0))
 {
   int VAR_11;




   for (VAR_11 = 1; FUNC_6 (VAR_6 + VAR_11) != ((void*)0); VAR_11++)
     {
       if (FUNC_7 (VAR_6 + VAR_11) != VAR_8
    && FUNC_3 (VAR_6 + VAR_11) == VAR_9)
  break;
     }

   VAR_4->ei.main_func_lowpc = VAR_8;




   if (FUNC_6 (VAR_6 + VAR_11) != ((void*)0)
       && FUNC_7 (VAR_6 + VAR_11) < VAR_10->endaddr)
     VAR_4->ei.main_func_highpc =
       FUNC_7 (VAR_6 + VAR_11);
   else



     VAR_4->ei.main_func_highpc = VAR_10->endaddr;
 }
    }

  return (VAR_4->ei.main_func_lowpc <= VAR_5
   && VAR_4->ei.main_func_highpc > VAR_5);
}
