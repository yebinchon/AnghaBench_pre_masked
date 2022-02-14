
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int max; int min; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*) ;

__attribute__((used)) static tree
FUNC_5 (enum tree_code VAR_13, value_range_t *VAR_14, value_range_t *VAR_15,
  bool *VAR_16)
{

  if (VAR_14->type == VAR_10
      || VAR_14->type == VAR_9
      || VAR_15->type == VAR_10
      || VAR_15->type == VAR_9)
    return VAR_6;


  if (VAR_14->type == VAR_7 || VAR_15->type == VAR_7)
    {


      if (VAR_14->type == VAR_7 && VAR_15->type == VAR_7)
 return VAR_6;


      if (VAR_13 == VAR_2
   || VAR_13 == VAR_1
   || VAR_13 == VAR_4
   || VAR_13 == VAR_3)
 return VAR_6;



      if (VAR_14->type == VAR_8)
 {

   value_range_t *VAR_17 = VAR_14;
   VAR_14 = VAR_15;
   VAR_15 = VAR_17;
 }

      FUNC_1 (VAR_13 == VAR_5 || VAR_13 == VAR_0);

      if (FUNC_0 (VAR_14->min, VAR_15->min, VAR_16) == 0
   && FUNC_0 (VAR_14->max, VAR_15->max, VAR_16) == 0)
 return (VAR_13 == VAR_5) ? VAR_12 : VAR_11;

      return VAR_6;
    }

  if (!FUNC_4 (VAR_14, VAR_16)
      || !FUNC_4 (VAR_15, VAR_16))
    return VAR_6;



  if (VAR_13 == VAR_2 || VAR_13 == VAR_1)
    {
      value_range_t *VAR_18;
      VAR_13 = (VAR_13 == VAR_2) ? VAR_4 : VAR_3;
      VAR_18 = VAR_14;
      VAR_14 = VAR_15;
      VAR_15 = VAR_18;
    }

  if (VAR_13 == VAR_0)
    {


      if (FUNC_0 (VAR_14->min, VAR_14->max, VAR_16) == 0
   && FUNC_0 (VAR_15->min, VAR_15->max, VAR_16) == 0)
 {
   int VAR_19 = FUNC_0 (VAR_14->min, VAR_15->min,
           VAR_16);
   int VAR_20 = FUNC_0 (VAR_14->max, VAR_15->max,
           VAR_16);
   if (VAR_19 == 0 && VAR_20 == 0)
     return VAR_12;
   else if (VAR_19 != -2 && VAR_20 != -2)
     return VAR_11;
 }

      else if (FUNC_0 (VAR_14->min, VAR_15->max,
         VAR_16) == 1
        || FUNC_0 (VAR_15->min, VAR_14->max,
     VAR_16) == 1)
 return VAR_11;

      return VAR_6;
    }
  else if (VAR_13 == VAR_5)
    {
      int VAR_21, VAR_22;






      VAR_21 = FUNC_0 (VAR_14->max, VAR_15->min, VAR_16);
      VAR_22 = FUNC_0 (VAR_14->min, VAR_15->max, VAR_16);
      if ((VAR_21 == -1 && VAR_22 == -1) || (VAR_21 == 1 && VAR_22 == 1))
 return VAR_12;



      else if (FUNC_0 (VAR_14->min, VAR_14->max,
         VAR_16) == 0
        && FUNC_0 (VAR_15->min, VAR_15->max,
     VAR_16) == 0
        && FUNC_0 (VAR_14->min, VAR_15->min,
     VAR_16) == 0
        && FUNC_0 (VAR_14->max, VAR_15->max,
     VAR_16) == 0)
 return VAR_11;


      else
 return VAR_6;
    }
  else if (VAR_13 == VAR_4 || VAR_13 == VAR_3)
    {
      int VAR_23;


      VAR_23 = FUNC_0 (VAR_14->max, VAR_15->min, VAR_16);
      if ((VAR_13 == VAR_4 && VAR_23 == -1)
   || (VAR_13 == VAR_3 && (VAR_23 == -1 || VAR_23 == 0)))
 {
   if (FUNC_3 (VAR_14)
       || FUNC_3 (VAR_15))
     *VAR_16 = 1;
   return VAR_12;
 }


      VAR_23 = FUNC_0 (VAR_14->min, VAR_15->max, VAR_16);
      if ((VAR_13 == VAR_4 && (VAR_23 == 0 || VAR_23 == 1))
   || (VAR_13 == VAR_3 && VAR_23 == 1))
 {
   if (FUNC_3 (VAR_14)
       || FUNC_3 (VAR_15))
     *VAR_16 = 1;
   return VAR_11;
 }


      return VAR_6;
    }

  FUNC_2 ();
}
