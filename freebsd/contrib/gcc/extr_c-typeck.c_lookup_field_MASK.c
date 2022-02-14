
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {TYPE_1__* s; } ;
struct TYPE_3__ {scalar_t__* elts; int len; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_3, tree VAR_4)
{
  tree VAR_5 = FUNC_3 (VAR_3);
  tree VAR_6;






  if (FUNC_5 (VAR_5) && FUNC_5 (VAR_5)->s)
    {
      int VAR_7, VAR_8, VAR_9;
      tree *VAR_10 = &FUNC_5 (VAR_5)->s->elts[0];

      VAR_6 = FUNC_4 (VAR_5);
      VAR_7 = 0;
      VAR_8 = FUNC_5 (VAR_5)->s->len;
      while (VAR_8 - VAR_7 > 1)
 {
   VAR_9 = (VAR_8 - VAR_7 + 1) >> 1;
   VAR_6 = VAR_10[VAR_7+VAR_9];

   if (FUNC_0 (VAR_6) == VAR_0)
     {

       while (FUNC_0 (VAR_10[VAR_7]) == VAR_0)
  {
    VAR_6 = VAR_10[VAR_7++];
    if (FUNC_2 (FUNC_3 (VAR_6)) == VAR_1
        || FUNC_2 (FUNC_3 (VAR_6)) == VAR_2)
      {
        tree VAR_11 = FUNC_7 (VAR_6, VAR_4);

        if (VAR_11)
   return FUNC_6 (VAR_0, VAR_6, VAR_11);
      }
  }


       if (VAR_7 > VAR_8)
  return VAR_0;


       continue;
     }

   if (FUNC_0 (VAR_6) == VAR_4)
     break;
   if (FUNC_0 (VAR_6) < VAR_4)
     VAR_7 += VAR_9;
   else
     VAR_8 = VAR_7 + VAR_9;
 }

      if (FUNC_0 (VAR_10[VAR_7]) == VAR_4)
 VAR_6 = VAR_10[VAR_7];
      else if (FUNC_0 (VAR_6) != VAR_4)
 return VAR_0;
    }
  else
    {
      for (VAR_6 = FUNC_4 (VAR_5); VAR_6; VAR_6 = FUNC_1 (VAR_6))
 {
   if (FUNC_0 (VAR_6) == VAR_0
       && (FUNC_2 (FUNC_3 (VAR_6)) == VAR_1
    || FUNC_2 (FUNC_3 (VAR_6)) == VAR_2))
     {
       tree VAR_12 = FUNC_7 (VAR_6, VAR_4);

       if (VAR_12)
  return FUNC_6 (VAR_0, VAR_6, VAR_12);
     }

   if (FUNC_0 (VAR_6) == VAR_4)
     break;
 }

      if (VAR_6 == VAR_0)
 return VAR_0;
    }

  return FUNC_6 (VAR_0, VAR_6, VAR_0);
}
