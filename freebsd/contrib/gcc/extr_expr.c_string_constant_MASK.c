
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int (* binds_local_p ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (scalar_t__) ;
 TYPE_1__ VAR_9 ;

tree
FUNC_12 (tree VAR_10, tree *VAR_11)
{
  tree VAR_12, VAR_13;
  FUNC_2 (VAR_10);

  if (FUNC_3 (VAR_10) == VAR_0)
    {
      if (FUNC_3 (FUNC_4 (VAR_10, 0)) == VAR_5)
 {
   *VAR_11 = VAR_7;
   return FUNC_4 (VAR_10, 0);
 }
      else if (FUNC_3 (FUNC_4 (VAR_10, 0)) == VAR_6)
 {
   VAR_12 = FUNC_4 (VAR_10, 0);
   VAR_13 = VAR_7;
 }
      else if (FUNC_3 (FUNC_4 (VAR_10, 0)) == VAR_1)
 {
   VAR_12 = FUNC_4 (FUNC_4 (VAR_10, 0), 0);
   VAR_13 = FUNC_4 (FUNC_4 (VAR_10, 0), 1);
   if (FUNC_3 (VAR_12) != VAR_5
       && FUNC_3 (VAR_12) != VAR_6)
     return 0;
 }
      else
 return 0;
    }
  else if (FUNC_3 (VAR_10) == VAR_4)
    {
      tree VAR_14 = FUNC_4 (VAR_10, 0);
      tree VAR_15 = FUNC_4 (VAR_10, 1);

      FUNC_2 (VAR_14);
      FUNC_2 (VAR_15);

      if (FUNC_3 (VAR_14) == VAR_0
   && (FUNC_3 (FUNC_4 (VAR_14, 0)) == VAR_5
       || FUNC_3 (FUNC_4 (VAR_14, 0)) == VAR_6))
 {
   VAR_12 = FUNC_4 (VAR_14, 0);
   VAR_13 = VAR_15;
 }
      else if (FUNC_3 (VAR_15) == VAR_0
        && (FUNC_3 (FUNC_4 (VAR_15, 0)) == VAR_5
     || FUNC_3 (FUNC_4 (VAR_15, 0)) == VAR_6))
 {
   VAR_12 = FUNC_4 (VAR_15, 0);
   VAR_13 = VAR_14;
 }
      else
 return 0;
    }
  else
    return 0;

  if (FUNC_3 (VAR_12) == VAR_5)
    {
      *VAR_11 = FUNC_9 (VAR_8, VAR_13);
      return VAR_12;
    }
  else if (FUNC_3 (VAR_12) == VAR_6)
    {
      int VAR_16;


      if (FUNC_0 (VAR_12) == VAR_3
   || FUNC_3 (FUNC_0 (VAR_12)) != VAR_5)
 return 0;


      if (! FUNC_5 (VAR_12)
   || FUNC_6 (VAR_12)
   || ! VAR_9.binds_local_p (VAR_12))
 return 0;


      if (FUNC_1 (VAR_12) == VAR_3
   || FUNC_3 (FUNC_1 (VAR_12)) != VAR_2
   || (VAR_16 = FUNC_7 (FUNC_0 (VAR_12))) <= 0
   || FUNC_8 (FUNC_1 (VAR_12), VAR_16) < 0)
 return 0;



      VAR_13 = FUNC_9 (VAR_8, VAR_13);
      if (FUNC_8 (FUNC_1 (VAR_12), VAR_16) > 0
   && (! FUNC_10 (VAR_13, 1)
       || FUNC_8 (VAR_13, VAR_16) >= 0))
 return 0;

      *VAR_11 = VAR_13;
      return FUNC_0 (VAR_12);
    }

  return 0;
}
