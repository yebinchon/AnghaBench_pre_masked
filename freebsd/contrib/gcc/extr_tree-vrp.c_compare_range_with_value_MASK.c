
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_5 (enum tree_code VAR_12, value_range_t *VAR_13, tree VAR_14,
     bool *VAR_15)
{
  if (VAR_13->type == VAR_9 || VAR_13->type == VAR_8)
    return VAR_6;


  if (VAR_13->type == VAR_7)
    {


      if (VAR_12 == VAR_2
   || VAR_12 == VAR_1
   || VAR_12 == VAR_4
   || VAR_12 == VAR_3)
 return VAR_6;


      if (FUNC_4 (VAR_14, VAR_13) == 1)
 return (VAR_12 == VAR_5) ? VAR_11 : VAR_10;

      return VAR_6;
    }

  if (!FUNC_3 (VAR_13, VAR_15))
    return VAR_6;

  if (VAR_12 == VAR_0)
    {


      if (FUNC_0 (VAR_13->min, VAR_13->max, VAR_15) == 0)
 {
   int VAR_16 = FUNC_0 (VAR_13->min, VAR_14, VAR_15);
   if (VAR_16 == 0)
     return VAR_11;
   else if (VAR_16 == -1 || VAR_16 == 1 || VAR_16 == 2)
     return VAR_10;
 }
      else if (FUNC_0 (VAR_14, VAR_13->min, VAR_15) == -1
        || FUNC_0 (VAR_13->max, VAR_14, VAR_15) == -1)
 return VAR_10;

      return VAR_6;
    }
  else if (VAR_12 == VAR_5)
    {

      if (FUNC_0 (VAR_13->max, VAR_14, VAR_15) == -1
   || FUNC_0 (VAR_13->min, VAR_14, VAR_15) == 1)
 return VAR_11;



      if (FUNC_0 (VAR_13->min, VAR_13->max, VAR_15) == 0
   && FUNC_0 (VAR_13->min, VAR_14, VAR_15) == 0)
 return VAR_10;


      return VAR_6;
    }
  else if (VAR_12 == VAR_4 || VAR_12 == VAR_3)
    {
      int VAR_17;


      VAR_17 = FUNC_0 (VAR_13->max, VAR_14, VAR_15);
      if ((VAR_12 == VAR_4 && VAR_17 == -1)
   || (VAR_12 == VAR_3 && (VAR_17 == -1 || VAR_17 == 0)))
 {
   if (FUNC_2 (VAR_13))
     *VAR_15 = 1;
   return VAR_11;
 }


      VAR_17 = FUNC_0 (VAR_13->min, VAR_14, VAR_15);
      if ((VAR_12 == VAR_4 && (VAR_17 == 0 || VAR_17 == 1))
   || (VAR_12 == VAR_3 && VAR_17 == 1))
 {
   if (FUNC_2 (VAR_13))
     *VAR_15 = 1;
   return VAR_10;
 }


      return VAR_6;
    }
  else if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
    {
      int VAR_18;


      VAR_18 = FUNC_0 (VAR_13->min, VAR_14, VAR_15);
      if ((VAR_12 == VAR_2 && VAR_18 == 1)
   || (VAR_12 == VAR_1 && (VAR_18 == 0 || VAR_18 == 1)))
 {
   if (FUNC_2 (VAR_13))
     *VAR_15 = 1;
   return VAR_11;
 }


      VAR_18 = FUNC_0 (VAR_13->max, VAR_14, VAR_15);
      if ((VAR_12 == VAR_2 && (VAR_18 == -1 || VAR_18 == 0))
   || (VAR_12 == VAR_1 && VAR_18 == -1))
 {
   if (FUNC_2 (VAR_13))
     *VAR_15 = 1;
   return VAR_10;
 }


      return VAR_6;
    }

  FUNC_1 ();
}
