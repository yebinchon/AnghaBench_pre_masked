
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; scalar_t__ min; scalar_t__ max; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_8 (scalar_t__,TYPE_1__*,scalar_t__,int*) ;
 scalar_t__ FUNC_9 (scalar_t__,TYPE_1__*,TYPE_1__*,int*) ;
 int FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_6, bool VAR_7,
    bool *VAR_8)
{
  FUNC_10 (FUNC_2 (VAR_6) == VAR_2
              || FUNC_3 (FUNC_2 (VAR_6)) == VAR_5);

  if (FUNC_2 (VAR_6) == VAR_2)
    {
      value_range_t *VAR_9;
      tree VAR_10;

      if (VAR_7)
 VAR_10 = FUNC_6 (VAR_0, VAR_6, VAR_4,
       VAR_8);
      else
 {
   value_range_t *VAR_11 = FUNC_11 (VAR_6);
   VAR_10 = FUNC_8 (VAR_0, VAR_11, VAR_4,
          VAR_8);
 }


      if (VAR_10)
 return VAR_10;



      VAR_9 = FUNC_11 (VAR_6);
      if (VAR_9->type == VAR_3 && VAR_9->min == VAR_9->max)
 return VAR_9->min;
    }
  else
    {
      tree VAR_12 = FUNC_4 (VAR_6, 0);
      tree VAR_13 = FUNC_4 (VAR_6, 1);


      if (!FUNC_0 (FUNC_5 (VAR_12))
   && !FUNC_1 (FUNC_5 (VAR_12)))
 return VAR_1;

      if (VAR_7)
 {
   if (FUNC_2 (VAR_12) == VAR_2 && FUNC_2 (VAR_13) == VAR_2)
     return FUNC_7 (FUNC_2 (VAR_6), VAR_12, VAR_13,
      VAR_8);
   else if (FUNC_2 (VAR_12) == VAR_2)
     return FUNC_6 (FUNC_2 (VAR_6), VAR_12, VAR_13,
         VAR_8);
   else if (FUNC_2 (VAR_13) == VAR_2)
     return (FUNC_6
      (FUNC_12 (FUNC_2 (VAR_6)), VAR_13, VAR_12,
       VAR_8));
 }
      else
 {
   value_range_t *VAR_14, *VAR_15;

   VAR_14 = (FUNC_2 (VAR_12) == VAR_2) ? FUNC_11 (VAR_12) : ((void*)0);
   VAR_15 = (FUNC_2 (VAR_13) == VAR_2) ? FUNC_11 (VAR_13) : ((void*)0);

   if (VAR_14 && VAR_15)
     return FUNC_9 (FUNC_2 (VAR_6), VAR_14, VAR_15,
       VAR_8);
   else if (VAR_14 && VAR_15 == ((void*)0))
     return FUNC_8 (FUNC_2 (VAR_6), VAR_14, VAR_13,
          VAR_8);
   else if (VAR_14 == ((void*)0) && VAR_15)
     return (FUNC_8
      (FUNC_12 (FUNC_2 (VAR_6)), VAR_15, VAR_12,
       VAR_8));
 }
    }


  return VAR_1;
}
