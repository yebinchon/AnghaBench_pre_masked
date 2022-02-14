
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__* elts; int len; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

tree
FUNC_15 (tree VAR_9, tree VAR_10, bool VAR_11)
{
  tree VAR_12;

  if (FUNC_8 (VAR_9) == VAR_2
      || FUNC_8 (VAR_9) == VAR_0
      || FUNC_8 (VAR_9) == VAR_3)






    return VAR_1;

  if (FUNC_11 (VAR_9)
      && FUNC_3 (FUNC_11 (VAR_9))
      && FUNC_6 (FUNC_11 (VAR_9)))
    {
      tree *VAR_13 = &FUNC_6 (FUNC_11 (VAR_9))->elts[0];
      int VAR_14 = 0, VAR_15 = FUNC_6 (FUNC_11 (VAR_9))->len;
      int VAR_16;

      while (VAR_14 < VAR_15)
 {
   VAR_16 = (VAR_14 + VAR_15) / 2;





   if (FUNC_4 (VAR_13[VAR_16]) > VAR_10)
     VAR_15 = VAR_16;
   else if (FUNC_4 (VAR_13[VAR_16]) < VAR_10)
     VAR_14 = VAR_16 + 1;
   else
     {
       VAR_12 = VAR_1;





       if (VAR_11)
  {
    do
      VAR_12 = VAR_13[VAR_16--];
    while (VAR_16 >= VAR_14 && FUNC_4 (VAR_13[VAR_16]) == VAR_10);
    if (FUNC_8 (VAR_12) != VAR_4
        && !FUNC_1 (VAR_12))
      VAR_12 = VAR_1;
  }
       else
  {
    do
      VAR_12 = VAR_13[VAR_16++];
    while (VAR_16 < VAR_15 && FUNC_4 (VAR_13[VAR_16]) == VAR_10);
  }
       return VAR_12;
     }
 }
      return VAR_1;
    }

  VAR_12 = FUNC_10 (VAR_9);




  for (VAR_12 = FUNC_10 (VAR_9); VAR_12; VAR_12 = FUNC_7 (VAR_12))
    {



      FUNC_14 (FUNC_5 (VAR_12));
      if (FUNC_4 (VAR_12) == VAR_1
   && FUNC_0 (FUNC_9 (VAR_12)))
 {
   tree VAR_17 = FUNC_15 (FUNC_9 (VAR_12), VAR_10, VAR_11);
   if (VAR_17)
     return VAR_17;
 }
      if (FUNC_8 (VAR_12) == VAR_5)
 {
   if (!FUNC_2 (VAR_12))
     continue;
 }

      if (FUNC_4 (VAR_12) == VAR_10
   && (!VAR_11
       || FUNC_8 (VAR_12) == VAR_4
       || FUNC_1 (VAR_12)))
 return VAR_12;
    }

  if (VAR_10 == VAR_8)
    {

      if (FUNC_12 (VAR_9))
 return FUNC_13 (VAR_9);
    }
  return VAR_1;
}
