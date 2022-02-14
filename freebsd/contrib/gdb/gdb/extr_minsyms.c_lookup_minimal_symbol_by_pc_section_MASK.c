
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int minimal_symbol_count; struct minimal_symbol* msymbols; struct objfile* next; } ;
struct obj_section {int dummy; } ;
struct minimal_symbol {scalar_t__ type; } ;
typedef int asection ;
typedef scalar_t__ CORE_ADDR ;


 int * FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ FUNC_1 (struct minimal_symbol*) ;
 struct obj_section* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct objfile* VAR_1 ;

struct minimal_symbol *
FUNC_3 (CORE_ADDR VAR_2, asection *VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;
  struct objfile *VAR_7;
  struct minimal_symbol *VAR_8;
  struct minimal_symbol *VAR_9 = ((void*)0);
  struct obj_section *VAR_10;




  VAR_10 = FUNC_2 (VAR_2);
  if (VAR_10 == ((void*)0))
    return ((void*)0);
  for (VAR_7 = VAR_1;
       VAR_7 != ((void*)0);
       VAR_7 = VAR_7->next)
    {






      if (VAR_7->minimal_symbol_count > 0)
 {
          VAR_8 = VAR_7->msymbols;
   VAR_4 = 0;
   VAR_5 = VAR_7->minimal_symbol_count - 1;
   if (VAR_2 >= FUNC_1 (&VAR_8[VAR_4]))
     {
       while (FUNC_1 (&VAR_8[VAR_5]) > VAR_2)
  {


    VAR_6 = (VAR_4 + VAR_5) / 2;
    if ((FUNC_1 (&VAR_8[VAR_6]) >= VAR_2) ||
        (VAR_4 == VAR_6))
      {
        VAR_5 = VAR_6;
      }
    else
      {
        VAR_4 = VAR_6;
      }
  }




       while (VAR_5 < VAR_7->minimal_symbol_count - 1
       && (FUNC_1 (&VAR_8[VAR_5])
    == FUNC_1 (&VAR_8[VAR_5 + 1])))
  VAR_5++;
       while (VAR_5 >= 0
       && VAR_8[VAR_5].type == VAR_0)
  --VAR_5;



       if (VAR_3)
  while (VAR_5 >= 0



         && FUNC_0 (&VAR_8[VAR_5]) != ((void*)0)
         && FUNC_0 (&VAR_8[VAR_5]) != VAR_3)
    --VAR_5;

       if (VAR_5 >= 0
    && ((VAR_9 == ((void*)0)) ||
        (FUNC_1 (VAR_9) <
         FUNC_1 (&VAR_8[VAR_5]))))
  {
    VAR_9 = &VAR_8[VAR_5];
  }
     }
 }
    }
  return (VAR_9);
}
